# These might be a good idea
.POSIX:
AM_CFLAGS = -std=c99 -pedantic -D_POSIX_C_SOURCE=200809L -Wall -Wextra
AM_LDFLAGS = 

# This might be how to add CPP stuff
# AM_CPPFLAGS =  -pedantic -Wall -Wextra
# AM_CPPFLAGS+= -std=c++11

# This might be how to link against things:
# AM_CFLAGS += -lnani1
# AM_LDFLAGS += -lsome_library

# === Libraries ===
# Libraries that are generated and to be installed by this:

lib_LTLIBRARIES = libnani1.la

libnani1_la_SOURCES = \
	nani1.c \
	nani1.h

include_HEADERS = nani1.h

libnani1_la_LDFLAGS = -version-info 0:0:0

# === End Libraries ===
