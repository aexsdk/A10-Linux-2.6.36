cmd_drivers/md/built-in.o :=  arm-none-linux-gnueabi-ld -EL    -r -o drivers/md/built-in.o drivers/md/dm-mod.o drivers/md/dm-crypt.o drivers/md/dm-multipath.o drivers/md/dm-round-robin.o 
