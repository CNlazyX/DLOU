#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1���������������������ǵ�ֵ���������9�֣�
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

//2�������������֣�������ǵ����ֵ����10��)
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

//3������һ�������ж����Ƿ�Ϊ��������10�֣�
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
		printf("%d������", input);
	}
	else {
		printf("%d��������", input);
	}
}

//4����д���򣬽�һ��һά�����Ԫ�������Ų���������磬ԭ˳��Ϊ1��2��3��4��5�������Ϊ5��4��3��2��1����10�֣�
void func4() {
	int arr[5] = {1,2,3,4,5};
	int tmp;
	// last_index:��ʾ�������һ��λ�õ�������sizeof(arr) / sizeof(arr[0])���������鳤�ȣ������5����1��ʾ���±�
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

//5�������ݷ���ʮ�������򡣣�10�֣�
void func5() {
	//����һ������
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//�����鳤��
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��ʼð��
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
	//��������������
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