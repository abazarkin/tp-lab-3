#include <iostream>
#include "DateTime.h"
using namespace std;


int main(){
	DateTime dat1(10, 12, 2019);
	DateTime dat2(31, 12, 2019);
	cout << dat1.getToday() << endl;
	cout << dat1.getTomorrow() << endl;
	cout << dat1.getYesterday() << endl;
	cout << dat1.getDifference(dat2) << endl;
	return 0;
}
