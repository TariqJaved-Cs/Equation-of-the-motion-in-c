#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three interger values:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is the greater number  ",a);

        }
        else
        {
            printf("%d is the greater number ",c);
        }
    }
    else
    {
        if (b>c){
        printf("%d is the greater number ",b);
    }
        else
            {
        printf("%d is the greater numebr ",c);
            }

    return 0;
}}
