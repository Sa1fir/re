#include <stdio.h>

int main(void)
{
    float weight; 
    float value;
    printf("Хортите узнать свой вес в платиновом эквиваленте?\n");
    printf("Давайте посчитаем.\n");
    printf("Пожалуйста, введите свой вес в футах:\n");
    
    scanf("%f", &weight);
    
    value=1700*weight*14.5833;
    printf("Ваш вес в платиновом эквиваленте составляет %.2f.\n", value);
    printf("Вы легко можете стать достойным этого! Если цена платины падает,\n");
    printf("ешьте больше для поддержания своей стоимости.\n");

    return 0;
}