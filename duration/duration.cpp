//Name   : LEE ZHONG MENG
//Matric : B032610629
//Lab 3  : duration.cpp, Week 3
#include <iostream>
using namespace std;

int main()
{
	int totalSeconds, minutes, seconds;

	cout << "Video length in seconds: ";
	cin >> totalSeconds;

	minutes = totalSeconds / 60;
	seconds = totalSeconds % 60;

	cout << "Duration: " << minutes << " min " << seconds << " sec" << endl;
	return 0;
}