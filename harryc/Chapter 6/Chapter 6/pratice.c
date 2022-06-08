#include <stdio.h>

void sumandavg(int x,int y, int *sum, float *avg){

   *sum = x+y;
   *avg = (float)(*sum)/2;  
   
   
}
int main()
{
    int a ,b, sum;
    float avg;
 
    printf("Enter the number as a input\n");
    scanf("%d",&a);
    
    printf("Enter the number as b input\n");
    scanf("%d",&b);
    
    sumandavg(a ,b , &sum ,&avg);

    printf("the sum is %d\n", sum);
    printf("The average is %f\n", avg);
    printf("complted successfully");

    return 0;
}