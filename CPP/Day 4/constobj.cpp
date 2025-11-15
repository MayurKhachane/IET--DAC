
#include <iostream>  
using namespace std;  
#include<string.h>
class Cdate
{
	int day,month,year;
	public:
		int	getDay()const;
		Cdate(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		void display()const
		{
			cout<<"display date\n";
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		void setDay(int dd)
		{
			day=dd;
		}
		
		
};
int Cdate::	getDay()const
		{
			return day;
		}
int main()
{
	const Cdate d1(28,2,2025);
	d1.display();
	Cdate d2(1,1,2000);
	d2.setDay(2);
	d2.getDay();
	
}