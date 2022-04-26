#include<iostream>
#include<conio.h>
using namespace std;
class shape{
	protected:
		float width,height;
		public:
			void getvalue()
			{
				cout<<"enter width and height of a shape:"<<endl;
				cin>>width>>height;
				
			}
};
class rectangle::publicshape{


	public:
		float calculatearea()
{
	rteturn(width*height);
	
}
};
int main(void)
{
	rectangle R;
	R.getvalue();
	cout<<"area of rectangle is :"<<R.calculatearea()<<endl;
	getch();
}
