#include<iostream>
#include"shape.h"
#include"Date.h"
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ru");
	//int a = 5;
	//int b = 10;

	//circle c1(10), c2 = (5);
	//cout << c1.area()<<"\t"<<c2.area()<<endl;
	//cout << c1 + c2 << endl;//c1+operator+(c2)
	//cout << c1 - c2<<endl;
	//cout << c1 / c2 << endl;
	//cout << c1 * c2 << endl;
	////c1 + 7.0; //c1+7.0  <- ��� ������ � ���� -> c2=c1.operator+(7.0);
	////cout << c1.getRadius() <<"\t"<<c2.getRadius()<< endl; //cout << (c1 + 7.0).getRadius() << endl;
	//cout << (c1 + 7.0).getRadius() << endl;
	//
	//cout << (c1 == c2) << endl;// ��������� ��� ������

	//cout << (c1 == 10) << endl;; //��������� ����� � ��������

	//cout << (c1 > c2) << endl;

	//cout << (c1 += 7.0).getRadius() << endl;


	//	�������� �� ��������� ���� ���(�������� = =)
	int d, m, y, d2, m2, y2;
	cout << "������� ����: ";
	cin >> d;
	cout << "������� �����: ";
	cin >> m;
	cout << "������� ���: ";
	cin >> y;
	cout << "Next date\n";
	cout << "������� ����: ";
	cin >> d2;
	cout << "������� �����: ";
	cin >> m2;
	cout << "������� ���: ";
	cin >> y2;
	//31.12.2018

	if ((d > 0 && d <= 31) && (m > 0 && m <= 12) && (y > 0 && y < 9999))
	{
		int maxd;
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			//����������
			switch (m)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			{
				maxd = 31;
				break;
			}
			case 2:
			{
				maxd = 29;
				break;
			}
			case 4:case 6:case 9:case 11:
			{
				maxd = 30;
				break;
			}

			}
		}
		else
		{
			switch (m)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			{
				maxd = 31;
				break;
			}
			case 2:
			{
				maxd = 28;
				break;
			}
			case 4:case 6:case 9:case 11:
			{
				maxd = 30;
				break;
			}
			}
		}
	}
	else
	{
		d = 0;
		m = 0;
		y = 0;
	}

	//1=31   2=28/29   3=31
	
	
	date Date1(d, m, y);
	date Date2(d2, m2, y2);



	//	�������� �� ��������� ���� ���(�������� = =)
	cout << (Date1 == Date2) << endl;
	//��������� ���� �� ��������� ����� ����(�������� +=, -=)
	cout << (Date1 += 20).getDay()<<"."<<Date1.getMonth()<<"."<<Date1.getYear()<< endl;
	system("pause");
	return 0;
}