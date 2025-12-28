#include <iostream>
using namespace std;
int main()
{
int Number;
cout << "Enter an integer number -> ";
cin >> Number;
cout << "The number is:" << endl;
cout << dec << Number << " in decimal" << endl;
cout << hex << Number << " in hexadecimal" << endl;
return 0;
}
