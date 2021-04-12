#include<stdio.h>
  
int main()
{
  int arr[3] = {10, 22, 35};
  int i, j;
  for (i = 0; i < 3; i++)
  {
    printf("Value of %d th array = %d \n",i, arr[i]);
    printf("Address of %d th array = %p \n",i, &arr[i]);
  }
  return 0;
}