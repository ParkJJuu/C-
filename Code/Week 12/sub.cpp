#include <iostream>
#include "Dept.h" 
using namespace std; 

Dept::Dept(Dept& dept) {  // 생성자 구현
	this->size = dept.size;
	this->scores = dept.scores;
}

Dept::~Dept() {}; // 소멸자 구현

void Dept::read() {  // read 멤버 함수 구현
	cout << "10 ~ 100까지 10개의 점수 입력 ";
	for (int i = 0; i < 10; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) { // isOver 멤버 함수 구현
	return 60 <= scores[index] == true;
}