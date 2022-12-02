#include "Header.h"
#include "wall.h"
#include "window.h"
#include "door.h"
#include "roof.h"

class house: public wall, public window,
	public door, public roof
{
	string name = "House";
public:
	house();

	int building_w(wall *&w)
	{
		string str_w[3] = { "block","balk","brick" };
		string material_w = str_w[rand() % 3];		
		int _height = 3;

		double price = 0;

		if (material_w == "block")price = 2900;
		else if (material_w == "balk")price = 3700;
		else if (material_w == "brick")price = 4600;
	
		int width_1 = rand() % 6 + 4;
		int width_2 = rand() % 6 + 4;

		int all_width = width_1 * width_2;

		w[0].Seter_1(material_w, _height, width_1, price);
		w[1].Seter_1(material_w, _height, width_1, price);
		w[2].Seter_1(material_w, _height, width_2, price);
		w[3].Seter_1(material_w, _height, width_2, price);

		int area1= _height * width_1;
		int area2 = _height * width_2;
		int time1 = area1 / 5; int time2 = area2 / 5;
		double sum1 = area1 * price;
		double sum2 = area2 * price;

		w[0].Seter_2(area1, time1 ,sum1);
		w[1].Seter_2(area1, time1, sum1);
		w[2].Seter_2(area2, time2, sum2);
		w[3].Seter_2(area2, time2, sum2);



		int r_door2 = rand() % 4+1;
		int r_door_p = rand() % 10000 + 3000;
		
		return all_width;
	}

	void building_win(window & _win)
	{
		int r_wind = rand() % 4 + 2;
		int r_wind_p = rand() % 10000 + 3000;

		double sum = r_wind * r_wind_p;
		int time = r_wind * 2;

		_win.Set_win1(r_wind_p, r_wind);
		_win.Set_win2(sum,time);
	}

	void building_d(door& _d)
	{
		int k = rand() % 4 + 1;
		int p = rand() % 10000 + 3000;

		double sum = p * k;
		int time = k * 2;

		_d.Set_d1(p, k);
		_d.Set_d2(sum, time);
	}

	void building_r(roof& _r)
	{
		int _area = _r.Get_ar();
		double _price= rand() % 3000 +2000;
		double sum = _area * _price;
		int _time = _area + 10;

		_r.Seter1(_price);
		_r.Seter2(sum, _time);
	}
};