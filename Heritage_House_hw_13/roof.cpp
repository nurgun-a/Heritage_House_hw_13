#include "roof.h"

roof::roof(int _area)
{
	price = 0; summ = 0; time = 0; area = _area;
}
roof::roof()
{
	price = 0; summ = 0; time = 0; area = 0;
}
void roof::Print()
{
	cout << setw(13) <<name<< " |" << setw(7) << area << " |"
		<< setw(8) << measurement << " |" << setw(11) << price << " |"
		<< setw(10) << summ << " |" <<
		setw(12) << time << " |  " << material << endl;
}
void roof::Seter1(double _price)
{
	price = _price; 
}
void roof::Seter2(double _sum, int _time)
{
	summ = _sum; time = _time;
}
int roof::Get_ar()
{
	return area;
}
int roof::Get_time()
{
	return time;
}
double roof::Get_sum()
{
	return summ;
}
