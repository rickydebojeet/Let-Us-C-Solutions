#include<stdio.h>
int main()
{
    float r,g,b;
    float c,m,y,k,w;
    printf("Enter the values of R G B\n");
    scanf("%f %f %f",&r,&g,&b);
    if (r!=g&&g!=b)
    {   if(r>g&&r>b)
            w=(r/255);
        else if (g>r&&g>b)
            w=(g/255);
        else if (b>r&&b>g)
            w=(b/255);
        printf("%f\n",w);
        c=((w-(r/255))/w);
        m=((w-(g/255))/w);
        y=((w-(b/255))/w);
    }
    else
    {
        c=0;
        m=0;
        y=0;
    }
    k= 1-w;
    printf("The CMYK values are %f %f %f %f",c,m,y,k);
    return 0;
}
