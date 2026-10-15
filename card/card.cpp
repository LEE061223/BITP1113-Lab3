//Name   : LEE ZHONG MENG
//Matric : B032610629
//Lab 3  : card.cpp, Week 3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "Lee Zhong Meng";
	string favouriteApp = "Instagram";
	int yearOfStudy = 1;
	double watchHoursPerWeek = 7;
	char section = 'A';
	bool ownsDrawingTablet = false;

	cout << "===== CREATOR CARD =====" << endl;
	cout << "Name : " << name << endl;
	cout << "Fav app : " << favouriteApp << endl;
	cout << "Year : " << yearOfStudy << endl;
	cout << "Hours/wk : " << watchHoursPerWeek << endl;
	cout << "Section : " << section << endl;
	cout << "Tablet? : " << ownsDrawingTablet << endl;
	return 0;
}