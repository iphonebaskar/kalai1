#include <stdio.h>
void main()
{
    char a;
    printf("Enter a character: ");
    scanf("%s",&a);

    if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
        printf("%c is an alphabet",a);
    else
        printf("%c is not an alphabet",a);

    getch();
}
