#include <iostream>
#include <thread>
#include <conio.h>
#include <string> 
#include "Brootforce.h"
#include "Snake.h"
#include "SimpleTimer.h"
using namespace std;

int main()
{
	setlocale(0, "");
	Snake s;
	Brootforce hp;
	hp.start();

	thread th(&Snake::play, s);
	SimpleTimer st;
	hp.brootforce(0);

	//TerminateThread(th.native_handle(), 0);
	th.join();
	st.stop();
	system("cls");
	cout << "����� ���������: " << st.result << " ���\n";
	cout << "���������� ��������: " << hp.counter / 3 << "\n";
	cout << "���� ������: " << hp.getResult() << " �����? (y/n)\n";
	char ans;
	cin >> ans;
	
	//_getch();
	return 0;
}