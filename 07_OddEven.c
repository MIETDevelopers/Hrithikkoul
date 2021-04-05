//Author : hrithik koul
//Date: 16-03-2021
//Purpose:Number is even or odd
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); //It will scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0; //return statement
}//End of the main fuction body
