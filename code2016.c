#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1、输入两个数，交换他们的值并输出。（9分）
void func1() {
	int x;
	int y;
	int tmp;
	scanf("%d%d", &x, &y);
	tmp = x;
	x = y;
	y = tmp;
	printf("x=%d,y=%d", x, y);
}

//2、输入三个数字，输出它们的最大值。（10分)
void func2() {
	int x;
	int y;
	int z;
	scanf("%d%d%d", &x, &y, &z);
	int max = x;
	if (y > max) {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	printf("%d", max);
}

//3、输入一个数，判断其是否为质数。（10分）
void func3() {
	int input;
	int flag = 1;
	scanf("%d", &input);
	if (input == 1) {
		flag = 0;
	}
	for (int i = 2;i < input / 2;i++){
		if (input % i == 0) {
			flag = 0;
		}
	}

	if (flag) {
		printf("%d是质数", input);
	}
	else {
		printf("%d不是质数", input);
	}
}

//4、编写程序，将一个一维数组的元素逆序存放并输出。例如，原顺序为1，2，3，4，5，逆序后为5，4，3，2，1。（10分）
void func4() {
	int arr[5] = {1,2,3,4,5};
	int tmp;
	// last_index:表示数组最后一个位置的索引，sizeof(arr) / sizeof(arr[0])这是求数组长度，结果是5，减1表示求下标
	int last_index = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0;i <= last_index;i++) {
		tmp = arr[i];
		arr[i] = arr[last_index];
		arr[last_index] = tmp;
		last_index--;
	}

	for (int k = 0;k < sizeof(arr) / sizeof(arr[0]);k++) {
		printf("%d ", arr[k]);
	}
}

//5、用起泡法对十个数排序。（10分）
void func5() {
	//创建一个数组
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//求数组长度
	int sz = sizeof(arr) / sizeof(arr[0]);
	//开始冒泡
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//输出排序完的数组
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

int main() {
	//func1();
	//func2();
	//func3();
	//func4();
	func5();
	return 0;
}