#include <stdio.h>
int main()
{
float d_s_Mbit;
float filesize;
float MByte_Mbit;
float d_time;
printf("введи скорость загрузки в мегабитах:\n");
scanf("%f", &d_s_Mbit);
printf("введи размер файла в мегабайтах:\n");
scanf("%f", &filesize);
MByte_Mbit = filesize * 8;
d_time = MByte_Mbit / d_s_Mbit;
printf("при скорости загрузки %.2f мегабитах в секунду файл размером %.2f мегабайт закгружается  %f секунд", d_s_Mbit, filesize, d_time);
return 0;
}
