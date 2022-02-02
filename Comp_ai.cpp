#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); //русский язык
	srand(time(NULL));		  // время
	int how_many_players;	  // кол-во игроков
	int how_many_chance;	  // кол-во бросков
	int sum = 0;			  // сумма бросков
	int throws = 0;			  // перменная бросков

	cout << "Введите количество игроков: ";
	cin >> how_many_players; // спрашиваем кол-во игроков участвующих в игре
	cout << "Сколько бросков у каждого? ";
	cin >> how_many_chance; // спрашиваем кол-во бросков
	cout << endl;			// конец текста
	const int result = how_many_chance * how_many_players;

	int arr_1[100];
	arr_1[0] = 0;
	for (int i = 1; i <= how_many_players; i++)
	{ // цыкл по перебору игроков
		for (int j = 0; j < how_many_chance; j++)
		{							 // перебор шансов
			throws = rand() % 6 + 1; // делаем рандомО4ка
			sum = sum + throws;		 // высчитываем сумму каждого игрока
		}
		arr_1[i] = sum;
	}
	/*int max;
        for (int o = 0; o < 10; ++o) {
            if (arr_1[o] > max) {
                max = arr_1[o];
        }
        cout << "Победил игрок набравший:" << max << endl;
        */
	cout << "Сумма игрока: " << i << " || "
		 << " ровна: " << sum; // выводим резалты
	cout << endl;			   // конец текста
	sum = 0;				   // возваращем сумму к 0 для некст итераций
}

return 0;
}