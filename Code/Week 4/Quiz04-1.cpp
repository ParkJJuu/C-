// 입력되는 a, b의 값을 이용하여 a부터 b까지의 합을 구하는 프로그램
#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, sum = 0, i = 0;

	cout << "a의 값을 입력하시오: ";
	cin >> a;

	cout << "(a값보다 큰)b의 값을 입력하시오: ";
	cin >> b;

	for (i = 0; i <= b; i++) // i가 b보다 작거나 같을 때까지 반복문을 실행한다. 
	{
		sum+=(a+i);          // sum = sum + (a + i);
	}

	cout << "a부터 b까지의 합은 " << sum << "입니다.\n";
}