#include<iostream>
#include"averageApartmentHouse.h"
extern int quantityAverageApartmentHouse;

// 5 ������, 3 �������� �� �������� - 15 �������. 1 ������ � ��������
int averageApartmentHouse::iAverageApartmentHouse(int populationAvarageApartmentHouse) {
	quantityAverageApartmentHouse = ceil(populationAvarageApartmentHouse / 15.0); // ���������� � ������� �������
	return quantityAverageApartmentHouse;
}


