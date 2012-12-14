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
			cards: ARRAYED_LIST[G21_CARD] --human cards
			cards_ai: ARRAYED_LIST[G21_CARD]

feature {NONE} -- main feature

	make
		local
			temp_easy_ai: G21_EASY_AI
			temp_medium_ai: G21_MEDIUM_AI
			temp_hard_ai: G21_HARD_AI
			card:G21_CARD
			str: ARRAY[STRING]
			read:INTEGER
			number_player: INTEGER
			temp_x:INTEGER
			temp_y:INTEGER
			temp_move:G21_MOVE
			temp_position: G21_POINT
			temp_index_card:INTEGER
		do
			print ("Triple Triad!%N")

			create cards.make (5)
			create board.make_filled (void, 3, 3)
			board:=make_board
			cards:=make_deck
			cards_ai:=cards.twin
			print(cards.count)

			from
			until
				ai/=void
			loop
				print ("Choose type of AI: insert 1 for easy, insert 2 for medium, insert 3 for hard%N")
				io.read_integer
				read:=io.last_integer

				if(read=3) then
				--	create temp_hard_ai.make (board, cards_ai)
				--	ai:=temp_hard_ai
				end
				if(read=2) then
					create temp_medium_ai.make (board, cards_ai)
					ai:=temp_medium_ai
				end
				if(read=1) then
					create temp_easy_ai.make (board, cards_ai)
					ai:=temp_easy_ai
				end
			end

			number_player:=1 --set the initial player(human): 1 human, 2 ai

			from
			until
				not full_board
			loop
				print_on_io_game_state(number_player)
				if(number_player=1) then
					print("E' il tuo turno.%NInserisci il numero della carta che vuoi inserire%N")
					io.read_integer
					read:=io.last_integer
					temp_index_card:=read
					print("Inserisci la posizione(x):")
					io.read_integer
					temp_x:=io.last_integer
					print("Inserisci la posizione(y):")
					io.read_integer
					temp_y:=io.last_integer
					create temp_position.make (temp_x, temp_y)
					create temp_move.make (cards.at (temp_index_card), temp_position)
					insert_catd_into_board(number_player, temp_move)
					remove_card(number_player, temp_index_card)
					number_player:=2
				else
					print("%N%N")
					temp_move:= ai.make_a_move (temp_move.position) --temp_move contains a move of the first player or it is void
					insert_catd_into_board(number_player, temp_move)
					cards_ai.prune(temp_move.card)
					number_player:=1
				end
			end
			print("La partita è conclusa.%N%N")
		--	print_on_io_array(print_board)
			str:=print_board

		end

feature {ANY} --support feature
	insert_catd_into_board(number_player: INTEGER; move:G21_MOVE)
		local
			cell: G21_CELL
		do
			create cell.make
			cell.setcard (move.card)
			cell.setplayernumber (number_player)
			board[move.position.x,move.position.y] := cell
		end

	remove_card(number_player: INTEGER; index_card: INTEGER)
		do
			if(number_player=1) then
					cards.prune (cards[index_card])
				else
					cards_ai.prune (cards_ai[index_card])
				end
		end


	full_board:BOOLEAN
		local

			i:INTEGER
			j:INTEGER
		do
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
					if(board[i,j].isoccupied=FALSE) then
						result:=FALSE
					end
					j:=j+1
				end
				i:=i+1
			end
			result:=TRUE
		end

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

	print_on_io_game_state(number_player: INTEGER)
		local
			str:ARRAY[STRING]
		do
			str:=print_board()
		--	print_on_io_array(str)
			if(number_player=1) then
				str:=print_cards(cards)
			else
				str:=print_cards(cards_ai)
			end
			print_on_io_array(str)
		end

	print_cards(cards_list: ARRAYED_LIST[G21_CARD]):ARRAY[STRING]
		local
			r: ARRAY[STRING]
			str: ARRAY[STRING]
			i: INTEGER
			j:INTEGER
		do
			create r.make_filled ("", 1, (3*cards_list.count + 1))
			from
				i:= 1
			until
				not cards_list.valid_index (i)
			loop
				from
					j:= 1
				until
					j>3
				loop
					str:=print_card(cards_list[i])
					r[j+(i-1)*3]:=str[j].twin
					j:=j+1
				end
				i := i + 1
			end
			result:=r
		end

	print_card(card: G21_CARD):ARRAY[STRING]
		local
			string: STRING
			r: ARRAY[STRING]
			tab: STRING
			temp: STRING
		do
			create tab.make_from_string ("   ")
			create r.make_filled ("|", 1, 3)
			string:= tab.twin
			temp:=card.top.to_hex_string
			temp.remove_substring (1, 7)
			string.append_string_general(temp)
			string.append_string_general(tab)
			r.put (string, 1)
			temp:=card.left.to_hex_string
			temp.remove_substring (1, 7)
			string:=(temp).twin
			string.append_string_general(tab)
			temp:=card.right.to_hex_string
			temp.remove_substring (1, 7)
			string.append_string_general(temp)
			r.put (string, 2)
			string:= tab.twin
			temp:=card.bottom.to_hex_string
			temp.remove_substring (1, 7)
			string.append_string_general(temp)
			string.append_string_general(tab)
			r.put (string, 3)
			result:=r
		end

	print_cell(cell: G21_CELL): ARRAY[STRING]
		local
			temp:STRING
			string: STRING
			r: ARRAY[STRING]
			tab: STRING
			space:STRING
			err: INTEGER
		do
				create err
				create r.make_filled ("|bbbbbb", 1, 3)
				create tab.make_from_string("tt")
				create space.make_from_string("s")
				if(cell.card/=void and then cell.card.bottom/=err) then
					create string.make_empty
					string:=tab.twin
					string.append_string_general(cell.element.out)
					string.append_string_general(space)

					temp:=cell.card.top.to_hex_string
					temp.remove_substring (1, 7)
					string.append_string_general(temp)
					string.append_string_general(tab)
					r[1]:=string.twin

					string:=""
					temp:=cell.card.left.to_hex_string
					temp.remove_substring (1, 7)
					string:=temp.twin
					string.append_string_general(space)
					temp:=cell.getplayernumber.to_hex_string
					temp.remove_substring (1, 7)
					string.append_string_general(temp)
					string.append_string_general(space)
					temp:=cell.card.right.to_hex_string
					temp.remove_substring (1, 7)
					string.append_string_general(temp)
					r[2]:=string.twin

					string:=""
					string:=tab.twin
					temp:=cell.card.bottom.to_hex_string
					temp.remove_substring (1, 7)
					string.append_string_general(temp)
					string.append_string_general(tab)
					r[3]:=string.twin
				end


			result:=r

		end

	print_on_io_array(str: ARRAY[STRING])
		local
			i:INTEGER
		do
			from
				i:= 1
			until
				not str.valid_index (i)
			loop
				print(str[i])
				print("%N")
				io.put_new_line
				i:=i+1
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
			create r.make_filled ("", 1, 9)
			create temp.make_filled ("", 1, 3)

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
						temp:= print_cell(board.item (i, j))
						print(i)
						print(",")
						print(j)
						print("%N")
						print_on_io_array( print_cell(board.item (i, j)) )
						print("%N")
						from
							k:= 1
						until
							k > 3
						loop
							r[(k+(i-1)*3)].append(temp[k])
							r[k+(i-1)*3].append(i.to_hex_string)
							r[k+(i-1)*3].append(j.to_hex_string)
							r[k+(i-1)*3].append(k.to_hex_string)
							k:=k+1
						end
						temp.discard_items
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


