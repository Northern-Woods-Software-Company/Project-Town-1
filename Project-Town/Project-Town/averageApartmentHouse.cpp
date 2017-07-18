#include<iostream>
#include"averageApartmentHouse.h"
extern int quantityAverageApartmentHouse;

// 5 этажей, 3 квартиры на площадке - 15 квартир. 1 житель в квартире
void averageApartmentHouse::iAverageApartmentHouse(int populationAvarageApartmentHouse) {
	quantityAverageApartmentHouse = ceil(populationAvarageApartmentHouse / 15.0); // Округление в большую сторону
}


