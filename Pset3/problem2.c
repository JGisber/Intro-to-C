#include <stdio.h>

static int i;
static int i = 27;
static int i;

int main(void)
{
    static int i;
    printf("%d\n", i);
    return 0;
}

// it print 0 because static variable are store in the bss segment of memroy
// and by default variable store in bss segment are initialized with 0