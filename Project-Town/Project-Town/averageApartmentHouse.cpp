#include<iostream>
#include"averageApartmentHouse.h"
extern int quantityAverageApartmentHouse;

// 5 ������, 3 �������� �� �������� - 15 �������. 1 ������ � ��������
void averageApartmentHouse::iAverageApartmentHouse(int populationAvarageApartmentHouse) {
	quantityAverageApartmentHouse = ceil(populationAvarageApartmentHouse / 15.0); // ���������� � ������� �������
}


