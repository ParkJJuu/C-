/* 키보드로부터 반지름 값을 읽어 Circle 객체에 반지름을 설정하는 
readRadius() 함수를 작성하라.*/ 
#include <iostream> 
using namespace std; 
  
class Circle { 
	int radius; 
public: 
	Circle() { radius = 1; } 
	Circle(int radius) { this->radius = radius; } 
	void setRadius(int radius) { this->radius = radius; }  
	double getArea() { return 3.14*radius*radius; } 
}; 
 
void readRadius(Circle &a) { 
	int b; 
	cout << "정수 값으로 반지름을 입력하세요>> "; 
	cin >> b; // 사용자로부터 반지름 값을 입력 받음 
	a.setRadius(b); 
} 
  
int main() { 
	Circle donut; 
	readRadius(donut); 
	cout << "donut의 면적 = " << donut.getArea() << endl; 
} 
 
// 정수 값으로 반지름을 입력하세요>> 3 
// donut의 면적 = 28.26 