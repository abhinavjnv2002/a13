#include<stdio.h>
int main()
{
    int x;
    float a,b,R;
    printf("choose the case : \n1.Addition:\n2.Subtraction:\n3.Multiplication:\n4.Divide\n: ");
    scanf("%d",&x);

        switch(x)
          {
          case 1:
              printf("Enter two number:");
              scanf("%f%f",&a,&b);
              R=a+b;
            printf("Sum of %f and%f is %%f",a,b,R);

            break;
             case 2:
              printf("Enter two number:");
              scanf("%f%f",&a,&b);
              R=a-b;
             printf("Difference of %f and %f is %f",a,b,R);
            break;
             case 3:
              printf("Enter two number:");
              scanf("%f%f",&a,&b);
              R=a*b;
            printf("multiplication of %f and %f is %f",a,b,R);
            break;
             case 4:
              printf("Enter two number:");
              scanf("%f%f",&a,&b);
              R=a/b;
            printf("Sum of %f and %f is %f",a,b,R);
            break;


        default:
            printf("Default");
          }

    return 0;
}
