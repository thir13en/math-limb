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

int main() {
	printf("( T | r | i | g | o | n | o | m | e | t | r | i | u | s )\n\n");

	while(1) {
		printMenu();

		int number;
		scanf("%d", &number);

		char measurementUnit;
		if (number == 0) {
			while(1) {
				printAngleMeasurementUnitsMenu();

				// FIX: seems to have a character in the stdIn buffer
				scanf("%c", &measurementUnit);
				printf("Success!!!\n");
			}
		}

		if (number > 0 && number < 4) {
			printf("Success!!!\n");
		};
	};
}