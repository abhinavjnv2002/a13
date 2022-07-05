#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the lenth of three sides: ");
    scanf("%d%d%d",&a,&b,&c);

        switch(d)
          {
             case 1:
              if(a==b||b==c||a==c)
              printf("Traingle is issoscale triangle.");
              break;
             case 2:
                if(a*a==b*b+c*c||a*a+b*b==c*c||a*a+c*c==b*b)
              printf("Traingle is right angle triangle.");
              break;
             case 3:
                 if(a==b&&b==c)
              printf("Traingle is equilateral triangle.");
              break;

              default:
              printf("Default");
          }

    return 0;
}
