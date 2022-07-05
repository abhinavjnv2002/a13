#include <stdio.h>
int main()
{
    int sidea, sideb, sidec;
    printf("Input three sides of triangle: ");
    scanf("%d %d %d", &sidea, &sideb, &sidec);

    if(sidea==sideb || sidea==sidec || sideb==sidec)
    {
        printf("This is an isosceles triangle.\n");
    }
    else if((sidea*sidea)+(sideb*sideb)==(sidec*sidec) || (sidea*sidea)+(sidec*sidec)==(sideb*sideb) || (sideb*sideb)+(sidec*sidec)==(sidea*sidea) )
    {
        printf("This is a right angle triangle.\n");
    }
    else if(sidea==sideb && sideb==sidec)
    {
        printf("This is an equilateral triangle.\n");
    }

    return 0;
}
