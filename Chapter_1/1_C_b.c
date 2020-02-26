#include <stdio.h>
float main()
{
    float km,fe,in,cm,m ;
    printf ("Please enter distance in kms.\n") ;
    scanf ("%f",&km) ;
     m = 1000 *km ;
    fe = 3280.84*km ;
    in = 39370.08*km ;
    cm = 100000*km ;
    printf ("Metres = %f\nFeet = %f\nInch = %f\nCentimetres = %f\n", m, fe, in, cm) ;
    return 0 ;
}
