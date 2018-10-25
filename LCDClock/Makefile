PROGNAME = LCDClock
GENSRCS = $(PROGNAME).cpp $(PROGNAME).h
SRCS = main.cpp
LIBS = mbed-os C12832_lcd
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET)
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

$(GENSRCS): $(PROGNAME).mfrp
	emfrp $<
	mv $(PROGNAME).c $(PROGNAME).cpp
	rm $(PROGNAME)Main.c.gen

build: $(SRCS) $(GENSRCS) $(LIBS)
	mbed compile $(COMPOPTS)

install: build
	mbed compile $(COMPOPTS) -f

mbed-os:
	ln -s ../mbed-os .

C12832_lcd:
	mbed add http://os.mbed.com/users/dreschpe/code/C12832_lcd/

clean:
	$(RM) $(PROGNAME).cpp $(PROGNAME).h
	$(RM) $(PROGNAME)Main.*

allclean: clean
	$(RM) -rf BUILD
	$(RM) mbed-os
	$(RM) -rf C12832_lcd C12832_lcd.lib
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store


