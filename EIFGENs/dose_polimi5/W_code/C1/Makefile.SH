case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C1"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = 
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = dose_polimi5$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.obj 

OLDOBJECTS =  ma866.o ma866d.o ma866f.o g2848.o g2848d.o g2848f.o g2850.o \
	g2850d.o g2850f.o g2841.o g2841d.o g2841f.o g2845.o g2845d.o g2845f.o \
	g2847.o g2847d.o g2847f.o g2840.o g2840d.o g2840f.o g2839.o g2839d.o \
	g2839f.o g2838.o g2838d.o g2838f.o g2846.o g2846d.o g2846f.o g2849.o \
	g2849d.o g2849f.o ti864.o ti864d.o ti864f.o c_837.o c_837d.o c_837f.o \
	ab865.o ab865d.o ab865f.o ti854.o ti854d.o ti854f.o du861.o du861d.o \
	du861f.o ti853.o ti853d.o ti853f.o da860.o da860d.o da860f.o da855.o \
	da855d.o da855f.o ti852.o ti852d.o ti852f.o gr844.o gr844d.o gr844f.o \
	da863.o da863d.o da863f.o da862.o da862d.o da862f.o da858.o da858d.o \
	da858f.o co859.o co859d.o co859f.o ti851.o ti851d.o ti851f.o da867.o \
	da867d.o da867f.o da868.o da868d.o da868f.o da857.o da857d.o da857f.o \
	da856.o da856d.o da856f.o da843.o da843d.o da843f.o da842.o da842d.o \
	da842f.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

