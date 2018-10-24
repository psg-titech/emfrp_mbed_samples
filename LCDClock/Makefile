PROGNAME = LCDClock
GENSRCS = $(PROGNAME).c $(PROGNAME).h
SRCS = main.cpp
LIBS = mbed-os C12832_lcd
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET)
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

$(GENSRCS): $(PROGNAME).mfrp
	emfrp $<

build: $(SRCS) $(GENSRCS) $(LIBS)
	mbed compile $(COMPOPTS)

install: build
	mbed compile $(COMPOPTS) -f

mbed-os:
	ln -s ../mbed-os .

C12832_lcd:
	mbed add http://os.mbed.com/users/dreschpe/code/C12832_lcd/

clean:
	$(RM) $(PROGNAME).c $(PROGNAME).h
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) -rf BUILD
	$(RM) mbed-os
	$(RM) -rf C12832_lcd C12832_lcd.lib
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store


