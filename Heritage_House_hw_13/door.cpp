#include "door.h"

door::door()
{
	price = 0; kol = 0; time = 0; summ = 0;
}
void door::Print_d()
{
	cout << setw(13) << name << " |" << setw(7) << kol << " |"
		<< setw(8) << measurement << " |" << setw(11) << price << " |"
		<< setw(10) << summ << " |" <<
		setw(12) << time << " |  " << material << endl;
}
void door::Set_d1(double _price, int _kol)
{
	price = _price; kol = _kol;
}
void door::Set_d2(double _sum, int _time)
{
	summ = _sum; time = _time;
}
int door::Get_time()
{
	return time;
}
double door::Get_sum()
{
	return summ;
}
