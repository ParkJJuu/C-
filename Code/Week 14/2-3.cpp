#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y; // 한 점 (x,y) 좌표값
public:
	void set(int x, int y);
	void showPoint();
};

void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::showPoint() {
	cout << "(" << x << "," << y << ")" << endl;
}

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}

int main() {
	ColorPoint cp;
	ColorPoint *pDer;
	Point* pBase = &cp; // 업캐스팅

	pBase->set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint *)pBase; // 다운캐스팅
	pDer->setColor("Red"); // 정상 컴파일
	pDer->showColorPoint(); // 정상 컴파일
}