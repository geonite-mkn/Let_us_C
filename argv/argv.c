
#include <stdio.h>
#include "argv.h"

int main()
{
    //x, y and z are pointer to char
    char x[3]={'1', '2', '3'};
    char y[3]={'4', '5', '6'};
    char z[3]={'7', '8', '9'};

    //arr is pointer to char pointer
    char* arr[3]={x, y, z};

    func1(arr);
    func2(arr);
    return 0;
}
