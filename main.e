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

feature {NONE} -- Initialization

	make
		do
			print ("Triple Triad!%N")
		end

end
