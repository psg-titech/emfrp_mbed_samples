PROGNAME = FRPBlinker
GENSRCS = $(PROGNAME).c $(PROGNAME).h
SRCS = main.cpp
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET)
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

$(GENSRCS): $(PROGNAME).mfrp
	emfrp $<

build: $(SRCS) $(GENSRCS) mbed-os
	mbed compile $(COMPOPTS)

install: build
	mbed compile $(COMPOPTS) -f

mbed-os:
	ln -s ../mbed-os .

clean:
	$(RM) $(PROGNAME).c $(PROGNAME).h
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) -rf BUILD
	$(RM) mbed-os
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store


