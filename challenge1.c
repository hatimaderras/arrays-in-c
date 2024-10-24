#include <stdio.h>
int main()
{
    int myNumbers[5];
    int i;
    printf("enter 5 numbers:\n");
    for (i=0;i<5;i++){
    printf("enter your %d number:",i+1);
    scanf("%d",&myNumbers[i]);
    }
    for (i=4;i>=0;i--){
        printf("%d",myNumbers[i]);
    }

}
