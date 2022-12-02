#include "house.h"
#include "Header.h"


void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	show_h();

	int all_time = 0;
	double all_sum = 0;
	double _area = 0;

	wall w1,w2,w3,w4;
	
	wall* w_all = new wall[4]{ w1,w2,w3,w4 };
	window win1; 
	door d1; 
	house h1;

	_area=h1.building_w(w_all);

	roof r1(_area);

	for (int i = 0; i < 4; i++)
	{		
		w_all[i].Print();
		all_time+= w_all[i].Get_time();
		all_sum += w_all[i].Get_sum();
	}
	h1.building_win(win1);	
	h1.building_d(d1);	
	h1.building_r(r1);

	win1.Print_win();
	d1.Print_d();
	r1.Print();

	all_time = win1.Get_time()+ d1.Get_time()+ r1.Get_time();
	all_sum = win1.Get_sum()+ d1.Get_sum()+ r1.Get_sum();

	cout << "-------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t  Итого:  Сумма: " << all_sum << "руб.  Время: " << all_time << " ч." << endl; 

}