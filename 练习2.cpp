//#include<stdio.h>
//int main()
//{
//	printf("hello\n");
//	printf("%d\n", 2);
//	printf("%c", 'h');
//	printf("%c", 'e');
//	printf("%c", 'l');
//	printf("%c", 'l');
//	printf("%c\n", 'o');
//	printf("%s", "abx");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b;
//	char cont = 'y';
//	while (cont == 'y') {
//		printf("输入a b：");
//		scanf_s("%d %d", &a, &b);
//		printf("%d\n", a + b);
//		printf("continue？（y/n):\n");
//		// 清除缓冲区的回车，当你用 scanf_s("%d %d", &a, &b);
//		// 输入数字后，按下回车，回车符（\n）会留在输入缓冲区。
//		//while (getchar() != '\n'); 会不断读取并丢弃字符，
//		// 直到遇到回车符（\n），这样缓冲区就被清空了。
//		while (getchar() != '\n');
//		scanf_s("%c", &cont, 1);
//	}
//
//	return 0;
//
//}
//
//
//
////#include<stdio.h>
////int main()
////{
////
////}

#include<stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}

int main()
{
	int a, b;
	scanf_s("%d %d\n", &a, &b);
	//int result = add(a, b);
	printf("%d", a + b);
	return 0;
}

