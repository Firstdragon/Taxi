#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
using namespace std;
int main(void)
{
	float v1, v2, p1, S, t;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ������� �������� ����� (��/�)" << endl;
	cin >> v1;
	cout << "������� ��������� ������� �� �������� (�)" << endl;
	cin >> p1;
	cout << "������� ���� ������� �������� ������ (��/�)" << endl;
	cin >> v2;
	cout << "������� ����� ���� (��)" << endl;
	cin >> S;
	cout << "������� ����� �� ������� ��� ���� ���� ��������� (�)" << endl;
	cin >> t;

	if (t * v2 >= S)
		cout << "�� ������� ����� ������" << endl;
	else
	{
		if (S / v1 <= t)
		{
			float S2 = (v1*t*v2 - v1*S) / (v2 - v1);
			cout << "���������� ����� ������ " <<(S-S2)<<" �� ������ �� "<<(S-S2)/v2<<" �����, � ����� ��������� " << p1*S2 << " ������ �� �����" << endl;
		}
		else
		{
			cout << "�� �� ������� ���� �� ������" << endl;
		}
	}
	_getch();
	return 0;
}