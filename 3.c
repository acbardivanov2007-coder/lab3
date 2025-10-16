#include <stdio.h>
int main()
{
        float zapyat;
        printf("Введи число с плав. запятой:\n");
        scanf("%f", &zapyat);
        printf("выводом будет число %.1f или %.1e\n", zapyat, zapyat);
        printf("или будет %.3f и %.3E\n", zapyat, zapyat);
        return 0;
}
