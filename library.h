#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Product { // Создание нового класса Product
	string name, color; // Создание полей с различными типами данных, которые по умолчанию ставятся с модификатором Private
	int size1; 
public: // Модификатор открытого доступа, так как по умолчанию ставится модификатор закрытого доступа Private (чуть выше)
	Product(); // Создание конструктора "без параметров"
	Product(string _name, string _color, int _size); // Создание конструктора "с параметрами"
	Product(const Product &p); // Создание конструктора "копирования"
	void print(); // Создание метода, для вывода данных и некоторых строк
	void SetName(string name_); // Это и ниже - создание сетов и гетов, для ввода и вывода данных
	string GetName();
	void SetColor(string color_);
	string GetColor();
	bool SetSize(int size_);
	int GetSize();
};

#endif // LIBRARY_H_INCLUDED
