.intel_syntax noprefix
.global _start
.text
_start:

/* Creating fibonacchi series.
Cannot assign direct values to registers, except the initial one.*/

# Used r15 as buffer register
# Skipped rsp, rbp, rsi, rdi



mov rax, 0;
mov rbx, rax;
inc rbx;

mov rcx, rbx;

mov r15, rcx;
add r15, rbx;

mov rdx, r15;
mov r15, rdx;

add r15, rcx;
mov r8, r15;

mov r15, r8;
add r15,rdx;

mov r9, r15;

mov r15, r9;
add r15, r8;

mov r10, r15;
mov r15, r10;

add r15,r9;
mov r11,r15;

mov r15,r11;
add r15,r10;

mov r12,r15;
mov r15,r12;

add r15,r11;
mov r13,r15;

mov r15,r13;
add r15,r12;

mov r14,r15;
