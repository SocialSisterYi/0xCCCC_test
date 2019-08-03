/*测试栈溢出的程序
只能用VC的debug编译，栈未初始化区域自动填充为0xcccc
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
