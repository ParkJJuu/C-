#include <iostream> 
using namespace std;   
 
class Rectangle { // Rectangle Ŭ������ ����
private:   
	int width;   // ��� ���� ����(�ʺ�, ����)
	int height;   
public:   
	int getArea() {   // public�� �̿��Ͽ� ��� �Լ� ����
		cout << "�ʺ�� ���̸� �Է��Ͻÿ�. "; // ����ڷκ��� �Է¹޴� width, height
		cin >> width >> height; 
		return width * height;   
	}   
};   
   
int main() {   
	Rectangle rect; // ��ü rect ����
	cout << "\n�簢���� ������ " << rect.getArea() << " �Դϴ�." << endl;   
}   