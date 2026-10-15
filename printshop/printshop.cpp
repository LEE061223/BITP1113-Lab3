//Name   : LEE ZHONG MENG
//Matric : B032610629
//Lab 3  : printshop.cpp, Week 3
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quantity;
	double pricePerPoster, total;

	cout << "Enter number of posters: ";
	cin >> quantity;
	cout << "Enter price per poster (RM): ";
	cin >> pricePerPoster;
	
	total = quantity * pricePerPoster;
	
	cout << fixed << setprecision(2);
	cout << "Total cost: RM " << total << endl;
	return 0;
}