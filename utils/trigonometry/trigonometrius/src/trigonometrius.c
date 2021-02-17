#include <stdio.h>

void printMenu() {
	printf("Select what elements you know:\n");
	printf("0 -> angle\n");
	printf("1 -> oppesed side\n");
	printf("2 -> adjacent side\n");
};

void printAngleMeasurementUnitsMenu() {
	printf("Select angle measurement unit::\n");
	printf("0 -> radians\n");
	printf("1 -> degrees\n");
};

void cleanInput() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

enum data {angle, opposite, adjacent};
enum angleType {radians, degrees};

int main() {
	printf("( T | r | i | g | o | n | o | m | e | t | r | i | u | s )\n\n");

	while(1) {
		printMenu();

		int number;
		scanf("%d", &number);
		cleanInput();

		int measurementUnit;
		if (number == angle) {
			int noUnitSelected = 1;
			while(noUnitSelected) {
				printAngleMeasurementUnitsMenu();

				scanf("%d", &measurementUnit);
				cleanInput();

				if (measurementUnit == radians || measurementUnit == degrees) {
					printf("Success!!!\n");
					noUnitSelected = 0;
				}
			}
		}

		if (number > 0 && number < 2) {
			printf("Success Two!!!\n");
		};
	};
}