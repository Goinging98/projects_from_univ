#include <iostream>
using namespace std;

int CalculateHeight(int gender, int f_feet, int f_inch, int m_feet, int m_inch);
int main(void)
{
	int gender;
	int f_feet, f_inch;//f_feet는 아빠의 피트, f_inch는 아빠의 인치
	int m_feet, m_inch;//m_feet는 엄마의 피트, m_inch는 엄마의 인치
	int child, c_feet, c_inch;//child는 아이, c_feet는 아이의 피트, c_inch는 아이의 인치

	cout << "아이의 성별은 무엇입니까? 1.남자 2.여자" << endl;//아이의성별 선택
	cin >> gender;
	cout << "아빠의 키는 몇피트 몇인치입니까?";
	cin >> f_feet;
	cin >> f_inch; //아빠의 키 피트와 인치 입력
	cout << f_feet << "피트" << f_inch << "인치" << endl;
	cout << "엄마의 키는 몇입니까?";
	cin >> m_feet;
	cin >> m_inch;//엄마의 키 피트와 인치 입력
	cout << m_feet << "피트" << m_inch << "인치" << endl;

	child= CalculateHeight(gender, f_feet, f_inch, m_feet, m_inch); 
	//피트를 인치로 변환한 합친 수를 child로 정하고 함수 CalculateHeight을 사용
	c_feet = child / 12; //인치로 된 키를 12로 나눠 몫인 피트를 가진다.
	c_inch = child % 12; //인치로 된 키를 12로 나눈 나머지를 인치로 가진다.
	cout << "아이의 키는 " << c_feet << "피트" << c_inch << "인치" << endl; //출력
}

int CalculateHeight(int gender, int f_feet, int f_inch, int m_feet, int m_inch)
{
	int child;
	if (gender == 1) //남자아이일 경우
		child = ((m_feet * 12 + m_inch) * 13 / 12 + (f_feet * 12 + f_inch)) / 2;
	else //여자아이일 경우
		child = ((f_feet * 12 + f_inch) * 12 / 13 + (m_feet * 12 + m_inch)) / 2;
	return child;
}
