#include<iostream>
using namespace std;
double sum(double x, double y);

int main()
{
	double x , y;
	cout<< "please enter x and y: \n";
	cin >> x>>y;
	cout<<"sum ="<< sum(x , y)<<endl;
	
	
	system("pause");
	return 0;
}


double sum(double x, double y)
{
	
	return x+y;

}
