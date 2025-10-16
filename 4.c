#include <stdio.h>
int main()
{
        float cm;
        float metr;
        char name[20];
        printf("введи свое имя:\n");
        scanf("%s", name);
        printf("введи свой рост в см:\n");
        scanf("%f", &cm);
        metr = cm / 100;
        printf("%s, твой рост  %.2f метра", name, metr);
        return 0;
}
