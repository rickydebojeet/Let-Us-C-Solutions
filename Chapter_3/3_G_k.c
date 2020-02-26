#include<stdio.h>
int main()
{
    int d,m;
    printf("Please enter the month.\n");
    scanf("%d",&m);
    printf("Please enter the day.\n");
    scanf("%d",&d);
    if((m==12&&d>=22)||(m==1&&d<=19))
        printf("Capricorn");
    else if ((m==1&&d>=20)||(m==2&&d<=17))
        printf("Aquarius");
    else if ((m==2&&d>=18)||(m==3&&d<=19))
        printf("Pisces");
    else if ((m==3&&d>=20)||(m==4&&d<=19))
        printf("Aries");
    else if ((m==4&&d>=20)||(m==5&&d<=20))
        printf("Taurus");
    else if ((m==5&&d>=21)||(m==6&&d<=20))
        printf("Gemini");
    else if ((m==6&&d>=21)||(m==7&&d<=22))
        printf("Cancer");
    else if ((m==7&&d>=23)||(m==8&&d<=22))
        printf("Leo");
    else if ((m==8&&d>=23)||(m==9&&d<=22))
        printf("Virgo");
    else if ((m==9&&d>=23)||(m==10&&d<=22))
        printf("Libra");
    else if ((m==10&&d>=23)||(m==11&&d<=21))
        printf("Scorpio");
    else
        printf("Sagittarius");
    return 0;
}
