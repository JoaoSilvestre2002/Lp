#include<stdio.h>
int main()
{
    int test,controle,eq1,ricard,vicent,x;
    scanf("%d",&test);

    for(controle = 1;controle <= test;controle++){
        scanf("%d %d",&ricard,&vicent);
        if(vicent>ricard){
            
        x=ricard;
        ricard=vicent;
        vicent=x;
        
        }
        while(ricard%vicent!=0){
            eq1=ricard;
            ricard=vicent;
            vicent=eq1%ricard;
        }
        printf("%d\n",vicent);
    }
    return 0;
}
