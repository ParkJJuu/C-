#include <iostream>
#include "Dept.h" 
using namespace std; 

Dept::Dept(Dept& dept) {  // ������ ����
	this->size = dept.size;
	this->scores = dept.scores;
}

Dept::~Dept() {}; // �Ҹ��� ����

void Dept::read() {  // read ��� �Լ� ����
	cout << "10 ~ 100���� 10���� ���� �Է� ";
	for (int i = 0; i < 10; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) { // isOver ��� �Լ� ����
	return 60 <= scores[index] == true;
}