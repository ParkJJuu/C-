// �ԷµǴ� a, b�� ���� �̿��Ͽ� a���� b������ ���� ���ϴ� ���α׷�
#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, sum = 0, i = 0;
	
	cout << "a�� ���� �Է��Ͻÿ�: ";
	cin >> a;
  
	cout << "(a������ ū)b�� ���� �Է��Ͻÿ�: ";
	cin >> b;

 	while (a <= b) // a���� b������ ��
	{	
		sum += a; // sum = sum + a;
 		a++;      // while���� ���� ��, a�� ���� 1�� �����Ѵ�.
	}
 
	cout << "a���� b������ ���� " << sum << "�Դϴ�.\n";
}