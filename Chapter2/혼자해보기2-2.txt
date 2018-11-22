#include <stdio.h>

int main (void)
{
char a = 'f';
char b = 96;//아스키코드에 따라 나오는 문자가 달라진다. 96-', 104-h....

printf("변수a는 %c로 값이 %d이다.\n",a,a);
printf("변수b는 %d로 문자 %c이다.\n",b,b);

return 0;
}