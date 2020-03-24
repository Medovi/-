#include "library.h"

void Product::print() {
	cout <<"Nazvaniye producta: "<< name <<"\nCvet producta: "<< color <<"\nKolichestvo producta: "<< size1 << endl;
}

void Product::SetName(string name_) {
	name = name_;
}

void Product::SetColor(string color_) {
	color = color_;
}

bool Product::SetSize(int size_){
    if (size_ < 0) // Условие для предотвращения ввода отрицательного числа
    return false;
    else
    size1 = size_;
    return true;
}

Product::Product() { // Конструктор "без параметров"
	name = "Skrepka";
	color = "Chrom";
	size1 = 200;
}

Product::Product(string _name, string _color, int _size) { // Конструктор "с параметрами"
	name = _name;
	color = _color;
	if (!SetSize(_size)) // Условие для предотвращения ввода отрицательного числа
    size1 = 0; // Если будет введено отрицательно число, то на выводе будет показан ноль
}

Product::Product(const Product &p) { // Конструктор "копирования"
	name = p.name;
	color = p.color;
	size1 = p.size1;
}

string Product::GetName() {
    return name;
}
string Product::GetColor() {
    return color;
}
int Product::GetSize() {
    return size1;
}
