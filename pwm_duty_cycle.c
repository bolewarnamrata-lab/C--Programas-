#include <stdio.h>

int main()
{
    float duty, period ;
    int i;

    printf("Enter duty cycle: ");
    scanf("%f", &duty);

    printf("Enter period: ");
    scanf("%f", &period);

    printf("PWM Signal: ");

    for(i = 0; i < period; i++)
    {
        if(i < duty)
            printf("1 ");
        else
            printf("0 ");
    }

    printf("\nDuty cycle: %.2f%%", duty / period * 100);

    return 0;
}
