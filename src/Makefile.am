# These might be a good idea
.POSIX:
AM_CFLAGS = -std=c99 -pedantic -D_POSIX_C_SOURCE=200809L -Wall -Wextra -I$(top_srcdir)/lib
# AM_LDFLAGS = -L$(top_srcdir)/lib
AM_LDFLAGS = -L../lib

# This might be how to add CPP stuff
# AM_CPPFLAGS =  -pedantic -Wall -Wextra
# AM_CPPFLAGS+= -std=c++11

# This might be how to link against things:
AM_CFLAGS += -lnani1
# AM_LDFLAGS += -lsome_library

# === Programs ===

bin_PROGRAMS = nani1_runner
nani1_runner_SOURCES = \
	main.c

# Needed, as per:
# https://www.gnu.org/software/automake/manual/html_node/Objects-created-both-with-libtool-and-without.html

nani1_runner_CFLAGS = $(AM_CFLAGS)

# === End Programs ===

