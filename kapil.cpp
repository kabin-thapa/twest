#include<iostream>
#include<conio.h>
using namespace std;
class rational
{
	int num,den;
	public:
		void getrational()
		{
			cout<<"enter the value of numerator and denominator:"<<endl;
			cin>>num>>den;
			}
			void displayrational()
			{
				cout<<"rational number is :"<<num<<"/"<<den;
				
				
					}
							};
							
int main (void)
{
	rational R;
	R.getrational();
	R.displayrational();
	getch();
}
