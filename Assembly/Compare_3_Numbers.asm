lda 0012h;
mov b,a;
lda 0013h;
mov c,a;
lda 0014h;
cmp b;

jnc max;
mov a,b;

max:cmp c;
jnc max1;
mov a,c;

max1:sta 0016h;
hlt;
