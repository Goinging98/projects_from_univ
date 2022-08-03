#include <iostream>
using namespace std;

//primenumber.h
class PrimeNumber
{
private:
	int num;
	bool isPrime(int num);// Returns true if num is a prime number, false otherwise.
public:
	PrimeNumber();//매개변수가 없기 때문에 num=1;
	PrimeNumber(int val); //num을 불러오는 역할로 value를 num에 복사
	int get(); //num 불러오기
	const PrimeNumber operator ++(); // 
	const PrimeNumber operator --();
	const PrimeNumber operator ++(int);
	const PrimeNumber operator --(int);
};

/////primenumber.c
bool PrimeNumber::isPrime(int num) { //소수를 출력하기 위해서 2,3,5,7로 나뉘지 않는 수를 출력해야 한다. 
	int i;
	for (i = 2; i <8; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

PrimeNumber::PrimeNumber() {//p1을 출력하기 위해서 1을 입력해 놓는다. 
	num = 1;
}
PrimeNumber::PrimeNumber(int val) {//p2를 위해서 입력받는 수로 num을 설정한다. 
	num = val;
}
int PrimeNumber::get() {//num를 리턴할 수 있도록 한다. 
	return num;
}

const PrimeNumber PrimeNumber::operator ++() {//num에 1이 더해지는 결과를 다시 num에 입력할 수 있게 한다. 
	num += 1;
	return num;
}

const PrimeNumber PrimeNumber::operator --() {
	num -= 1; //num에 1이 빼지는 결과를 다시 num에 입력하도록 한다. 
	return num;
}

const PrimeNumber PrimeNumber::operator ++(int) {
	int i; //isPrime을 호출하여 식에 적용될 수 있도록 한다. 
	int j = num;
	for (i = 1;; i++) {
		if (isPrime(num + i))
		{
			num += i;
			break;
		}
	}
	return j;
}

const PrimeNumber PrimeNumber::operator --(int) {
	int i; //isPrime을 호출하여 식에 적용될 수 있도록 한다. 
	int j = num;
	for (i = 1;; i++) {
		if (isPrime(num - i))
		{
			num -= i;
			break;
		}
	}
	return j;

}


///////////////////////////////////////////////////////////////////////////
// MAIN FUNCTION.c
int main()
{//원하는 결과물이 나올 수 있도록 한다. 
	PrimeNumber p1, p2(13);
	cout << p1.get() << endl;
	cout << p2.get() << endl;
	PrimeNumber p3 = ++p1;
	cout << p3.get() << ", " << p1.get() << endl;
	PrimeNumber p4 = p2++;
	cout << p4.get() << ", " << p2.get() << endl;
	PrimeNumber p5 = --p1;
	cout << p5.get() << ", " << p1.get() << endl;
	PrimeNumber p6 = p2--;
	cout << p6.get() << ", " << p2.get() << endl;
	cout << "Exit…" << endl;
	return 0;
}
