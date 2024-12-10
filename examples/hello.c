// Simple bare metal hello world for RISC-V

// Write to spike console
void write_console(char c) {
    volatile char *tx = (volatile char *)0x10000000;
    *tx = c;
}

// Simple printf
void print(const char *s) {
    while (*s) write_console(*s++);
}

int main() {
    print("Hello from RISC-V!\n");
    return 0;
}