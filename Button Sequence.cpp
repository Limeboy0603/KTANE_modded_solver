#include <iostream>

using namespace std;

int main()
{
	cout << "KTANE modded solver: Button Sequense" << endl;
	cout << "Created by Limeboy" << endl;
	cout << "If there are any bugs, contact Limeboy#0356 on discord" << endl;
	cout << endl;
	
	int red=0;
	int blue=0;
	int yellow=0;
	int white=0;
	char colour;
	char letter;
	int side;
	cout << "Enter the information of the button in the following order: (R/Y/B/W) Letter (No. of sides of the shape)" << endl;
	
	cout << "If you need to hold the button, hold the button, read the color of the LED and release when the countdown timer has the corisonnding number: " << endl;
	cout << "Blue: 2" << endl;
	cout << "White: 7" << endl;
	cout << "Yellow: 3" << endl;
	cout << "Magenta: 4" << endl;
	cout << "Others: 0" << endl;
	
	for(int i=1;i<=12;i++)
	{
		cin >> colour >> letter >> side;
		
		if(colour=='R')
		{			
			red+=1;
			switch(red)
			{
				case 1:
					if(letter=='A' and side==4)
						cout << "Hold" << endl;
					else if(letter=='A' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 6:
					if(letter=='A' and side==4)
						cout << "Hold" << endl;
					else if(letter=='A' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 2:
					if(letter=='D' and side==6)
						cout << "Hold" << endl;
					else if(letter=='D' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 7:
					if(letter=='D' and side==6)
						cout << "Hold" << endl;
					else if(letter=='D' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 3:
					if(letter=='H' and side==1)
						cout << "Hold" << endl;
					else if(letter=='H' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 8:
					if(letter=='H' and side==1)
						cout << "Hold" << endl;
					else if(letter=='H' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 4:
					if(letter=='A' and side==1)
						cout << "Hold" << endl;
					else if(letter=='A' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 9:
					if(letter=='A' and side==1)
						cout << "Hold" << endl;
					else if(letter=='A' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 5:
					if(letter=='P' and side==4)
						cout << "Hold" << endl;
					else if(letter=='P' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 10:
					if(letter=='P' and side==4)
						cout << "Hold" << endl;
					else if(letter=='P' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
			}
		}	

		if(colour=='Y')
		{
			yellow+=1;
			switch(yellow)
			{
				case 1:
					if(letter=='D' and side==1)
						cout << "Hold" << endl;
					else if(letter=='D' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 6:
					if(letter=='D' and side==4)
						cout << "Hold" << endl;
					else if(letter=='D' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 2:
					if(letter=='H' and side==6)
						cout << "Hold" << endl;
					else if(letter=='H' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 7:
					if(letter=='H' and side==6)
						cout << "Hold" << endl;
					else if(letter=='H' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 3:
					if(letter=='A' and side==4)
						cout << "Hold" << endl;
					else if(letter=='A' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 8:
					if(letter=='A' and side==4)
						cout << "Hold" << endl;
					else if(letter=='A' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 4:
					if(letter=='P' and side==1)
						cout << "Hold" << endl;
					else if(letter=='P' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 9:
					if(letter=='P' and side==1)
						cout << "Hold" << endl;
					else if(letter=='P' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 5:
					if(letter=='H' and side==6)
						cout << "Hold" << endl;
					else if(letter=='H' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 10:
					if(letter=='H' and side==6)
						cout << "Hold" << endl;
					else if(letter=='H' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
			}	
		}
		if(colour=='B')
		{
				
			blue+=1;
			switch(blue)
			{
				case 1:
					if(letter=='H' and side==1)
						cout << "Hold" << endl;
					else if(letter=='H' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 6:
					if(letter=='H' and side==1)
						cout << "Hold" << endl;
					else if(letter=='H' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 2:
					if(letter=='A' and side==4)
						cout << "Hold" << endl;
					else if(letter=='A' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 7:
					if(letter=='A' and side==4)
						cout << "Hold" << endl;
					else if(letter=='A' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 3:
					if(letter=='D' and side==6)
						cout << "Hold" << endl;
					else if(letter=='D' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 8:
					if(letter=='D' and side==6)
						cout << "Hold" << endl;
					else if(letter=='D' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 4:
					if(letter=='P' and side==4)
						cout << "Hold" << endl;
					else if(letter=='P' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 9:
					if(letter=='P' and side==4)
						cout << "Hold" << endl;
					else if(letter=='P' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 5:
					if(letter=='P' and side==6)
						cout << "Hold" << endl;
					else if(letter=='P' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 10:
					if(letter=='P' and side==6)
						cout << "Hold" << endl;
					else if(letter=='P' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
			}
		}
		if(colour=='W')
		{
			white+=1;
			switch(blue)
			{
				case 1:
					if(letter=='H' and side==6)
						cout << "Hold" << endl;
					else if(letter=='H' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 6:
					if(letter=='H' and side==6)
						cout << "Hold" << endl;
					else if(letter=='H' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 2:
					if(letter=='D' and side==4)
						cout << "Hold" << endl;
					else if(letter=='D' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 7:
					if(letter=='D' and side==4)
						cout << "Hold" << endl;
					else if(letter=='D' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 3:
					if(letter=='P' and side==6)
						cout << "Hold" << endl;
					else if(letter=='P' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 8:
					if(letter=='P' and side==6)
						cout << "Hold" << endl;
					else if(letter=='P' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 4:
					if(letter=='A' and side==1)
						cout << "Hold" << endl;
					else if(letter=='A' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 9:
					if(letter=='A' and side==1)
						cout << "Hold" << endl;
					else if(letter=='A' or side==1)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 5:
					if(letter=='D' and side==6)
						cout << "Hold" << endl;
					else if(letter=='D' or side==6)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
				
				case 10:
					if(letter=='D' and side==4)
						cout << "Hold" << endl;
					else if(letter=='D' or side==4)
						cout << "Tap" << endl;
					else cout << "Skip" << endl;
				break;
			}
		}
		
		
	}
	return 0;
}
