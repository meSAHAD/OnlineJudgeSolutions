
//Pass by value: Pass by value means that the value of the variable is copied and passed to the function.
//Example:
#include <stdio.h>


void add(int x)
{
    x = x + 10;
}


int main()
{
    int a = 1;
    add(a);
    printf("%d", a);
    return 0;
}

//Pass by reference: Pass by reference means that a reference to the variable is passed to the function.
//Example:
#include <stdio.h>


void multipyby10(int *x)
{
    (*x) = (*x) * 10;
}


int main()
{
    int a = 1;
    multipyby10(&a);
    printf("%d", a);
    return 0;
}
