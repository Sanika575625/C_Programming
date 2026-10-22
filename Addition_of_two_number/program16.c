#include "Header.h"
#include<assert.h>              //testing purpose

int main()
{
    assert(Addition(10,11) == 21);

    assert(Addition(-10,20) == 10);

    assert(Addition(-10,-20) == -30);

    return EXIT_SUCCESS;
}