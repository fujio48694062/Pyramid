#include<stdio.h>

void makePyramid(char word, int num) {
	int bottom;
	

	for (int i = 1; i <= num; i++) {
		for (int j = (num - i); j > 0; j--) // �����̋󔒁i�t�O�p�`�j
			printf(" ");

		bottom = 2 * i - 1; // �

		for (int k = 0; k < bottom; k++)
			printf("%c", word);

		printf("\n");
	}

	return 0;
}


int main() {
	int num;
	char word;


	printf("�L���i1�����j�F");
	scanf_s("%c", &word);

	printf("�i���i1�ȏ�j�F");
	scanf_s("%d", &num);

	printf("\n-----�s���~�b�h�`��-----\n");

	makePyramid(word, num);

	return 0;
}