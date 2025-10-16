#include <stdio.h>
#define l_gall 3.789
#define milya 1.609
int main()
{
        double miles;
        double gallons;
        printf("сколько миль вы проехали:\n");
        scanf("%lf", &miles);
        printf("сколько галлонов вы потратили:\n");
        scanf("%lf", &gallons);

        double litr = gallons*l_gall;
        double km = miles*milya;
        double perevod = (litr/km)*100;

        printf("расход %.1f литров на 100км", perevod);
        return 0;
}
