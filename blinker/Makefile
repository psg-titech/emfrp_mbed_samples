SRCS = main.cpp
COMPOPTS = -t $(TOOLCHAIN) -m $(TARGET) --source . --source $(MBED_OS_DIR)
MBED_OS_DIR = ../mbed-os
TOOLCHAIN = GCC_ARM
TARGET = LPC1768

.PHONY: all build install clean allclean

all: build

.mbed: $(MBED_OS_DIR)
	mbed config root .
	mbed config MBED_OS_DIR $(MBED_OS_DIR)

build: $(SRCS) .mbed
	mbed compile $(COMPOPTS)

install: $(SRCS) .mbed
	mbed compile $(COMPOPTS) -f

clean:

allclean: clean
	$(RM) -rf BUILD
	$(RM) .mbed
	$(RM) *.o
	$(RM) *~
	$(RM) .DS_Store
