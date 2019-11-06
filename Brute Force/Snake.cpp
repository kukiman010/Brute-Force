#include "Snake.h"

Snake::Snake()
{
	//play();
}

void Snake::Setup()
{
	Game_over = false;
	dir_1 = STOP;

	x_1 = width / 3 - 1;
	y_1 = height / 2;
	
	srand(time(nullptr));
	f_x = 1 + rand() % (width - 2);
	f_y = 1 + rand() % (height - 2);
}

void Snake::Draw()
{
	Sleep(speed);

	system("cls");
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;

	for (int i = 1; i < height + 1; i++)
	{
		for (int j = 1; j < width + 2; j++)
		{
			if (j == 1 || j == width + 1)
				cout << "#";

			if (i == y_1 && j == x_1)
				cout << "X";
			else if (i == f_y && j == f_x)
				cout << "@";
			else
				cout << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;

	cout << "Score: " << score;
}

void Snake::Logic()
{
	if (score >= 100)
		Game_over = true;

	switch (dir_1)
	{
	case LEFT:x_1--; break;
	case UP:y_1--; break;
	case DOWN:y_1++; break;
	case RIGHT:x_1++; break;
	}
	
	if (x_1 >= width + 1)
		x_1 = 1;
	else if (x_1 < 1)
		x_1 = width;

	if (y_1 >= height + 1)
		y_1 = 1;
	else if (y_1 < 1)
		y_1 = height;

		
	if (x_1 == f_x && y_1 == f_y)
	{
		srand(time(nullptr));
		score += 10 + rand() % 10;

		f_x = 1 + rand() % (width - 2);
		f_y = 1 + rand() % (height - 2);
	}
}

void Snake::play()
{
	//system("color 70");
	Sleep(speed);

	Setup();
	while (!Game_over)
	{
		Draw();
		Input();

		Logic();
	}
}

void Snake::Input()
{
	if (_kbhit())
		switch (_getch())
		{
		case 'a':dir_1 = LEFT; break;
		case 'd':dir_1 = RIGHT; break;
		case 's':dir_1 = DOWN; break;
		case 'w':dir_1 = UP; break;
		case 'p':dir_1 = STOP; break;
		}
}


Snake::~Snake()
{
}
