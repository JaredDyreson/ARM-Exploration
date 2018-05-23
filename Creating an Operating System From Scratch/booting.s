mov ah, 0x0e ; we want to invoke tty mode
mov al, "1" ; always execute
int 0x10 ; cause a system interrupt and print the contents of the register al
bx lr, al
