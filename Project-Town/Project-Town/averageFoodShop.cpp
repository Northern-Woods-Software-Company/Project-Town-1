#include<iostream>
#include "averageFoodShop.h"

extern int quantityAverageFoodShop;

// ����������� 45 ������� ��� 3 ������� ��������������� ����
//����� ������� �� ���������
void averageFoodShop::iAverageFoodShop(int populationAverageFoodShop) {
	quantityAverageFoodShop = ceil(populationAverageFoodShop / 45.0); // ���������� � ������� �������
}

