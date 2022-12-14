#include<stdio.h>

void makePyramid(char word, int num) {
	int bottom;
	

	for (int i = 1; i <= num; i++) {
		for (int j = (num - i); j > 0; j--) // 左側の空白（逆三角形）
			printf(" ");

		bottom = 2 * i - 1; // 奇数

		for (int k = 0; k < bottom; k++)
			printf("%c", word);

		printf("\n");
	}

	return 0;
}


int main() {
	int num;
	char word;


	printf("記号（1文字）：");
	scanf_s("%c", &word);

	printf("段数（1以上）：");
	scanf_s("%d", &num);

	printf("\n-----ピラミッド描画-----\n");

	makePyramid(word, num);

	return 0;
}