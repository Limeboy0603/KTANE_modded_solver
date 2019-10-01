//ktane solver: wire placement
//created by Limeboy

#include <iostream>

using namespace std;

int main()
{
	cout << "KTANE modded solver: Wire placement" << endl;
	cout << "If there are any bugs, contact Limeboy0603#0356 on Discord" << endl;
	cout << endl;
	cout << "Y: Yellow" << endl;
	cout << "B: Blue" << endl;
	cout << "R: Red" << endl;
	cout << "W: White" << endl;
	cout << "L: Black" << endl;
	char input;
	cout << "Input the colour of the wire connected to C3 (With reference to the above letters that represents the colour";
	cin >> input;
	cout << endl << endl;
	
	switch(input)
	{
		case 'Y':
			cout << "Y: A3 A4 D1" << endl;
			cout << "B: B1 D4" << endl;
			cout << "R: B3 C2" << endl;
			cout << "W: B2 C1" << endl;
			cout << "L: B4" << endl;
		break;
		
		case 'W':
			cout << "Y: A2 A4 B4" << endl;
			cout << "B: C4 D3" << endl;
			cout << "R: B2 C1" << endl;
			cout << "W: A1 B3" << endl;
			cout << "L: D2" << endl;
		break;
		
		case 'R':
			cout << "Y: A2 B2 D2" << endl;
			cout << "B: A1 C1" << endl;
			cout << "R: B1 C4" << endl;
			cout << "W: B4 D4" << endl;
			cout << "L: A4" << endl;
		break;
		
		case 'B':
			cout << "Y: A1 C3 D1" << endl;
			cout << "B: C2 C4" << endl;
			cout << "R: B3 D3" << endl;
			cout << "W: C1 D2" << endl;
			cout << "L: D4" << endl;
		break;
		
		case 'L':
			cout << "Y: A3 D1 D2" << endl;
			cout << "B: A2 C3" << endl;
			cout << "R: A1 C4" << endl;
			cout << "W: B2 D3" << endl;
			cout << "L: B1" << endl;
		break;
	}
	return 0;
}
