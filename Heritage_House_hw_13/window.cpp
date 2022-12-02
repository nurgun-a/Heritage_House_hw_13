#include "window.h"

window::window()
{
	price = 0; kol = 0; time = 0; summ = 0;
}
void window::Print_win()
{
	cout << setw(13) << name << " |" << setw(7) << kol << " |"
		<< setw(8) << measurement << " |" << setw(11) << price << " |"
		<< setw(10) << summ << " |" <<
		setw(12) << time << " |  " << material << endl;
}
void window::Set_win1(double _price, int _kol)
{
	price = _price; kol = _kol;
}
void window::Set_win2(double _sum, int _time)
{
	summ = _sum; time = _time;
}
double window::Get_sum()
{
	return summ;
}
int window::Get_time()
{
	return time;
}


