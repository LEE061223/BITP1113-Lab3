//Name   : LEE ZHONG MENG
//Matric : B032610629
//Lab 3  : operators.cpp, Week 3
#include <iostream>
using namespace std;

int main()
{
	cout << 7 / 2 << endl;                       // line 1
	cout << 7 % 2 << endl;                       // line 2
	cout << 7.0 / 2 << endl;                     // line 3
	cout << static_cast<double>(7) / 2 << endl;  // line 4
	int a = 10, b = 20;
	cout << a + b / 2 << endl;                   // line 5
	cout << (a + b) / 2 << endl;                 // line 6
	int score = 10;
	score += 5;
	score++;
	cout << score << endl;                       // line 7
	return 0;
}
