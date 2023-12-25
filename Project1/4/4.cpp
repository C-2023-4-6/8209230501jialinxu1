#include<iostream>
using namespace std;
class student {
public:
	student(int n, int m) {
		num = n;
		score = m;
	}
	void display();
	int score;
	int num;
};
void student::display() {
	cout << num << " " << score << endl;
}
int Max(student* s) {
	int max = s[0].score;
	int k=s[0].num;
	for (int i = 0; i < 5; i++) {
		if (s[i].score>max) {
			max = s[i].score;
			k = s[i].num;
		}
	}
	cout << max << " " << k<< endl;
	return 0;
}
int main() {
	int a1, b1, a2, b2, a3, b3, a4, b4, a5, b5;
	cin >> a1 >>b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;
	cin >> a4 >> b4;
	cin >> a5 >> b5;
	student s[5] = { student(a1,b1),student(a2,b2),student(a3,b3),student(a4,b4),student(a5,b5) };
	student* p = s;
	for (p = s; p < s + 5; p++) {
		p->display();
	}
	student* p1;
	p1 = s;
	Max(p1);
	
}