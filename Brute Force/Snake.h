#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <cmath>
#include "Brootforce.h"

using namespace std;

class Snake
{
private:
	unsigned int x_1, y_1;
	const int width = 30;
	const int height = 15;
	bool Game_over;
	enum eDi { STOP = 0, LEFT, UP, DOWN, RIGHT};
	eDi  dir_1, dir_2;
	unsigned int f_x, f_y;
	int speed = 1, score = 0;

public:
	Snake();

	void Logic();
	void Setup();
	void Draw();
	void play();
	void Input();

	~Snake();
};