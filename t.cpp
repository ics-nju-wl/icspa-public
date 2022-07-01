#include <stdio.h>


struct test
{
    union
    {
        union 
        {
            unsigned int a;
            unsigned short b;
            unsigned char c[2];
        };
        unsigned int d;
    };
    
};

int main()
{
    test t;
    t.a = 0xffffffff;
    printf("%8x\n", t.a);
    t.b = 0x2222;
    t.c[0] = 0x11;
    printf("%08x\n", t.d);
}