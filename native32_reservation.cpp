// Reserve the guest image VA before the Windows loader creates heaps/NLS maps.
// This section contains zeros, is writable, and has no executable permission.
asm(".section .raw_guest,\"bw\"\n"
    ".globl _raw_guest_reservation\n"
    "_raw_guest_reservation:\n"
    ".space 0x00531000,0\n");
