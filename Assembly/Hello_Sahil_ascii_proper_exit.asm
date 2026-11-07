.intel_syntax noprefix
.global _start
.text
_start:
mov rax, 1;
mov rdi, 1;
lea rsi, [message];
lea rdx, [length];
syscall;

mov rax, 60;
xor rdi, rdi;
syscall;

.data
message: .ascii "Hello Buddy, Life's Good :)";
length= .-message
