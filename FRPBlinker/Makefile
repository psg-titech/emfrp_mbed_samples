PROGNAME = FRPBlinker
GENSRCS = $(PROGNAME).cpp $(PROGNAME).h
SRCS = main.cpp
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET)
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

$(GENSRCS): $(PROGNAME).mfrp
	emfrp $<
	mv $(PROGNAME).c $(PROGNAME).cpp
	rm $(PROGNAME)Main.c.gen

build: $(SRCS) $(GENSRCS) mbed-os
	mbed compile $(COMPOPTS)

install: build
	mbed compile $(COMPOPTS) -f

mbed-os:
	ln -s ../mbed-os .

clean:
	$(RM) $(PROGNAME).cpp $(PROGNAME).h
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) -rf BUILD
	$(RM) mbed-os
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store


