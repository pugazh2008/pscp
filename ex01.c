#include "stdio.h"
int main()
{
float a,b;
char ch;
printf("+ for addition\n - sub\n* multi\n/division");
printf("enter your chouices=");
scanf("%c",&ch);
scanf("%f%f",&a,&b);
switch(ch)
{
    case '+':
    printf("add =%f",a+b);
    break;
    case '-':
    printf("sub=%f",a-b);
    break;
    case '*':
    printf("multi=%f",a*b);
    break;
    case '/':
    printf("div=%f",a/b);
    break;
    default:
    printf("invalid");

}
}
