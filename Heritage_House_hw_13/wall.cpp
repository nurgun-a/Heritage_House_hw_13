#include "wall.h"

wall::wall()
{
	price = 0; height = 0; width = 0; summ = 0; area = 0; time = 0;
}
void wall::Seter_1(string _material, int _height, int _width, double _price)
{
	material = _material; height = _height; width = _width; price = _price;
}
void wall::Seter_2(int _area, int _time, double _sum)
{
	area = _area; time = _time; summ = _sum;
}
double wall::Get_sum()
{
	return summ;
}
int wall::Get_time()
{
	return time;
}
void wall::Print()
{
	cout << setw(13) <<name<< " |" << setw(7) << area << " |"
		<< setw(8) << measurement << " |" << setw(11) << price <<" |" 
		<< setw(10) << summ << " |" <<
		setw(12) << time << " |  " << material<<endl;
}


