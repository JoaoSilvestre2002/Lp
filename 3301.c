#include <math.h>
#include <stdio.h>

int main() {
    
     int luisinho, huguinho, zezinho;
    
    scanf("%d", &huguinho);
       scanf("%d", &zezinho);
          scanf("%d", &luisinho);
    
    if ((huguinho < zezinho && luisinho < huguinho) || (huguinho > zezinho && luisinho > huguinho))
        printf("huguinho");
    else if ((zezinho < huguinho && luisinho < zezinho) || (zezinho > huguinho && zezinho < luisinho))
        printf("zezinho");
    else
        printf("luisinho");

    printf("\n");
    
    return 0;
}
