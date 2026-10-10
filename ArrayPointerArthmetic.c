#include<stdio.h>

int main()
{
int Arr[] = {10,20,30,40}; //this calles as  array intialisation list
int *p = &(Arr[1]);     //20
int *q = &(Arr[3]);     //30

printf("%d\n",p);
printf("%d\n",q);
printf("%d\n",p+2);
printf("%d\n",q-2);
printf("%d\n",q-p);    //2


    return 0;
}
