note
	description : "dose_polimi5 application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	MAIN

inherit
	ARGUMENTS

create
	make

feature{NONE} -- Attributes
			board: ARRAY2[G21_CELL]
			ai: G21_AI
			cards: ARRAYED_LIST[G21_CARD]

feature {NONE} -- main feature

	make
		local
			temp_easy_ai: G21_EASY_AI
			temp_medium_ai: G21_MEDIUM_AI
			temp_hard_ai: G21_HARD_AI
			card:G21_CARD
			str: ARRAY[STRING]
			read:INTEGER
		do
			print ("Triple Triad!%N")

			create cards.make (5)
			create board.make_filled (void, 3, 3)
			board:=make_board
			cards:=make_deck

			from
			until
				ai/=void
			loop
				print ("Choose type of AI: insert 1 for easy, insert 2 for medium, insert 3 for hard%N")
				read:=io.read_integer
				if(read=3)
				--	create temp_hard_ai.make (board, cards)
					ai:=temp_hard_ai
				end
				if(read=2)
					create temp_medium_ai.make (board, cards)
					ai:=temp_medium_ai
				end
				if(read=1)
					create temp_easy_ai.make (board, cards)
					ai:=temp_easy_ai
				end
			end



			
		end

feature {ANY} --support feature

	make_board: ARRAY2[G21_CELL]
		local
			i:INTEGER
			j:INTEGER
			cell:G21_CELL
		do
			create board.make_filled (void,3,3)
			from
				i:= 1
			until
				i > 3
			loop
					from
						j := 1
					until
						j > 3
					loop
						create cell.make
						board.put(cell,i,j)
						j := j + 1
					end
				i := i + 1
			end
			result:=board
		end

	print_card(card: G21_CARD):ARRAY[STRING]
		local
			string: STRING
			r: ARRAY[STRING]
			tab: STRING
		do
			tab.make_from_string ("   ")
			create r.make_filled ("|", 1, 3)
			string:= tab
			string.append_string_general(card.top.to_hex_string)
			string.append_string_general(tab)
			r.put (string, 1)
			string.copy(card.left.to_hex_string)
			string.append_string_general(tab)
			string.append_string_general(card.right.to_hex_string)
			r.put (string, 2)
			string:= tab
			string.append_string_general(card.bottom.to_hex_string)
			string.append_string_general(tab)
			r.put (string, 3)
			result:=r
		end

	print_cell(cell: G21_CELL): ARRAY[STRING]
		local
			string: STRING
			r: ARRAY[STRING]
			tab: STRING
			space:STRING
		do
			if(cell.isoccupied) then
				r:= print_card(cell.card)
			else
				tab.make_from_string ("   ")
				space.make_from_string (" ")

				create r.make_empty

				string:= string
				string.append_string_general(cell.element.out)
				string.append_string_general(space)
				string.append_string_general(cell.card.top.to_hex_string)
				string.append_string_general(tab)
				r[1].copy (string)
				string.copy(cell.card.left.to_hex_string)
				string.append_string_general(space)
				string.append_string_general(cell.getplayernumber.to_hex_string)
				string.append_string_general(space)
				string.append_string_general(cell.card.right.to_hex_string)
				r[2].copy (string)
				string:=tab
				string.append_string_general(cell.card.bottom.to_hex_string)
				string.append_string_general(tab)
				r[3].copy (string)
			end

			result:=r

		end

	print_array(str: ARRAY[STRING])
		local
			i:INTEGER
			index_array:INTEGER
		do
			index_array:=str.count
			from
				i:= 1
			until
				i >index_array
			loop
				print(str[i])
			end
		end

	print_board:ARRAY[STRING]
		local
			string: STRING
			r: ARRAY[STRING]
			temp: ARRAY[STRING]
			i:INTEGER
			j:INTEGER
			k:INTEGER
		do
			create r.make_empty

			from
				i:= 1
			until
				i > 3
			loop
					from
						j := 1
					until
						j > 3
					loop
						temp:= print_cell(board[i,j])
						from
							k:= 1
						until
							k > 3
						loop
							r[k+(i-1)*3].append (temp[k])
						end
						j := j + 1
					end
				i := i + 1
			end

			result:=r
		end

	make_deck: ARRAYED_LIST[G21_CARD]
		local
			card1:G21_CARD
			card2:G21_CARD
			card3:G21_CARD
			card4:G21_CARD
			card5:G21_CARD
		do
			create cards.make(0)

			create card1.make
			card1.setcardname ("Geezard")
			card1.setbottom (1)
			card1.setleft (3)
			card1.setright (4)
			card1.settop (1)
			card1.setElement(' ')

			create card2.make
			card2.setcardname ("Funguar")
			card2.setbottom (1)
			card2.setleft (3)
			card2.setright (1)
			card2.settop (1)
			card2.setElement(' ')

			create card3.make
			card3.setcardname ("Bite Bug")
			card3.setbottom (7)
			card3.setleft (1)
			card3.setright (1)
			card3.settop (1)
			card3.setElement(' ')

			create card4.make
			card4.setcardname ("Red Bat")
			card4.setbottom (1)
			card4.setleft (1)
			card4.setright (1)
			card4.settop (6)
			card4.setElement(' ')

			create card5.make
			card5.setcardname ("Blobra")
			card5.setbottom (1)
			card5.setleft (1)
			card5.setright (1)
			card5.settop (1)
			card5.setElement(' ')

			cards.force(card1)
			cards.force(card2)
			cards.force (card3)
			cards.force (card4)
			cards.force (card5)

			result:=cards
		end

	flip_card(position: G21_POINT; card:G21_CARD;number: INTEGER)--position where i have placed the card. it flip the close cards according to the flip rule
		local
			row: INTEGER
			column: INTEGER
		do
			row:=position.x
			column:=position.y

			if row-1>=1 then
				if board.item (row-1, column).isoccupied=TRUE then
					if 	board.item(row-1, column).getplayernumber/=number and then	card.top>board.item (row-1, column).card.bottom then
						board.item(row, column-1).setplayernumber (number)
					end
				end
			end

			if row+1<=3 then
				if board.item (row+1, column).isoccupied=TRUE then
					if board.item(row+1, column).getplayernumber/=number and then card.bottom>board.item (row+1, column).card.top then
						board.item(row, column-1).setplayernumber (number)
					end
				end
			end

			if column-1>=1 then
				if board.item (row, column-1).isoccupied=TRUE then
					if board.item(row, column-1).getplayernumber/=number and then card.left>board.item (row, column-1).card.right then
						board.item(row, column-1).setplayernumber (number)
					end
				end
			end

			if column+1<=3 then
				if board.item (row, column+1).isoccupied=TRUE then
					if board.item(row, column+1).getplayernumber/=number and then card.right>board.item (row, column+1).card.left then
						board.item(row, column-1).setplayernumber (number)
					end
				end
			end

		end

	make_move(move: G21_MOVE; player_number: INTEGER)
		local
		do
			board.item(move.position.x,move.position.y).setcard(move.card)
			board.item(move.position.x,move.position.y).setplayernumber (player_number)
			flip_card(move.position, move.card, player_number)
		end

end


