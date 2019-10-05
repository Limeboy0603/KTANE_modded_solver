#include <iostream>

using namespace std;

int main()
{
	int pewdiepie;
	int tseries;
	int temp;
	
	cout << "KTANE modded solver: Subscribe to Pewdiepie" << endl;
	cout << "Created by Limeboy" << endl;
	cout << "If there are any bugs, contact Limeboy0603#0356 on Discord " << endl;
	
	cout << "Enter the sub count of Pewdiepie: ";
	cin >> pewdiepie;
	cout << "Enter the sub count of T-series: ";
	cin >> tseries;
	
	if(tseries>pewdiepie)
	{
		temp=tseries;
		tseries=pewdiepie;
		pewdiepie=tseries;
	}
	
	int tword;
	int pie;
	cout << "Enter the number of T word modules on the bomb: ";
	cin >> tword;
	for(int i=0;i<=tword;i++)
		tseries+=500;
	tseries-=500;
	cout << "Enter the number of pie modules: ";
	cin >> pie;
	for(int i=0;i<=pie;i++)
		pewdiepie+=500;
	pewdiepie-=500;
	
	char res;
	int diff;
	cout << "Is there a 101 Dalmatians and Cooking module (Y/N)? ";
	cin >> res;
	if(pewdiepie>tseries)
		diff=pewdiepie-tseries;
	else diff=tseries-pewdiepie;
	if(res=='Y')
		tseries-=diff;
		
	int batteries;
	cout << "Enter the number of batteries: ";
	cin >> batteries;
	if(batteries==0)
	{
		cout << "Are there any letters from TSERIES in the serial (Y/N)? ";
		cin >> res;
		if(res=='Y')
			tseries*=1.5;
	}
	else
	{
		for(int i=1;i<=batteries;i++)
			pewdiepie*=0.95;
		cout << "Are there any letters from TSERIES in the serial (Y/N)? ";
		cin >> res;
		if(res=='Y')
			tseries*=1.5;
	}
	
	int gap=pewdiepie-tseries;
	if(tseries>pewdiepie)
		cout << "Submit 00000" << endl;
	else cout << "Submit " <<  gap%100000 << endl;
	
	return 0;
}
