#include<iostream>
#include<Windows.h>
class stopwatch{
	private:
		int saniye;
		int dakika;
		int saat;
	public:
		stopwatch();
		void readtime();
		void settime(int saat,int dakika,int saniye);
		void operator ++();
		bool operator --();
		bool operator --(int);
		stopwatch operator + (stopwatch sw2) const;
};
