#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    int result;
    
    if (argc == 3) {
        a = (int)argv[0] - 48;
        b = (int)argv[1] - 48;
        result = a + b;
        printf("%d\n", result);
    }
    
    return 0;
}
