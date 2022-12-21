#include<stdio.h>
int main()
{
    int i,l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&w,&h);
        if(l>w||l>h)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(l==w &&l==h || w==h)
        {
            printf("ACCEPTED
");
        }
        else 
        {
            printf("CROP IT
");
        }
    }
}