#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	double k1=3;
	double k;
	double k2=4;
	double temp;
        k=sqrt(k1*k1+k2*k2);
	double kg=sqrt(k*k/(k*k+k2*k2));
	for(int i=0;i<10;i++)
	{
		k=sqrt(k1*k1+k2*k2);
		temp=sqrt((1-kg)*k*k);
		cout<<temp<<" ";
		k1=temp;
//		k2=temp;
		kg=sqrt(k*k/(k*k+k2*k2));
	}
	cout<<endl;
	return 0;
}
