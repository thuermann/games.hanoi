#
# $Id: Makefile,v 1.1 2016/01/22 06:57:43 urs Exp $
#

RM      = rm -f
CFLAGS  = -Os
LDFLAGS = -s

programs = hanoi

.PHONY: all
all: $(programs)

.PHONY: clean
clean:
	$(RM) $(programs) *.o core
