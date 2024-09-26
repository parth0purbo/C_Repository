#include<stdio.h>
#include<math.h>
#define pi 3.1415926

float fact(float n);
int main()
{
 float x,n;
 printf("Enter value of x in degree:\n");
 scanf("%f",&x);
 printf("Number of terms to be counted in taylor series:\n");
 scanf("%f",&n);
 float rad= (x*pi)/180;
 float sum=0;
 float count=1;
 for(int i=0 ; i<n ; i++)
 {
  sum += ( pow(rad,(2*i+1)))*count/(fact(2*i+1));
  count*=-1;
 }
 printf("sum of %0.2f term is  %f",n,sum);
 return 0;
}
float fact(float n) //function to find out factorial of term in taylor series
{
    float f=1;
    for(int j=1;j<=n;j++)
    {
     f=f*j;
    }
    return f;
}