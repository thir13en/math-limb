#include <stdio.h>

void printMenu() {
	printf("Select what elements you know:\n");
	printf("0 -> angle\n");
	printf("1 -> oppesed side\n");
	printf("2 -> adjacent side\n");
};

int main() {
	printf("( T | r | i | g | o | n | o | m | e | t | r | i | u | s )\n\n");

	while(1) {
		printMenu();

		int number;
		scanf("%d", &number);

		if (number == 0) {
			printf("Choose angle measure type\n");
		}

		if (number > 0 && number < 4) {
			printf("Success!!!\n");
		};
	};
}