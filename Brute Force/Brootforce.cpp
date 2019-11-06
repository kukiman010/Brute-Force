#include "Brootforce.h"


Brootforce::Brootforce()
{
	/*cout << "Условия пароля: латинские буквы и цифру, можно в верхнем регистре\nВведи пароль: ";
	cin >> password;

	cout << "Есть числа? y/n" << endl;
	cin >> numbers;

	cout << "Есть буквы? y/n" << endl;
	cin >> latters;

	length = password.length();
	p = new char[length + 1];
	p[length] = 0;
	memset(p, 97, length);

	count();*/
	//brootforce(0);
}

void Brootforce::start()
{
	cout << "Условия пароля: латинские буквы и цифру, можно в верхнем регистре\nВведи пароль: ";
	cin >> password;

	cout << "Есть числа? y/n" << endl;
	cin >> numbers;

	cout << "Есть буквы? y/n" << endl;
	cin >> latters;

	length = password.length();
	p = new char[length + 1];
	p[length] = 0;
	memset(p, 97, length);

	combination();
	//brootforce(0);
}

int Brootforce::brootforce(int position)
{
	if (position == length)
	{
		for (int i = 0; i < length; i++)
		{
			//cout << p[i];
			counter++;
		}
		//cout << endl;

		if (p == password)
		{
			//cout <<"\n\nТвой пароль: " << p << endl;
			answer = p;
			flag = 1;
			//cout << "\n\n" << counter << "\n\n";
		}
		return 1;
	}

	for (int i = 0; i < dictionary.size(); i++)
	{
		if (numbers[0] == 'n')
			if (dictionary[i] == '1')
				break;

		if (latters[0] == 'n')
			if (i == 0)
				i = 51;


		p[position] = dictionary[i];
		if (flag == 1)return 1;
		else brootforce(position + 1);
	}

	return 1;
}

void Brootforce::combination()
{
	cout << "Вариант комбинаций: ";

	if (latters[0] == 'n')
		cout << pow(10, length);
	else if (numbers[0] == 'n')
		cout << pow(dictionary.size() - 10, length);
	else
		cout << pow(dictionary.size(), length);

	cout << "\nНачинаем...\n\n";
}

string Brootforce::getResult()
{
	return answer;
}

Brootforce::~Brootforce()
{
	delete[]p;
}