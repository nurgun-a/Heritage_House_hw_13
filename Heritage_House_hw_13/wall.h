#include "Header.h"

class wall
{
protected:
	string name = "�����";
	string measurement = "�2.";

	string material;
	
	double price;
	int height, width;

	double summ;
	int area,time;
public:
	wall();
	void Print();

	void Seter_1(string _material, int _height, int _width, double _price);
	void Seter_2(int _area,int _time, double _sum);
	double Get_sum();
	int Get_time();
	
};

