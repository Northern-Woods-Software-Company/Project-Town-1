#include<iostream>
#include "averageFoodShop.h"

extern int quantityAverageFoodShop;

// Обслуживает 45 человек или 3 Средних Многоквартирных Дома
//Лучше считать от населения
void averageFoodShop::iAverageFoodShop(int populationAverageFoodShop) {
	quantityAverageFoodShop = ceil(populationAverageFoodShop / 45.0); // Округление в большую сторону
}

