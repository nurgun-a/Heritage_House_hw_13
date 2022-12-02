#include "Header.h"

class window 
{
protected:
	string name="Окно";
	string measurement = "шт.";
	string material = "plastic";
	double price;
	int kol;
	int time;
	double summ;

public:
	window();
	void Print_win();
	void Set_win1(double _price, int _kol);
	void Set_win2(double _sum, int _time);

	double Get_sum();
	int Get_time();
};

