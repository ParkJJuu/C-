// 게시판 프로그램
#include<iostream>
#include<string>    // string 배열 사용을 위해 선언
using namespace std;

class Board { // 게시판 기능의 Board 클래스 선언, 객체의 멤버들은 static으로 선언
private:
	static int a;	           // 게시글 저장할 위치 정보를 가진 멤버 변수
	static string b[];          // 게시글 저장하기 위한 string 배열
public:				           
	static void add(string c) { // 게시글 저장 static 함수
		b[a] = c;
		a++;
	}
	static void print() {  // 게시글 출력 static 함수
		cout << "******************* 게시판입니다. *********************" << endl;
		int i = 0;
		while (i < a) {
			cout << i << ": " << b[i] << endl;
			i++;
		}
		cout << endl;
	}
};

/*교수님이 알려준 답
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
	cout << "************** 게시판입니다. **********" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ": " << text[i] << endl;
	}
	cout << endl;
}
*/

int Board::a = 0; // static 멤버 번수는 전역 변수로 선언.
string Board::b[50];

int main() {
	// Board myBoard; 객체 생성은 컴파일 오류입니다. 
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}