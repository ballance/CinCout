#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "UpdatePointer.h"


UpdatePointerExample::UpdatePointerExample() {}

void UpdatePointerExample::Run()
{
	int a, b;
	int *pa = &a, *pb = &b;
	printf("Please enter two numbers (example 4 5): ");
	scanf_s("%d %d", &a, &b);
	UpdatePointer(pa, pb);
	printf("%d\n%d", a, b);
	return;
}


void UpdatePointerExample::UpdatePointer(int *a, int *b)
{
	int aa = *a + *b;
	int bb = *a - *b;
	if (bb < 0) bb = *b - *a;
	*a = aa;
	*b = bb;
	return;
}



