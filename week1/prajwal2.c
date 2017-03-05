#include<stdio.h>
struct complex
{
float real;
float img;
};
struct complex add(struct complex a,struct complex b)
{
struct complex c:
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
int main()
{
struct complex a,b,c;
printf("enter the  real number a=");
scanf("%f",&a.real);
printf("enter the img number a=");
scanf("%f",&a.img);
printf("enter the real number of b=");
scanf("%f",&b.real);
printf("enter the img number of b=");
scanf("%f",&b.img);
c=add(a,b);
printf("sum of the two complex 
numbers=%f + i%f \n",c.real,c.img);
return 0;
}



