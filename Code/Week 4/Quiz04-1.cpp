// �ԷµǴ� a, b�� ���� �̿��Ͽ� a���� b������ ���� ���ϴ� ���α׷�
#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, sum = 0, i = 0;

	cout << "a�� ���� �Է��Ͻÿ�: ";
	cin >> a;

	cout << "(a������ ū)b�� ���� �Է��Ͻÿ�: ";
	cin >> b;

	for (i = 0; i <= b; i++) // i�� b���� �۰ų� ���� ������ �ݺ����� �����Ѵ�. 
	{
		sum+=(a+i);          // sum = sum + (a + i);
	}

	cout << "a���� b������ ���� " << sum << "�Դϴ�.\n";
}