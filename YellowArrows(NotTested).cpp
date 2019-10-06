#include <iostream>

using namespace std;

int main()
{
	int serial;
	char letter;
	char response;	
	int batteries;
	int holders;
	
	cout << "KTANE modded solver: Yellow Arrows" << endl;
	cout << "Created by Limeboy" << endl;
	cout << "If there are any bugs, please contact Limeboy0603#0356 on discord" << endl;
	cout << endl;
	
	cout << "Please input the last digit of the serial: " ;
	cin >> serial;
	
	cout << "Please input the letter on the module (In capital letters): " ;
	cin >> letter;

	cout << "Please input the number of batteries and holders: ";
	cin >> batteries >> holders;
	
	
	int code=int(letter)-64;
	int input[5]; //up 1 down 2 left 3 right 4
	for(int i=1;i<=5;i++)
	{
		if(code>26)
			code=code-26;
		switch(code)
		{
			case 1://A
			{
				cout << "Up";
				input[i]=1;
			}
			break;
			
			case 2://B
			{
				if(i==1)
				{
					cout << "Right ";
					input[i]=4;
				}
				else if(input[i-1]==3)
				{
					cout << "Down";
					input[i]=2;
				}
				else
				{
					cout << "Right";
					input[i]=4;
				}
			}
			break;
			
			case 3://C
			{
				if(serial==3)
				{
					cout << "Left";
					input[i]=3;
				}
				else
				{
					cout << "Up";
					input[i]=1;
				}
			}
			break;
			
			case 4://D
			{
				if(i==1)
				{
					cout << "Up";
					input[i]=1; 
				}
				else
				{
					cout << "Down";
					input[i]=2;
				}
			}
			break;
			
			case 5://E
			{
				cout << endl;
				cout << "Is there a lit SIG (Y/N): " ;
				cin >> response;
				cout << endl;
				if(response=='Y')
				{
					cout << "Right" ;
					input[i]=4;
				}
				else
				{
					cout << "Left" ;
					input[i]=3;
				}	
			}
			break;
			
			case 6://F
			{
					cout << "Down";
					input[i]=2;
			}
			break;
			
			case 7://G
			{
				int j=1;
				bool found=false;
				while((j<i) and found==true)
					if(input[j]==2)
						found=true;
				if(found)
				{
					cout << "Down";
					input[i]=2;
				}
				else
				{
					cout << "Up";
					input[i]=1;	
				}
			}
			break;
			
			case 8://H
			{
				cout << "Right";
				input [i]=4;	
			}
			break;
				
			case 9://I
			{
				cout << "Down";
				input[i]=2;
			}
			break;
			
			case 10://J
			{
				if(i==1)
				{
					cout << "Up";
					input[i]=1;
				}
				else if(input[i-1]==2)
				{
					cout << "Left";
					input[i]=3;
				}
				else
				{
					cout << "Up";
					input[i]=1;
				}
			}
			break;
				
			case 11://K
			{
				cout << "Down";
				input[i]=2;
			}
			break;
			
			case 12://L
			{
				if(batteries==0)
				{
					cout << "Up";
					input[i]=1;
				}
				else
				{
					cout << "Down";
					input[i]=2;
				}
			}
			break;
			
			case 13://M
			{
				if(holders<3)
				{
					cout << "Right";
					input[i]=4;
				}
				else
				{
					cout << "Left";
					input[i]=3;
				}
			}
			break;
			
			case 14://N
			{
				cout << "Right";
				input[i]=4;
			}
			break;
			
			case 15://O
			{
				cout << endl;
				cout << "Does the serial contains the letter O (Y/N)?";
				cin >> response;
				cout << endl;
				
				if(response=='Y')
				{
					cout << "Left";
					input[i]=3;
				}
				else
				{
					cout << "Down";
					input[i]=2;
				}
			}
			break;
			
			case 16://P
			{
				cout << endl;
				cout << "Does the serial contains 4 letters (Y/N)?";
				cin >> response;
				cout << endl;
				
				if(response=='Y')
				{
					cout << "Down";
					input[i]=2;
				}
				else
				{
					cout << "Up";
					input[i]=1;
				}
			}
			break;
			
			case 17://Q
			{
				if(i==1)
				{
					cout << "Left";
					input[i]=3;
				}
				else if(input[i-1]==2)
				{
					cout << "Down";
					input[i]=2;
				}
				else
				{
					cout << "Left";
					input[i]=3;
				}
			}
			break;
			
			case 18://R
			{
				cout << endl;
				cout << "Is there an unlit CLR indicator (Y/N)?";
				cin >> response;
				cout << endl;
				
				if(response=='Y')
				{
					cout << "Up";
					input[i]=1;
				}
				else
				{
					cout << "Down";
					input[i]=2;
				}
			}
			break;
			
			case 19://S
			{
				cout << "Left";
				input[i]=3;
			}
			
			case 20://T
			{
				if(batteries % 2 == 0)
				{
					cout << "Left";
					input[i]=3;
				}
				else
				{
					cout << "Down";
					input[i]=2;
				}
			}
			break;
			
			case 21://U
			{
				cout << "Down";
				input[i]=2;
			}
			break;
			
			case 22://V
			{
				if(i==1)
				{
					cout << "Down";
					input[i]=2;
				}
				else if(input[i-1]==1)
				{
					cout << "Up";
					input[i]=1;
				}
				else
				{
					cout << "Down";
					input[i]=2;
				}
			}
			break;
			
			case 23://W
			{
				cout << "Right";
				input[i]=4;
			}
			break;
			
			case 24://X
			{
				if(i==1)
				{
					cout << "Up";
					input[i]=1;
				}
				else
				{
					cout << "Left";
					input[i]=3;
				}
			}
			break;
			
			case 25:
			{
				cout << "Up";
				input[i]=1;
			}
			break;
			
			case 26:
			{
				cout << "Right";
				input[i]=4;
			}
			break;			
		}
		cout << " ";
		code=code+serial+1;
	}
	return 0;
}
