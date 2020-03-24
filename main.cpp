#include "library.h"

using namespace std;

int main() {
    string name_, color_;
    int size_;

	Product p;
	cout << "Dannie producta: " << endl;
	p.print();
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
	Product p2("Karandash","Prostoy",1000);
	cout << "\nDannie vtorogo producta: " << endl;
	p2.print();
	cout << "\nDannie tretiego (copy) producta: " << endl;
	Product p3 = p2;
	p3.print();
	return 0;
}
