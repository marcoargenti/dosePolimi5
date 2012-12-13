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

OLDOBJECTS =  ma837.o ma837d.o ma837f.o g2848.o g2848d.o g2848f.o g2847.o \
	g2847d.o g2847f.o g2846.o g2846d.o g2846f.o g2845.o g2845d.o g2845f.o \
	g2844.o g2844d.o g2844f.o g2843.o g2843d.o g2843f.o g2842.o g2842d.o \
	g2842f.o g2841.o g2841d.o g2841f.o g2840.o g2840d.o g2840f.o g2839.o \
	g2839d.o g2839f.o g2838.o g2838d.o g2838f.o ti866.o ti866d.o ti866f.o \
	c_849.o c_849d.o c_849f.o ab867.o ab867d.o ab867f.o ti856.o ti856d.o \
	ti856f.o da862.o da862d.o da862f.o da857.o da857d.o da857f.o du863.o \
	du863d.o du863f.o ti855.o ti855d.o ti855f.o ti854.o ti854d.o ti854f.o \
	co861.o co861d.o co861f.o da865.o da865d.o da865f.o da868.o da868d.o \
	da868f.o da864.o da864d.o da864f.o da859.o da859d.o da859f.o ti853.o \
	ti853d.o ti853f.o gr852.o gr852d.o gr852f.o da860.o da860d.o da860f.o \
	da858.o da858d.o da858f.o da851.o da851d.o da851f.o da850.o da850d.o \
	da850f.o 

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

