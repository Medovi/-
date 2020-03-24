#include "library.h"

using namespace std;

int main() {
    string name_, color_;
    int size_;

	Product p; // Добавление нового объекта p для конструктора "без параметров", в данном случае Product выступает в качестве пользовательского типа данных
	cout << "Dannie producta: " << endl;
	p.print(); // Вызов метода print с объектом p
	cout << "\nVvedite novie dannie producta:"<<endl;
	cout << "Nazvanie producta: ";
	cin >> name_;
	p.SetName(name_);
	cout << "Cvet producta: ";
	cin >> color_;
	p.SetColor(color_);
	cout << "Kolichestvo producta: ";
	cin >> size_;
	p.SetSize(size_);
	cout << "\nNovie dannie producta: " << endl;
	cout << "Nazvanie producta: " << p.GetName() << "\nCvet producta: " << p.GetColor() << "\nKolichestvo producta: " << p.GetSize() << endl;
	Product p2("Karandash","Prostoy",1000); // Добавление нового объекта p2 для конструктора "с параметрами"
	cout << "\nDannie vtorogo producta: " << endl;
	p2.print(); // Вызов метода print с объектом p2
	cout << "\nDannie tretiego (copy) producta: " << endl;
	Product p3 = p2; // Создание нового объекта p3 для конструктора "копирования" 
	p3.print(); // Вызов метода print с объектом p3
	return 0;
}
