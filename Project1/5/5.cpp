#include<iostream>
using namespace std;
class point {
public:
	point() {
		x = 60;
		y = 80;
	}
public:
	void setPoint(int i, int j) {
		x += i;
		y += j;
		display();
	}
	void display() {
		cout << " ("<<x<<":" << y<<")" << endl;
	}
private:
	int x;
	int y;

};
int main() {
	point p;
	int a, b;
	cin >> a >> b;
	p.setPoint(a, b);
	
	

}