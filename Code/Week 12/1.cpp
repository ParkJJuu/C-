/* Ű����κ��� ������ ���� �о� Circle ��ü�� �������� �����ϴ� 
readRadius() �Լ��� �ۼ��϶�.*/ 
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
	cout << "���� ������ �������� �Է��ϼ���>> "; 
	cin >> b; // ����ڷκ��� ������ ���� �Է� ���� 
	a.setRadius(b); 
} 
  
int main() { 
	Circle donut; 
	readRadius(donut); 
	cout << "donut�� ���� = " << donut.getArea() << endl; 
} 
 
// ���� ������ �������� �Է��ϼ���>> 3 
// donut�� ���� = 28.26 