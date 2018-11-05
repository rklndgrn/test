#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int number;
	char exit;
	cout << "Skriv in ett heltal: ";
	cin >> number;
	cout << "Du skrev in talet " << number << endl;

	cin.ignore(1000, '\n');
	cout << "Skriv in fem heltal: ";
	cin >> number;
	cout << "Du skrev in talen: " << number;
	cin >> number;
	cout << " " << number;
	cin >> number;
	cout << " " << number;
	cin >> number;
	cout << " " << number;
	cin >> number;
	cout << " " << number << endl;

	double decimal;
	cin.ignore(1000, '\n');
	cout << "Skriv in ett heltal och ett flyttal: ";
	cin >> number;
	cin >> decimal;
	cout << "Du skrev in heltalet:" << setw(10) << right << number << endl;
	cout << "Du skrev in flyttalet:" << setw(9) << fixed << setprecision(4) << decimal << endl;

	cin.ignore(1000, '\n');
	cout << "Skriv in ett flyttal och ett heltal: ";
	cin >> decimal;
	cin >> number;
	cout << setfill('-');
	cout << "Du skrev in heltalet:" << setw(10) << number << endl;
	cout << "Du skrev in flyttalet:" << setw(9) << decimal << endl;

	char c;
	cin.ignore(1000, '\n');
	cout << "Skriv in ett tecken: ";
	cin >> c;
	cout << "Du skrev in tecknet: " << c << endl;

	string str;
	cin.ignore(1000, '\n');
	cout << "Skriv in ett ord: ";
	cin >> str;
	cout << "Du skrev in ordet: " << str << endl;

	cin.ignore(1000, '\n');
	cout << "Skriv in ett heltal och ett ord: ";
	cin >> number;
	cin >> str;
	cout << "Du skrev in talet |" << number << "|";
	cout << " och ordet |" << str << "|" << endl;

	cin.ignore(1000, '\n');
	cout << "Skriv in ett tecken och ett ord: ";
	cin >> c;
	cin >> str;
	cout << "Du skrev in \"" << str << "\"";
	cout << " och \'" << c << "\'" << endl;

	cin.ignore(1000, '\n');
	cout << "Skriv in en rad text: ";
	getline(cin, str);
	cout << "Du skrev in: \"" << str << "\"" << endl;

	cout << "Skriv in en till rad text: ";
	getline(cin, str);
	cout << "Du skrev in: \"" << str << "\"" << endl;

	cout << "Skriv in tre ord: ";
	cin >> str;
	cout << "Du skrev in: \"" << str << "\"";
	cin >> str;
	cout << ", \"" << str << "\"";
	cin >> str;
	cout << " och \"" << str << "\"" << endl;


	cin >> exit;

	return 0;
}