cmd_drivers/hid/built-in.o :=  arm-none-linux-gnueabi-ld -EL    -r -o drivers/hid/built-in.o drivers/hid/hid.o drivers/hid/hid-a4tech.o drivers/hid/hid-apple.o drivers/hid/hid-belkin.o drivers/hid/hid-cherry.o drivers/hid/hid-chicony.o drivers/hid/hid-cypress.o drivers/hid/hid-ezkey.o drivers/hid/hid-kensington.o drivers/hid/hid-kye.o drivers/hid/hid-logitech.o drivers/hid/hid-microsoft.o drivers/hid/hid-monterey.o drivers/hid/usbhid/built-in.o 