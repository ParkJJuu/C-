// �Խ��� ���α׷�
#include<iostream>
#include<string>    // string �迭 ����� ���� ����
using namespace std;

class Board { // �Խ��� ����� Board Ŭ���� ����, ��ü�� ������� static���� ����
private:
	static int a;	           // �Խñ� ������ ��ġ ������ ���� ��� ����
	static string b[];          // �Խñ� �����ϱ� ���� string �迭
public:				           
	static void add(string c) { // �Խñ� ���� static �Լ�
		b[a] = c;
		a++;
	}
	static void print() {  // �Խñ� ��� static �Լ�
		cout << "******************* �Խ����Դϴ�. *********************" << endl;
		int i = 0;
		while (i < a) {
			cout << i << ": " << b[i] << endl;
			i++;
		}
		cout << endl;
	}
};

/*�������� �˷��� ��
#include <string>

class Board {
	static int size;
	static string text[100];
	Board() {}
public:
	static void add(string text);
	static void print();
};

#include <iostream>
#include <string>
using namespace std;

#include "Board.h"

int Board::size = 0;
string Board::text[100];

void Board::add(string t) {
	if (size > 99)
		return;

	text[size] = t;
	size++;
}

void Board::print() {
	cout << "************** �Խ����Դϴ�. **********" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ": " << text[i] << endl;
	}
	cout << endl;
}
*/

int Board::a = 0; // static ��� ������ ���� ������ ����.
string Board::b[50];

int main() {
	// Board myBoard; ��ü ������ ������ �����Դϴ�. 
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}