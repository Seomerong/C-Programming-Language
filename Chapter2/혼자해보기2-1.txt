#include <stdio.h>

int main (void)
{
int a = 20;
const int b = 3;//const를 쓸 경우 상수로 값이 유지되어 도중에 바꿀수가 없다.

printf("변수 a의 초깃값은 %d이다.\n",a);
printf("상수 b의 초깃값은 %d이다.\n",b);

a = 100;

printf("a값은 %d로 바뀌었다.\n",a);
printf("b값은 %d로 유지된다.\n",b);

return 0;
}