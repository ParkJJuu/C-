//���ǹ�, �ݺ���, �迭�� �̿��Ͽ� ����ڷκ��� �Է¹��� �Ÿ� ���� ���� ������� ��޷� ��� ���α׷�.
#include <iostream>
using namespace std;

class Person {
	int price;
public:
	Person() { price = 100; }
	void setprice(int a) { 
		price = a;
	}
	int delivery_charge(int a);
};


int Person::delivery_charge(int a) { 
	if ( a >= 3 )					// a���� ���� ���ǹ�
		return price + 2000;		// a�� 3km �̻��� ���, �޴� �� + ��޷� 2000�� �߰�
	else							
		return price + 1000;		// a�� 3km �̸��� ���, �޴� �� + ��޷� 1000�� �߰�
}

int main() {
	cout << "\t\t============�޴���============\n";
	cout << "\t\t    �޴�1  ¥��� 7,000��  \n";
	cout << "\t\t    �޴�2   «��  8,000��  \n";
	cout << "\t\t    �޴�3  ������ 4,500��  \n" << endl;

	int a;
	cout << "���������� �������� �Ÿ��� �Է����ּ���(km������ �Է�): ";
	cin >> a;		// a�� ����ڷκ��� �Է¹޴� �������� �� ������ �Ÿ��� ��Ÿ��

	Person menu[3]; // �迭 ����

	menu[0].setprice(7000);
	menu[1].setprice(8000);
	menu[2].setprice(4500);

	for (int i = 0; i < 3; i++) { // �޴� �� + ��޷� ���� ���� ����ϴ� �ݺ��� 
		cout << "\n�޴�" << i + 1 << "�� ��޷� ���� ������ " << menu[i].delivery_charge(a) << "���Դϴ�." << endl;
	}
}