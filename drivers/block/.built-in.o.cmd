cmd_drivers/block/built-in.o :=  arm-none-linux-gnueabi-ld -EL    -r -o drivers/block/built-in.o drivers/block/brd.o drivers/block/loop.o drivers/block/cryptoloop.o drivers/block/sun4i_nand/built-in.o 