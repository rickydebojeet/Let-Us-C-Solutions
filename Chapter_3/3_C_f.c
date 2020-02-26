#include <stdio.h>
int main ()
{
    int ra,shy,aj;
    printf ("Set the ages for RAJ,SHYAM and AJAY\n");
    scanf ("%d %d %d",&ra,&shy,&aj);
    if (ra<shy&&ra<aj)
        printf ("Raj is the youngest.\n");
    if (shy<ra&&shy<aj)
        printf ("Shyam is the youngest.\n");
    if (aj<shy&&aj<ra)
        printf ("Ajay is the youngest.\n");
    return 0 ;
}
