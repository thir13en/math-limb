#include <stdio.h>

void printMenu(char** entities) {
	printf("Select the two known elements:\n");

	int i = 0;
	while(entities[i] != NULL) {
		printf("%d -> %s\n", i, entities[i]);
		i++;
	}
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

char* trigonometricEntities[] = {
	"angle",
	"opposite side",
	"adjacent side",
	"hypotenuse",
	NULL
};
enum data {
	angle,
	opposite,
	adjacent,
	hypotenuse
};

struct input {
	int type;
	int value;
};

int main() {
	printf("( T | r | i | g | o | n | o | m | e | t | r | i | u | s )\n\n");

	int dataNeeded = 2;
	int knownElements[dataNeeded];
	int storedValuesCount = 0;

	while(storedValuesCount < dataNeeded) {
		printMenu(trigonometricEntities);

		int menuOption;
		scanf("%d", &menuOption);

		if (menuOption < 0 || menuOption > 3) {
			printf("Focuss!!!!!\n\n\n");
			continue;
		}

		knownElements[storedValuesCount] = menuOption;
		cleanInput();

		storedValuesCount++;
	}

	char* desiredMagnitude;
	char* obtainedData[dataNeeded];

	for (int i=0; i<2; i++) {
		switch(knownElements[i]) {
			case 0:
				obtainedData[i] = "angle";
				break;
			case 1:
				obtainedData[i] = "opposite side";
				break;
			case 2:
				obtainedData[i] = "adjacent side";
				break;
			case 3:
				obtainedData[i] = "hypotenuse";
				break;
		}
	}


	printf("Ok, so you know the %s and the %s\n", obtainedData[0], obtainedData[1]);
		// int measurementUnit;
		// if (number == angle) {
		// 	int noUnitSelected = 1;
		// 	while(noUnitSelected) {
		// 		printAngleMeasurementUnitsMenu();

		// 		scanf("%d", &measurementUnit);
		// 		cleanInput();

		// 		if (measurementUnit == 'd' || measurementUnit == 'r') {
		// 			printf("Success!!!\n");
		// 			noUnitSelected = 0;
		// 		}
		// 	}
		// }

		// if (number > 0 && number < 2) {
		// 	printf("Success Two!!!\n");
		// };
	// };
}