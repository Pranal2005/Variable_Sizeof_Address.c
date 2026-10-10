#include <stdio.h>

int Addition(Value1,Value2)
{
    int Result = 0;
    Result = Value1 + Value2;
    return Result;
}

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter the first number: \n");
    scanf("%d",&No1);

    printf("Enter the second number: \n");
    scanf("%d",&No2);

    Ans = Addition(No1,No2);

    printf("Addition is %d",Ans);

    return 0;
}