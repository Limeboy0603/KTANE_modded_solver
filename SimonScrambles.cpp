//Ktane modded solver: Simon scrambles
//Created by Limeboy

#include <iostream>

using namespace std;

int main()
{
	char color[10];
	
	cout << "Input the color sequence (RGBY in capital letters): ";
	for (int i=1;i<=10;i++)
		cin >> color[i];
		
	switch(color[1])
	{
		case 'B' :
			cout << "Y";
			break;
		case 'Y' :
			cout << "G";
			break;
		case 'R' :
			cout << "B";
			break;
		case 'G' :
			cout << "R";
			break;
		
	}
	switch(color[2])
	{
		case 'B' :
			cout << "G";
			break;
		case 'Y' :
			cout << "B";
			break;
		case 'R' :
			cout << "Y";
			break;
		case 'G' :
			cout << "R";
			break;
		
	}
	switch(color[3])
	{
		case 'B' :
			cout << "R";
			break;
		case 'Y' :
			cout << "G";
			break;
		case 'R' :
			cout << "Y";
			break;
		case 'G' :
			cout << "B";
			break;
		
	}
	switch(color[4])
	{
		case 'B' :
			cout << "R";
			break;
		case 'Y' :
			cout << "Y";
			break;
		case 'R' :
			cout << "G";
			break;
		case 'G' :
			cout << "B";
			break;
		
	}
	switch(color[5])
	{
		case 'B' :
			cout << "R";
			break;
		case 'Y' :
			cout << "B";
			break;
		case 'R' :
			cout << "G";
			break;
		case 'G' :
			cout << "Y";
			break;
		
	}
	switch(color[6])
	{
		case 'B' :
			cout << "B";
			break;
		case 'Y' :
			cout << "Y";
			break;
		case 'R' :
			cout << "R";
			break;
		case 'G' :
			cout << "G";
			break;
		
	}
	switch(color[7])
	{
		case 'B' :
			cout << "Y";
			break;
		case 'Y' :
			cout << "G";
			break;
		case 'R' :
			cout << "B";
			break;
		case 'G' :
			cout << "R";
			break;
		
	}
	switch(color[8])
	{
		case 'B' :
			cout << "Y";
			break;
		case 'Y' :
			cout << "B";
			break;
		case 'R' :
			cout << "G";
			break;
		case 'G' :
			cout << "R";
			break;
		
	}
	switch(color[9])
	{
		case 'B' :
			cout << "R";
			break;
		case 'Y' :
			cout << "Y";
			break;
		case 'R' :
			cout << "B";
			break;
		case 'G' :
			cout << "G";
			break;
		
	}
	switch(color[10])
	{
		case 'B' :
			cout << "G";
			break;
		case 'Y' :
			cout << "R";
			break;
		case 'R' :
			cout << "Y";
			break;
		case 'G' :
			cout << "B";
			break;
		
	}
	
	return 0;
}
