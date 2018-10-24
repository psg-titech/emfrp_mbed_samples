SRCS = main.cpp
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET)
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

build: $(SRCS) mbed-os
	mbed compile $(COMPOPTS)

install: build
	mbed compile $(COMPOPTS) -f

mbed-os:
	ln -s ../mbed-os .

clean:

allclean: clean
	$(RM) -rf BUILD
	$(RM) mbed-os
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store

