// �ԷµǴ� a, b�� ���� �̿��Ͽ� a���� b������ ���� ���ϴ� ���α׷�
#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, sum = 0;

	cout << "a�� ���� �Է��Ͻÿ�: ";
	cin >> a;

	cout << "(a������ ū)b�� ���� �Է��Ͻÿ�: ";
	cin >> b;

	do
	{
		sum += a;  // sum = sum + a; 
		a++;       // a�� ���� 1�� ������Ų��.
	} while (a <= b);  // do-while���� ��� 1���� �����Ѵ�.

	cout << "a���� b������ ���� " << sum << "�Դϴ�.\n";
}