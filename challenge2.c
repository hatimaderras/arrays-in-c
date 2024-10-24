#include <stdio.h>
int main ()
{
    int myNumbers[10];
    int sum=0;
    float moyen;
    int i;
    printf("enter 10 number:\n");
    for (i=0;i<10;i++){
        printf("enter your number %d :",i+1);
        scanf("%d",&myNumbers[i]);
        sum += myNumbers[i];
    }
    moyen = sum / 10.0;
    printf("the sum of the numbers: %d \n",sum);
    printf("the moyen of the numbers: %.2f",moyen);
}
