#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y; // �� �� (x,y) ��ǥ��
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
	showPoint(); // Point�� showPoint() ȣ��
}

int main() {
	ColorPoint cp;
	ColorPoint *pDer;
	Point* pBase = &cp; // ��ĳ����

	pBase->set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint *)pBase; // �ٿ�ĳ����
	pDer->setColor("Red"); // ���� ������
	pDer->showColorPoint(); // ���� ������
}