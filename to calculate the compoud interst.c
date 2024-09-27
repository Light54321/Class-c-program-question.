 #include<stdio.h>
 void main( )
{
float a,b,c,d;
printf("Please enter the principal amount,rate of interest,number of compound period");
scanf("%f%f%f",&a,&b,&c);
d=a*(((1+b)*c)-a);
printf("Your compound interst is:%f",d);
}