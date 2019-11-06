#include "SimpleTimer.h"



SimpleTimer::SimpleTimer()
{
	start = chrono::high_resolution_clock::now();
}

void SimpleTimer::stop()
{
	end = chrono::high_resolution_clock::now();
	duration = end - start;
	result = duration.count();
}

SimpleTimer::~SimpleTimer()
{
	end = chrono::high_resolution_clock::now();
	duration = end - start;
	result = duration.count();
	cout << "Прошло " << result << " сек" << endl;
}
