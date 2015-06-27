#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "main.h"
#include "UpdatePointer.h"
using namespace std;


void main() {
	RunUpdatePointer();

	cin.get();
}

void RunUpdatePointer()
{
	UpdatePointerExample updatePointerRunner = UpdatePointerExample();

	updatePointerRunner.Run();
}
