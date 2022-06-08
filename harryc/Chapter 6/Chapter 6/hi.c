#include <stdio.h>


void sumandavg( int a,int b,float*sum ,float*avg)
{
    *sum =a+b;
    *avg = (a+b)/2;
}


// int sumavg(int a, int b)
// {   
//     int c = a+b;
//     int d= (c)/2;
//     return d;
// }
int main()
{
    int a,b;
    float avg, sum;
  
    printf("Enter the input of two no.s \n");
    scanf("%d %d",&a,&b);
   sumandavg(a,b, &sum,&avg); 
    printf("The sum is %f\n",sum);
    printf("The average is %f",avg);
    //printf("The average is %d",);



    return 0;
}