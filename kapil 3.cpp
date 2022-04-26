#include<iostream>
#include<conio.h>
#include<stdlib.h>
class tollbooth{
	int number ,amount;
	public:
		tollbooth()
		{
			number=0;
			amount=0;
			
		}
		void payingcar()
		{
			number++;
			amount+=5;
			
		}
		void nopaycar()
		{
			number+1;
			
		}
		void display()
		{
			cout<<"number of cars="<<number<<endl;
			cout<<"total amount collected="<<amount<<endl;
			
		}
};
int main(void)
{
	tollbooth t;
	int choice;
	while(1)
	{
		cout<<"menu:\n 1.payingcar\n 2.nonpayingcar\n 3.exit\n"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:t.payingcar();
			t.display();
			break;
			case 2:t.nonpaycar();
			t.display();
			break;
			case 3:exit(0);
			default:cout<<"please enter valid choice between 2 to 3"<<endl;
		}
	}
	getch();
}
