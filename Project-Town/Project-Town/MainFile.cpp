#include<iostream>
#include <time.h>
#include"averageApartmentHouse.h"
#include"averageFoodShop.h"
#include"changeLevelHappiness.h"

extern int quantityAverageApartmentHouse;
extern int quantityAverageFoodShop;
extern int levelHappiness;



const int winPopulationTown = 100;

using namespace std;

//ѕока пишетс€ как средний класс населени€
int main() {
	cout << "Welome in Project Town" << endl;
	cout << "Print population: ";
	int populationTown;
	cin >> populationTown;
	averageApartmentHouse mainAverageApartmentHouse; //необходимо фикстировать максимальое кол-во домов и магазинов (пока нигде не используетс€) 
	mainAverageApartmentHouse.iAverageApartmentHouse(populationTown);
	averageFoodShop mainAverageFoodShop;
	mainAverageFoodShop.iAverageFoodShop(populationTown);
	cout << "Start quantity Average Apartment House: " << quantityAverageApartmentHouse << endl;
	cout << "Start qantity Avarage Food Shop: " << quantityAverageFoodShop << endl;
	cout << "Start simulation Town?(any key)" << endl; //ƒобавить меню, возможность отазатьс€ и выйти или изменить население
	system("pause");
	/*Ѕазовое кол-во добавлени€ жителей + уровень счасть€
	 —тартовый уровень счасть€ + рандомное (пока) изменение в этом мес€це(+ или -)
	*/
	
	int constChangePopulationTown = 0;
	int changePopulationTown; // изменение колличества прибывших или убывших жителей
	
	int monthTown = 0;
	int yearTown = 0;
	int maxQuantityAverageApartmentHouse = quantityAverageApartmentHouse;
	int maxQuantityAverageFoodShop = quantityAverageFoodShop;
	
	changeLevelHappiness mainChangeLevelHappiness;

	srand(time(NULL));

	while (populationTown < winPopulationTown  && populationTown > 0) { // единица отсчета 1 мес€ц
		
		
		mainChangeLevelHappiness.iChangeLevelHappiness(levelHappiness);
		cout << "Level Happiness this month: " << levelHappiness << endl; //  онтроль 
		
		changePopulationTown = constChangePopulationTown + levelHappiness;
		cout << "Change Population Town this month: " << changePopulationTown << endl; //  онтроль 
		
		//if (populationTown - abs(changePopulationTown) > 0) {} // ѕроблема, что при населении меньше изменени€ - заканчиваетс€
			
			populationTown = populationTown + changePopulationTown;

		/*
		else {
			populationTown = 0;
		}*/
		cout << "Population Town this month: " << populationTown << endl; //  онтроль 
		
		mainAverageApartmentHouse.iAverageApartmentHouse(populationTown);
		cout << "Average Apartment House this month: " << quantityAverageApartmentHouse << endl; //  онтроль 
		
		mainAverageFoodShop.iAverageFoodShop(populationTown);
		cout << "Average Food Shop this month: " << quantityAverageFoodShop << endl; //  онтроль 
		
		if (maxQuantityAverageApartmentHouse < quantityAverageApartmentHouse) {
			maxQuantityAverageApartmentHouse = quantityAverageApartmentHouse;
		}

		if (maxQuantityAverageFoodShop < quantityAverageFoodShop) {
			maxQuantityAverageFoodShop = quantityAverageFoodShop;
		}
		
			monthTown++;
		if (monthTown > 0 && monthTown % 12 == 0) {
			cout << "Happy New Year!)" << endl;
			yearTown++;
		}
	}
	cout << "Game over" << endl;
	if (populationTown >= winPopulationTown) {
		cout << "Town win" << endl;
	}
	else {
		populationTown = 0;
		cout << "Town died" << endl;
	}
	system("pause");
	cout << "Population Town: " << populationTown << endl;
	cout << "Average Apartment House : " << quantityAverageApartmentHouse << endl;
	cout << "Maximum Average Apartment House: " << maxQuantityAverageApartmentHouse << endl;
	cout << "Average Food Shop: " << quantityAverageFoodShop << endl;
	cout << "Maximum Average Food Shop: " << maxQuantityAverageFoodShop << endl;
	cout << yearTown << " Years " << monthTown - 12 * yearTown << " Month in Town" << endl;

	cout << endl;
	cout << "Now it's all(#_#)" << endl;
	system("pause");

	return 0;
}