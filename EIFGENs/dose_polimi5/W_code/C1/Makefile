INCLUDE_PATH = 
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -Zi -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 7.1 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -Zi -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 7.1 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 7.1 GPL\studio\spec\win64\lib\msc\wkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 7.1 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 7.1 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = dose_polimi5.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.obj 

OLDOBJECTS =  ma866.obj ma866d.obj ma866f.obj g2848.obj g2848d.obj g2848f.obj g2850.obj \
	g2850d.obj g2850f.obj g2841.obj g2841d.obj g2841f.obj g2845.obj g2845d.obj g2845f.obj \
	g2847.obj g2847d.obj g2847f.obj g2840.obj g2840d.obj g2840f.obj g2839.obj g2839d.obj \
	g2839f.obj g2838.obj g2838d.obj g2838f.obj g2846.obj g2846d.obj g2846f.obj g2849.obj \
	g2849d.obj g2849f.obj ti864.obj ti864d.obj ti864f.obj c_837.obj c_837d.obj c_837f.obj \
	ab865.obj ab865d.obj ab865f.obj ti854.obj ti854d.obj ti854f.obj du861.obj du861d.obj \
	du861f.obj ti853.obj ti853d.obj ti853f.obj da860.obj da860d.obj da860f.obj da855.obj \
	da855d.obj da855f.obj ti852.obj ti852d.obj ti852f.obj gr844.obj gr844d.obj gr844f.obj \
	da863.obj da863d.obj da863f.obj da862.obj da862d.obj da862f.obj da858.obj da858d.obj \
	da858f.obj co859.obj co859d.obj co859f.obj ti851.obj ti851d.obj ti851f.obj da867.obj \
	da867d.obj da867f.obj da868.obj da868d.obj da868f.obj da857.obj da857d.obj da857f.obj \
	da856.obj da856d.obj da856f.obj da843.obj da843d.obj da843f.obj da842.obj da842d.obj \
	da842f.obj 

all::  Cobj1.lib

Cobj1.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

