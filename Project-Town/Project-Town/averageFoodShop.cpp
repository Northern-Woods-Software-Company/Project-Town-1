#include<iostream>
#include "averageFoodShop.h"

extern int quantityAverageFoodShop;

// ����������� 45 ������� ��� 3 ������� ��������������� ����
//����� ������� �� ���������
int averageFoodShop::iAverageFoodShop(int populationAverageFoodShop) {
	quantityAverageFoodShop = ceil(populationAverageFoodShop / 45.0); // ���������� � ������� �������
	return quantityAverageFoodShop;
}

