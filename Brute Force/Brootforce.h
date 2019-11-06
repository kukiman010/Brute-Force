#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Brootforce
{
private:
	string password;
	string numbers; // есть цифры 
	string latters; // есть буквы 
	string answer = "---";
	int length = 0;
	int flag = 0;
	char *p;

	vector<char> dictionary = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

public:
	int counter = 0;
	Brootforce();
	void start();
	int brootforce(int position);
	void combination();
	string getResult();
	~Brootforce();
};

