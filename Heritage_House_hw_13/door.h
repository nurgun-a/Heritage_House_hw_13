#include "Header.h"

class door 
{
protected:
	string name = "ִגונü";
	string measurement="רע.";
	string material = "wood";
	double price;
	int kol;
	int time;
	double summ;
	
public:
	door();
	
	void Print_d();
	void Set_d1(double _price,int _kol);
	void Set_d2(double _sum, int _time);

	double Get_sum();
	int Get_time();
};

