/*测试栈溢出的程序
只能用vs的debug编译，栈的未用区域会自动填充为cccc
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char str[100];

	memcpy(str, "程序猿买了一杯奶茶，喝完了还想再要一杯，于是大叫：", 50);
	for (i = 0; i < 100; i++)
		printf("%c",str[i]);

	getchar();
	return 0;
}
