#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 //Task_1
	setlocale(LC_ALL,"RUS");
	double S{};
	double V{};
	double T = S / (V * 1000);
	int hours = T;
	int minutes = (T - hours) * 60;
	int seconds = ((T - hours) * 60 - minutes) * 60;
	cout << "Введите расстояние в километрах: ";
	cin >> S;
	cout << "Введите скорость в метрах в секунду: ";
	cin >> V;
	cout << "Время в пути: " << hours << " часов " << minutes << " минут " << seconds << " секунд" << "\n";
	cout << "\n";
//Task_2
	double a, b;
	cout << "Введите два дробных числа: ";
	cin >> a >> b;

	int a_main_numbers = floor(a);
	int b_main_numbers = floor(b);
	int sum_main = a_main_numbers + b_main_numbers;

	double a_fractional = fmod(a, 1.0);
	double b_fractional = fmod(b, 1.0);
	double sum_fractional = a_fractional + b_fractional;

	cout << "Сумма целых чисел: " << sum_main << "\n";
	cout << "Сумма дробных чисел: " << sum_fractional << "\n";
	cout << "\n";
//Task_5
	int seconds_1{};
	cout << "Введите время в секундах: ";
	cin >> seconds_1;

	int days = seconds_1 / 86400;
	seconds_1 %= 86400;
	int hours_1 = seconds_1 / 3600;
	seconds_1 %= 3600;
	int minutes_1 = seconds_1 / 60;
	seconds_1 %= 60;

	cout << "Это будет " << days << " дней, " << hours_1 << " часов, " << minutes_1 << " минут, " << seconds_1 << " секунд" << "\n";
	cout << "\n";
//Task_6
	double distance{};
	int time{};

	cout << "Введите расстояние до аэропорта (в километрах): ";
	cin >> distance;
	cout << "Введите время, за которое нужно доехать (в минутах): ";
	cin >> time;

	double hours_2 = time / 60.0;
	double  speed = distance / hours_2;

	cout << "Нужная скорость до прибытия: " << speed << " км в час." << "\n";
	cout << "\n";
//Task_7
	int start_hour{}, start_minute{}, start_second{};
	int end_hour{}, end_minute{}, end_second{};
	const double minute_cost = 0.15;

	cout << "Введите время начала разговора (часы,минуты и секунды): ";
	cin >> start_hour >> start_minute >> start_second;
	cout << "Введите время конца разговора (часы минуты секунды): ";
	cin >> end_hour >> end_minute >> end_second;

	int duration_seconds = (end_hour * 3600 + end_minute * 60 + end_second) - (start_hour * 3600 + start_minute * 60 + start_second);
	double cost_phoning = duration_seconds / 60.0 * minute_cost;

	cout << "Длительность разговора: " << duration_seconds << " секунд" << "\n";
	cout << "Стоимость разговора: " << cost_phoning << " гривен" << endl;
	cout << "\n";
//Task_9
	double price{};
	int quantity{}, discount{};

	cout << "Введите стоимость одного ноутбука: ";
	cin >> price;

	cout << "Введите количество ноутбуков: ";
	cin >> quantity;

	cout << "Процентная скидка: ";
	cin >> discount;

	double total_price = price * quantity * (1 - discount / 100.0);

	cout << "Вся стоимость вашего заказа составляет: " << total_price << "\n";
	cout << "\n";
}
