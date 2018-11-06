#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void StartTask01()
{
	int number;
	char exit;
	cout << "Skriv in ett heltal:";
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
}

void StartTask02()
{
	int startCelsius;
	int endCelsius;
	cout << "Ange startvärde: ";
	cin >> startCelsius;
	cout << "Ange slutvärde: ";
	cin >> endCelsius;

	while (endCelsius < startCelsius)
	{
		cout << "Felaktigt intervall!" << endl;
		cout << "Ange slutvärde: ";
		cin >> endCelsius;
	}

	cout << "Celsius" << setw(10) << "Kelvin" << setw(10) << "Farenheit"
		<< setw(10) << "Réaumur" << endl;
	cout << setw(36) << setfill('-') << "-" << endl;

	float farenheit;
	float kelvin;
	float reaumur;
	for (int i = startCelsius; i <= endCelsius; i++)
	{
		kelvin = i + 273.15;
		farenheit = i * 1.8 + 32;
		reaumur = i * 0.8;

		cout << setfill(' ');
		cout << fixed << setprecision(2) << setw(7) << i << setw(10)
			<< kelvin << setw(10) << farenheit << setw(9) << reaumur << endl;
	}


}

void StartTask03()
{
	string word;

	if (cin >> word)
	{
		string shortestWord{ word };
		string longestWord{ word };
		double numberOfWords{ 1 };
		double sumWordLength{ (double)word.length() };

		while (cin >> word)
		{
			sumWordLength += word.length();

			if (word.length() > longestWord.length())
			{
				longestWord = word;
			}

			if (word.length() < shortestWord.length())
			{
				shortestWord = word;
			}

			numberOfWords++;
		}

		double avgWordLength;
		avgWordLength = sumWordLength / numberOfWords;

		cout << "Texten innehöll " << numberOfWords << " bokstäver." << endl;
		cout << "Det kortaste ordet var \"" << shortestWord << "\" med "
			<< shortestWord.length() << " bokstäver." << endl;
		cout << "Det längsta ordet var \"" << longestWord << "\" med "
			<< longestWord.length() << " bokstäver." << endl;
		cout << "Medelordlängden var " << fixed << setprecision(0)
			<< avgWordLength << " bokstäver." << endl;

		cin.clear();
	}
	else
	{
		cout << "Varning! Texten innehåller inga ord!" << endl;
	}
}