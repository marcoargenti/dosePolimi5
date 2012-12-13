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

OLDOBJECTS =  ma837.obj ma837d.obj ma837f.obj g2848.obj g2848d.obj g2848f.obj g2847.obj \
	g2847d.obj g2847f.obj g2846.obj g2846d.obj g2846f.obj g2845.obj g2845d.obj g2845f.obj \
	g2844.obj g2844d.obj g2844f.obj g2843.obj g2843d.obj g2843f.obj g2842.obj g2842d.obj \
	g2842f.obj g2841.obj g2841d.obj g2841f.obj g2840.obj g2840d.obj g2840f.obj g2839.obj \
	g2839d.obj g2839f.obj g2838.obj g2838d.obj g2838f.obj ti866.obj ti866d.obj ti866f.obj \
	c_849.obj c_849d.obj c_849f.obj ab867.obj ab867d.obj ab867f.obj ti856.obj ti856d.obj \
	ti856f.obj da862.obj da862d.obj da862f.obj da857.obj da857d.obj da857f.obj du863.obj \
	du863d.obj du863f.obj ti855.obj ti855d.obj ti855f.obj ti854.obj ti854d.obj ti854f.obj \
	co861.obj co861d.obj co861f.obj da865.obj da865d.obj da865f.obj da868.obj da868d.obj \
	da868f.obj da864.obj da864d.obj da864f.obj da859.obj da859d.obj da859f.obj ti853.obj \
	ti853d.obj ti853f.obj gr852.obj gr852d.obj gr852f.obj da860.obj da860d.obj da860f.obj \
	da858.obj da858d.obj da858f.obj da851.obj da851d.obj da851f.obj da850.obj da850d.obj \
	da850f.obj 

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

