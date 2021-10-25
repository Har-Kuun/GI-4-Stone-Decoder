#include <stdio.h>

void OperationA(void);
void OperationB(void);
void OperationC(void);
void OperationD(void);
void PrintStep(int N0);

int a = 0, b = 0, c = 0, d = 0;

int main() {
	int N = 0;
	int TotalStep = 0;
	printf("\nGenshin Impact 4-Stone Puzzle Decoder");
	printf("\nWritten by Har-Kuun \n\n");
	printf("\nPlease enter the initial number of lights on each stone, separated by space, then press enter.\n\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("\n\nPlease follow the sequence below:\n\nHit\t\tResult\nInitial\t\t%d %d %d %d", a, b, c, d);
	while (c - d) {
		OperationB();
		PrintStep(2);
		TotalStep++;
	}
	while (b - c) {
		OperationA();
		PrintStep(1);
		TotalStep++;
	}
	while (a - b) {
		OperationC();
		PrintStep(3);
		TotalStep++;
	}
	printf("\n\nTotal number of steps: %d", TotalStep);
	printf("\nThank you.");
	return 0;
}

void PrintStep(int N0) {
	printf("\nStone %d\t\t%d %d %d %d", N0, a, b, c, d);
}

void OperationA(void) {
	a = a % 3 + 1;
	b = b % 3 + 1;
}

void OperationB(void) {
	a = a % 3 + 1;
	b = b % 3 + 1;
	c = c % 3 + 1;
}

void OperationC(void) {
	b = b % 3 + 1;
	c = c % 3 + 1;
	d = d % 3 + 1;
}

void OperationD(void) {
	c = c % 3 + 1;
	d = d % 3 + 1;
}
