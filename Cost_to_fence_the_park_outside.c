#include<stdio.h>
int main()
{
    int l,b,w,c,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    f=((l+2*w)*(b+2*w))-((l)*(b));
    printf("%d",f*c);
}