#include "Task01.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	int taskNumber;

	cout << "Skriv in nummer på uppgift: ";
	cin >> taskNumber;

	switch (taskNumber)
	{
		case 1:
			StartTask01();
		break;
	default:
		cout << "Uppgiften existerar inte!" << endl;
		break;
	}



	char exit;
	cin >> exit;

	return 0;
}