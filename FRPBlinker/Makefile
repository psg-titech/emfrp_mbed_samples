PROGNAME = FRPBlinker
GENSRCS = $(PROGNAME).cpp $(PROGNAME).h
SRCS = main.cpp
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET) --source . --source $(MBED_OS_DIR)
MBED_OS_DIR = ../mbed-os
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

$(GENSRCS): $(PROGNAME).mfrp
	emfrp $<
	mv $(PROGNAME).c $(PROGNAME).cpp
	rm $(PROGNAME)Main.c.gen

.mbed: $(MBED_OS_DIR)
	mbed config root .
	mbed config MBED_OS_DIR $(MBED_OS_DIR)

build: $(SRCS) $(GENSRCS) .mbed
	mbed compile $(COMPOPTS)

install: $(SRCS) $(GENSRCS) .mbed
	mbed compile $(COMPOPTS) -f

clean:
	$(RM) $(GENSRCS)
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) -rf BUILD
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store
