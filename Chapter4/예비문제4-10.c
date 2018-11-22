#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	unsigned char lastmask = 1;
	unsigned char firstmask = 128;
	unsigned int input;

	printf("0~255사이 값 중 짝수를 입력하세요:");
	scanf("%d", &input);

	printf("입력한 값 %d의 첫 번째 비트는 %d이다.\n", input, (input&firstmask) == firstmask);

	//&는 AND비트 연산자로 각 비트에서 0,0-0, 0,1/1,0-0, 1,1-1으로 결과값이 나온다.
	//이때 첫번째 비트를 제외한 나머지비트들은 input의 나머지비트들이 0이나1이더라도 0으로 값이 도출된다.
	//결국 결과값이 첫번째비트만 0또는 1로 나온다. (0또는128)
	//따라서 ==는 관계연산자로 결과값과 firstmask가 같으면 1을, 다르면 0이라는 값을 출력한다.
	//이때 0과1은 input의 첫번째 비트와 같다고 봐도 무방하다.

	printf("입력한 값의 첫 번째 비트 값만 바꾸면 입력한 값은 %d가 된다.\n", input^firstmask);

	//^는 XOR비트 연산자로 같은 값은 0으로, 다른 값은 1로 값이 나온다.
	//이때 input의 첫번째 비트가 1인 경우 같은 값이므로 첫번째 비트는 0으로 바뀌고, 0인 경우는 다른 값이므로 1로 바뀐다.
	//나머지 비트들의 경우 128의 나머지 비트들은 0이므로 input의 나머지 비트들의 값이 그대로 내려온다.
	//따라서 input의 첫번째 비트만 바뀐 값이 출력될 수 있다.
	printf("입력한 값의 마지막 비트값을 바꾸면 입력한 값은 %d이 된다.\n", input^lastmask);
}