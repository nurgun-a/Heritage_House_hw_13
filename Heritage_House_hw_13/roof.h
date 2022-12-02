#include "Header.h"

class roof 
{
protected:
	string name = "Крыша";
	string measurement = "м2.";
	string material = "wood";

	double price, summ;
	int  time, area ;	

public:

	roof();
	roof(int _area);	
	void Print();

	void Seter1(double _price);
	void Seter2(double _sum, int _time);

	int Get_ar();
	int Get_time();
	double Get_sum();
};

