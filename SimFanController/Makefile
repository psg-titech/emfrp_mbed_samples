PROGNAME = SimFanController
SRCS = main.c
OBJS = main.o $(PROGNAME).o
EXES = $(PROGNAME)

CFLAGS = 

all: $(EXES)

main.o: $(PROGNAME).h

$(PROGNAME).c $(PROGNAME).h: $(PROGNAME).mfrp
	emfrp $<

$(PROGNAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(PROGNAME)
	$(RM) $(PROGNAME).c $(PROGNAME).h
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) a.out
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store

