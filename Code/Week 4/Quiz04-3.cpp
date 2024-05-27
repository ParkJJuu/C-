// 입력되는 a, b의 값을 이용하여 a부터 b까지의 합을 구하는 프로그램
#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, sum = 0;

	cout << "a의 값을 입력하시오: ";
	cin >> a;

	cout << "(a값보다 큰)b의 값을 입력하시오: ";
	cin >> b;

	do
	{
		sum += a;  // sum = sum + a; 
		a++;       // a의 값을 1씩 증가시킨다.
	} while (a <= b);  // do-while문은 적어도 1번은 실행한다.

	cout << "a부터 b까지의 합은 " << sum << "입니다.\n";
}