#include <stdio.h>
#include <string.h>
int main()
{
char name[20];
printf("Введи свое имя:\n");
scanf("%s", name);
printf("\"%s\"\n", name);
printf("\"%20s\"\n", name);
printf("\"%-20s\"\n", name);
printf("%*s", strlen(name) + 3, name);
return 0;
}
