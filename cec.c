#include<stdio.h>
union test1
{
	int x;int y;
};

union test2
{
	int x;
	char y;
};

union test3()
{
	int arr[10];
	char y;
};

int main()
{
	printf("%d,%d,%d", sizeof(test1), sizeof(test2), sizeof(test3));
	return 0;
}
