#include<iostream>
using namespace std;
class Time            
{public:
	void sethour(int a) {
		hour = a;
	}
	int gethour() {
		return hour;
	}
	void setminute(int b) {
		minute = b;
	}
	int getminute() {
		return minute;
	}
	void setsec(int c) {
		sec = c;
	}
	int getsec() {
		return sec;
	}

private:              
	int hour;
	int minute;
	int sec;
};
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	Time tl; 
	tl.sethour(a);
	cout << "hour:" << tl.gethour() << endl;
	tl.setminute(b);
	cout << "minute:" << tl.getminute() << endl;
	tl.setsec(c);
	cout << "hour:" << tl.getsec() << endl;
	
	
	return 0;
}
