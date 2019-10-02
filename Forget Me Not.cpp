#include <iostream>

using namespace std;

int main()
{
	cout << "KTANE modded solver: Forget me not" << endl;
	cout << "Created by Limeboy" << endl;
	cout << "If there are any bugs, contact Limeboy0603#0356 on Discord" << endl << endl;
	
	int stage;
	cout << "Enter the number of modules on the bomb (Excluding ignored modules):" ;
	cin >> stage;
	
	int display[stage];
	int obtained[stage];
	int answer[stage];
	char response;
	int input;
	cout << "Enter the number on the display in order they appear, press ENTER for each number you input. " << endl;
	for(int i=1;i<=stage;i++)
	{
		cin >> display[i];
	}
	
	
	//stage 1
	cout << "Is there an unlit CAR indicator (response with Y/N, must be one capital letter)? " ;
	cin >>response;
	if(response=='Y')
		obtained[1]=2;
	else
	{
		cout << "Are there more unlit indicators then lit indicators (Y/N)? ";
		cin >> response;
		if(response=='Y')
			obtained[1]=7;
		else
		{
			cout << "Is there no unlit indicators (Y/N)? ";
			cin >> response;
			if(response=='Y')
			{
				cout << "Enter the number of lit indicators: ";
				cin >> input;
				obtained[1]=input;
			}
			else
			{
				cout << "Enter the last digit of the serial: ";
				cin >> input;
				obtained[1]=input;
			}
		} 	
	}
	answer[1]=(display[1]+obtained[1])%10;
	//stage 2
	cout << "Is there a serial port and 3 or more digits in the serial (Y/N)? ";
	cin >> response;
	if(response=='Y')
		obtained[2]=3;
	else if(answer[1] % 2 == 0)
		obtained[2]=answer[1]+1;
	else obtained[2]=answer[1]-1;
	answer[2]=(display[2]+obtained[2])%10;
	
	int largestserial;
	int smalloddserial;
	
	cout << "Input the largest serial digit: ";
	cin >> largestserial;
	
	cout << "Input the smallest odd digit in the serial, or 9 if no such digit exist: ";
	cin >> smalloddserial;
	
	//stage >3
	for(int i=3;i<=stage;i++)
	{
		if((answer[i-1]==0) or (answer[i-2]==0))
			obtained[i]=largestserial;
		else if((answer[i-1] % 2 == 0) and (answer[i-2] % 2 == 0))
			obtained[i]=smalloddserial;
		else if(answer[i-1]+answer[i-2]>=10)
			obtained[i]=1;
		else obtained[i]=answer[i-1]+answer[i-2];
		answer[i]=(display[i]+obtained[i])%10;
	}
	cout << endl << "The answer is:" << endl;
	//print out the answer
	for(int i=1;i<=stage;i++)
	{
		cout << answer[i];
		if(i%3==0)
			cout << " ";
		if(i%12==0)
			cout << endl;
	}
	
	
	return 0;
}
