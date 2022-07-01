#include <stdio.h>

#include <assert.h>
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
    assert(0);
    printf("YES");
}