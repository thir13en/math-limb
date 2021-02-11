#include <stdio.h>

void printMenu() {
	printf("( T | r | i | g | o | n | o | m | e | t | r | i | u | s )\n\n");
	printf("Select what elements you know:\n");
	printf("0 -> angle in deg\n");
	printf("1 -> angle in rad\n");
	printf("2 -> oppesed side\n");
	printf("3 -> adjacent side\n");
};

int main() {
	printMenu();

	int number;
	scanf("%d", &number);

	if (number > 0 && number < 4) {
		printf("Success!!!\n");
	}
}