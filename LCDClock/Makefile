PROGNAME = LCDClock
GENSRCS = $(PROGNAME).cpp $(PROGNAME).h
SRCS = main.cpp
LIBS = C12832_lcd
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

build: $(SRCS) $(GENSRCS) $(LIBS) .mbed
	mbed compile $(COMPOPTS)

install: $(SRCS) $(GENSRCS) $(LIBS) .mbed
	mbed compile $(COMPOPTS) -f

C12832_lcd:
	mbed add http://os.mbed.com/users/dreschpe/code/C12832_lcd/

clean:
	$(RM) $(PROGNAME).cpp $(PROGNAME).h
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) -rf BUILD
	$(RM) -rf C12832_lcd C12832_lcd.lib
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store
