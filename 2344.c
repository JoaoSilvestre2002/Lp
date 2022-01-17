#include <math.h>
#include <stdio.h>
int main()
{
    int Media = 0;
    scanf("%d", &Media);

    if(Media >= 0 && Media <= 100)
    {
            if (35 < Media && 60 >= Media)
            printf("C");
        if (Media == 0)
            printf("E");
        if (35 >= Media && 0 < Media)
            printf("D");
             if (85 < Media)
            printf("A");
        if (85 >= Media && 60 < Media)
            printf("B");
    }
    printf("\n");
    return 0;
}
