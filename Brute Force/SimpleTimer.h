#pragma once
#include <chrono>
#include <iostream>
using namespace std;

class SimpleTimer
{
private:
	chrono::time_point<chrono::steady_clock> start, end;
	chrono::duration<float> duration;
public:
	SimpleTimer();
	~SimpleTimer(); 
	float result;
	void stop();
};

