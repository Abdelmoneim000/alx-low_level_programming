#include <stdio.h>


int main()
{
    int x = 1024;
    int y = 1024;
    int count = 0;
    while((x >> 1) != 0)
    {
        x >>= 1;
        count++;
    }
    printf("count : %d\n", count);
    while(count >= 0)
    {
        
        printf("%i\n", (y >> count) & 1);
        count--;
    }
    // printf("%d\n", 15 >> 3);
    return 0;
}