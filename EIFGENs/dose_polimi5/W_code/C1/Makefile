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

OLDOBJECTS =  ma866.obj ma866d.obj ma866f.obj g2858.obj g2858d.obj g2858f.obj g2860.obj \
	g2860d.obj g2860f.obj g2841.obj g2841d.obj g2841f.obj g2845.obj g2845d.obj g2845f.obj \
	g2840.obj g2840d.obj g2840f.obj g2857.obj g2857d.obj g2857f.obj g2839.obj g2839d.obj \
	g2839f.obj g2838.obj g2838d.obj g2838f.obj g2846.obj g2846d.obj g2846f.obj g2859.obj \
	g2859d.obj g2859f.obj c_837.obj c_837d.obj c_837f.obj ti864.obj ti864d.obj ti864f.obj \
	ab865.obj ab865d.obj ab865f.obj ti850.obj ti850d.obj ti850f.obj da856.obj da856d.obj \
	da856f.obj da851.obj da851d.obj da851f.obj du861.obj du861d.obj du861f.obj ti849.obj \
	ti849d.obj ti849f.obj ti848.obj ti848d.obj ti848f.obj co855.obj co855d.obj co855f.obj \
	da863.obj da863d.obj da863f.obj da867.obj da867d.obj da867f.obj da868.obj da868d.obj \
	da868f.obj ti847.obj ti847d.obj ti847f.obj da862.obj da862d.obj da862f.obj da853.obj \
	da853d.obj da853f.obj gr844.obj gr844d.obj gr844f.obj da854.obj da854d.obj da854f.obj \
	da843.obj da843d.obj da843f.obj da852.obj da852d.obj da852f.obj da842.obj da842d.obj \
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

