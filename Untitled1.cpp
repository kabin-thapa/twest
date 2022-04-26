#include<iostream>
#include<conio.h>
using namespace std;
class a{
	public:
		int a;
		void get(){
			cout<<"enter value of a:";
			cin>>a;
		}
		void show(){
			cout<<"value of a is :"<<a<<endl;
		}
};
int main(void){
	a a1;
	a1.get();
	a1.show();
	getch();
}
