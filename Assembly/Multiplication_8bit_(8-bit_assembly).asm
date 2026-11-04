lda 0024h;
mov b,a;
lda 0025h;
mov c,a;
mvi a,00h;

loop:add b;
    dcr c;
    jnz loop;

sta 0035h;
hlt;
