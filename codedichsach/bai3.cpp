#include <iostream>
using namespace std;
// Hàm cộng hai số thực
float Add(float a, float b)
{
float sum;
sum = a + b;
return sum;
}
// Hàm main
int main()
{
float p = 1, q = 2.3, r = 3, s = 4.5;
float Sum1, Sum2;
Sum1 = Add(p, q);   // Lần gọi hàm thứ nhất
cout << "First Sum " << Sum1 << endl;
Sum2 = Add(r, s);   // Lần gọi hàm thứ hai
cout << "Second Sum " << Sum2 << endl;
return 0;
}
