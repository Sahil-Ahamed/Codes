.intel_syntax noprefix
.global _start
.text
_start:
mov rax, 1;
mov rdi, 1;
lea rsi, [message];
mov rdx, 0x11;
syscall;



.data
message: .byte 'H','e','l','l','o',' ','S','a','h','i','l';
