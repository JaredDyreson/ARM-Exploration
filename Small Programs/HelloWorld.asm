my_operating_system:
  db 'Linux', 0

mov ah, 0x0e
mov al, my_operating_system
int 0x10

jmp $
