#include <iostream>

using namespace std;

int main()
{
	cout << "KTANE modded solver: Forget This" << endl;
	cout << "Created by Limeboy" << endl;
	cout << "If there are any bugs, contact Limeboy0603#0356 on Discord" << endl;
	
	int stagecount;
	cout << "Enter the number of stages: ";
	cin >> stagecount;
	cout << "For every stage, enter: " << endl;
	cout << "[First letter of the color in capital(C/M/Y/B/W)] [charater you received]" << endl;
	char color[stagecount];
	char charater[stagecount];
	int digit[stagecount];
	for(int i=1;i<=stagecount;i++)
	{
		cin >> color[i] >> charater[i];
		if(int(charater[i])<=57)
			digit[i]=int(charater[i]-48);
		else digit[i]=int(charater[i]-55);
	}
	
	int k;
	int current=digit[1];
	cout << "Enter the 5 stage number shown in the module: ";
	for(int i=1;i<=5;i++)
	{
		
		cin >> k;
		if(color[k]=='C' and color[k-1]!='Y')
			current+=digit[k];
		else if(color[k]=='M' and color[k-1]!='B')
			current=current+digit[k]/2;
		else if(color[k]=='Y' and color[k-1]!='W')
			current=current+2*digit[k];
		else if(color[k]=='B' and color[k-1]=='C')
		{
			int j=current + digit[k];
			if(j % 2 == 1)
				current=(j+1)/2;
			else current=(j)/2;
		}
		else if(color[k]=='W' and color[k-1]!='M')
			current=current-digit[k];
	}
	
	cout << "Submit the following charater: ";
	if(current<=9)
	{
		k=current+48;
		cout << (char)k;
	}
	else
	{
		k=current+55;
		cout << (char)k;
	}
	return 0;
}
