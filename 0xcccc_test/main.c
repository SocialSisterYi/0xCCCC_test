/*����ջ����ĳ���
ֻ����VC��debug���룬ջδ��ʼ�������Զ����Ϊ0xcccc
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char str[100];

	memcpy(str, "����Գ����һ���̲裬�����˻�����Ҫһ�������Ǵ�У�", 50);
	for (i = 0; i < 100; i++)
		printf("%c",str[i]);

	getchar();
	return 0;
}
