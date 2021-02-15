#include <stdio.h>

void printMenu() {
	printf("Select what elements you know:\n");
	printf("0 -> angle\n");
	printf("1 -> oppesed side\n");
	printf("2 -> adjacent side\n");
};

void printAngleMeasurementUnitsMenu() {
	printf("Select angle measurement unit::\n");
	printf("r -> radians\n");
	printf("d -> degrees\n");
};

void cleanInput() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
	printf("( T | r | i | g | o | n | o | m | e | t | r | i | u | s )\n\n");

	while(1) {
		printMenu();

		int number;
		scanf("%d", &number);
		cleanInput();

		char measurementUnit;
		if (number == 0) {
			while(1) {
				printAngleMeasurementUnitsMenu();

				scanf("%c", &measurementUnit);
				cleanInput();
				printf("%c\n", measurementUnit);
			}
		}

		if (number > 0 && number < 4) {
			printf("Success!!!\n");
		};
	};
}