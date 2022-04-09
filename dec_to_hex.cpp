#include <iostream>

using namespace std;

int main(void)
{
	int valueToConvert = 0; 
	int hexArray[8];		
	int i = 0;				
	char HexValues[] = "0123456789ABCDEF";

	cout << "Enter a Decimal Value" << endl;
	cin >> valueToConvert;					 
	while (valueToConvert > 15)
	{										 
		hexArray[i++] = valueToConvert % 16; 
		valueToConvert /= 16;
	}
	hexArray[i] = valueToConvert; 
	cout << "Hex Value: ";
	while (i >= 0)
		cout << HexValues[hexArray[i--]];

	cout << endl;
	return 0;
}