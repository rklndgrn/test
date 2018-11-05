#include "Tasks.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	int taskNumber;
	bool running{ true };
	while (running)
	{
		cout << "Skriv in nummer på uppgift (0 avslutar): ";
		cin >> taskNumber;

		switch (taskNumber)
		{
		case 0:
			running = false;
			break;
		case 1:
			StartTask01();
			break;
		case 2:
			StartTask02();
			break;
		default:
			cout << "Uppgiften existerar inte!" << endl;
			break;
		}
	}

	return 0;
}