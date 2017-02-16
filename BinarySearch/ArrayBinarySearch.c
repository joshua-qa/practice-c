#include <stdio.h>

/* 170216 joshua-qa */
int arrayBinarySearch(int array[100], int num, int arraySize) {
	int max = arraySize - 1;
	int min = 0;
	int position = -1;
	int count = 0;

	while (max >= min) {
		count++;
		position = (max + min) / 2;

		if (num == array[position]) {
			printf("count : %d\n", count);
			break;
		} else if (num > array[position]) {
			min = position + 1;
		} else {
			max = position - 1;
		}
	}

	return position;
}

int main(void) {
	int inputNum;
	int searchArray[100];

	scanf("%d", &inputNum);
	
	for (int i = 0; i < 100; i++) {
		searchArray[i] = i;
	}

	printf("result: %d", arrayBinarySearch(searchArray, inputNum, sizeof(searchArray) / sizeof(searchArray[0])));

	system("PAUSE");
}