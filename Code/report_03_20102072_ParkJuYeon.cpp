//조건문, 반복문, 배열을 이용하여 사용자로부터 입력받은 거리 수에 따른 배달음식 배달료 출력 프로그램.
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
	if ( a >= 3 )					// a값에 따른 조건문
		return price + 2000;		// a가 3km 이상일 경우, 메뉴 값 + 배달료 2000원 추가
	else							
		return price + 1000;		// a가 3km 미만일 경우, 메뉴 값 + 배달료 1000원 추가
}

int main() {
	cout << "\t\t============메뉴판============\n";
	cout << "\t\t    메뉴1  짜장면 7,000원  \n";
	cout << "\t\t    메뉴2   짬뽕  8,000원  \n";
	cout << "\t\t    메뉴3  군만두 4,500원  \n" << endl;

	int a;
	cout << "음식점에서 집까지의 거리를 입력해주세요(km단위로 입력): ";
	cin >> a;		// a는 사용자로부터 입력받는 음식점과 집 사이의 거리를 나타냄

	Person menu[3]; // 배열 선언

	menu[0].setprice(7000);
	menu[1].setprice(8000);
	menu[2].setprice(4500);

	for (int i = 0; i < 3; i++) { // 메뉴 값 + 배달료 포함 값을 출력하는 반복문 
		cout << "\n메뉴" << i + 1 << "의 배달료 포함 가격은 " << menu[i].delivery_charge(a) << "원입니다." << endl;
	}
}