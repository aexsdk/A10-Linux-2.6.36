cmd_drivers/mmc/built-in.o :=  arm-none-linux-gnueabi-ld -EL    -r -o drivers/mmc/built-in.o drivers/mmc/core/built-in.o drivers/mmc/card/built-in.o drivers/mmc/mmc-pm/built-in.o drivers/mmc/sun4i-host/built-in.o 