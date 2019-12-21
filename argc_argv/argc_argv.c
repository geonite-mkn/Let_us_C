#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;

    printf("The value stored in argc is=%d\n",argc);

    for (i = 0; i < argc; i++) {
      /* code */
    printf("The character stored in argv[%d] is=%s\n",i,argv[i]);  

    }
    return 0;
}
