note
	description: "Summary description for {G21_OPEN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	G21_OPEN
inherit
	G21_RULES


	redefine isMakeChange,makeChangeAndUpdate end
create
	make


	feature
	cardDeckPlayer1:ARRAYED_LIST[G21_CARD]
	make(board:ARRAY2[G21_CELL])
		do
			init(board)
			--create cardDeckPlayer1.make_empty
			--cardDeckPlayer1.copy()
		end
	setCardDeckPlayer1(deck:ARRAYED_LIST[G21_CARD])
	do
		create carddeckplayer1.make (0)
		cardDeckPlayer1:=deck.twin
	end
	getCardDeckPlayer1:ARRAYED_LIST[G21_CARD]
	do

		if(carddeckplayer1 = void)then
			(create {DEVELOPER_EXCEPTION}).raise
		end

		Result := cardDeckPlayer1
	end
	isMakeChange(pos_X:INTEGER_32 ; pos_Y:INTEGER_32 ; card:G21_CARD):BOOLEAN
	local
		p1:INTEGER
		p2:INTEGER
	do
		if((pos_x = 3 or pos_x = 2) and gameboard.item (pos_x-1, pos_y).isoccupied = true)
		then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x-1, pos_y).getplayernumber
			if(p1 /= p2)
			then
				if(gameboard.item (pos_x, pos_y).getcard.gettop /=
				   gameboard.item (pos_x-1, pos_y).getcard.getbottom)
				   then
				   		Result := true
				   else
				   		Result := false
				   end
			else
				Result := false
			end
		end

		if((pos_x = 1 or pos_x = 2)and gameboard.item (pos_x+1, pos_y).isoccupied = true)
		then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x+1, pos_y).getplayernumber
			if(p1 /= p2)
			then
				if(gameboard.item (pos_x, pos_y).getcard.getbottom /=
				   gameboard.item (pos_x+1, pos_y).getcard.gettop)
				   then
				   		Result := true
				   else
				   		Result := false
				   end
			else
				Result := false
			end

		end
		if((pos_y = 2 or pos_y = 3)and gameboard.item (pos_x, pos_y-1).isoccupied = true)
		then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x, pos_y-1).getplayernumber
			if(p1 /= p2)then
				if(gameboard.item (pos_x, pos_y-1).getcard.getright /=
				   gameboard.item (pos_x, pos_y).getcard.getleft)
				   then
				   		Result := true
				   else
				   		Result := false
				   end
			else
				Result := false
			end
		end

		if((pos_y = 1 or pos_y = 2)and gameboard.item (pos_x, pos_y+1).isoccupied = true)then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x, pos_y+1).getplayernumber
			if(p1 /= p2)then
				if(gameboard.item (pos_x, pos_y).getcard.getright /=
				   gameboard.item (pos_x, pos_y+1).getcard.getleft)
				   then
				   		Result := true
				   else
				   		Result := false
				   end
			else
				Result := false
			end
		end
	end

	makeChangeAndUpdate(pos_X:INTEGER_32 ; pos_Y:INTEGER_32 )
	local
		p1:INTEGER
		p2:INTEGER
	do
		if((pos_x = 3 or pos_x = 2) and
		gameboard.item (pos_x-1, pos_y).isoccupied = true)
		then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x-1, pos_y).getplayernumber
			if(p1 /= p2)
			then
				if(gameboard.item (pos_x, pos_y).getcard.gettop >
				   gameboard.item (pos_x-1, pos_y).getcard.getbottom)
				   then
				   		gameboard.item (pos_x-1, pos_y).setplayernumber (p1)
				   end
			end
		end

		if((pos_x = 1 or pos_x = 2) and
		gameboard.item (pos_x+1, pos_y).isoccupied = true)
		then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x+1, pos_y).getplayernumber
			if(p1 /= p2)
			then
				if(gameboard.item (pos_x, pos_y).getcard.getbottom >
				   gameboard.item (pos_x+1, pos_y).getcard.gettop)
				   then
				   		gameboard.item (pos_x+1, pos_y).setplayernumber (p1)
				   end
			end
		end
		if((pos_y = 2 or pos_y = 3) and
		gameboard.item (pos_x, pos_y-1).isoccupied = true)
		then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x, pos_y-1).getplayernumber
			if(p1 /= p2)then
				if(gameboard.item (pos_x, pos_y-1).getcard.getright <
				   gameboard.item (pos_x, pos_y).getcard.getleft)
				   then
				   		gameboard.item (pos_x, pos_y-1).setplayernumber (p1)
				   end
			end
		end

		if((pos_y = 1 or pos_y = 2) and
			gameboard.item (pos_x, pos_y+1).isoccupied = true)then
			p1 := gameboard.item (pos_x, pos_y).getplayernumber
			p2 := gameboard.item (pos_x, pos_y+1).getplayernumber
			if(p1 /= p2)then
				if(gameboard.item (pos_x, pos_y).getcard.getright >
				   gameboard.item (pos_x, pos_y+1).getcard.getleft)
				   then
				   		gameboard.item (pos_x, pos_y+1).setplayernumber (p1)
				   end
			end
		end
		
	end
end
