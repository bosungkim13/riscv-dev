RISCV_PREFIX ?= riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
OBJDUMP = $(RISCV_PREFIX)objdump

CFLAGS = -march=rv64gcv -mabi=lp64d -static -mcmodel=medany \
         -fvisibility=hidden -nostdlib -nostartfiles \
         -T../setup/test.ld

PROGRAMS = hello vector_add

all: $(PROGRAMS)

%: %.c ../setup/crt.S
	$(CC) $(CFLAGS) -o $@ $< ../setup/crt.S
	$(OBJDUMP) -d $@ > $@.dump

clean:
	rm -f $(PROGRAMS) *.dump

.PHONY: all clean