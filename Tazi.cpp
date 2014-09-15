#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
using namespace std;
int main(void)
{
	float v1, v2, p1, S, t;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите среднюю скорость такси (км/ч)" << endl;
	cin >> v1;
	cout << "Введите стоимость проезда за километр (р)" << endl;
	cin >> p1;
	cout << "Введите вашу среднюю скорость ходьбы (км/ч)" << endl;
	cin >> v2;
	cout << "Введите длину пути (км)" << endl;
	cin >> S;
	cout << "Введите время за которое вам надо туда добраться (ч)" << endl;
	cin >> t;

	if (t * v2 >= S)
		cout << "Вы успеете дойти пешком" << endl;
	else
	{
		if (S / v1 <= t)
		{
			float S2 = (v1*t*v2 - v1*S) / (v2 - v1);
			cout << "Необходимо будет пройти " <<(S-S2)<<" км пешком за "<<(S-S2)/v2<<" часов, а затем потратить " << p1*S2 << " рублей на такси" << endl;
		}
		else
		{
			cout << "Вы не успеете даже на машине" << endl;
		}
	}
	_getch();
	return 0;
}