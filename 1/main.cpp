#include <iostream>
#include <string>
#include "struct.h"  
#include "class.h"

void Sort(TVector<TLine<unsigned int, std::string> > & vct, unsigned int max);

int main() {
	// Ускорение
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	unsigned int max = 0, key;

	std::string * val = new std::string;
	
	TVector<TLine<unsigned int, std::string> > vct;
	while (std::cin >> key >> *val) {
		// Нахождения максимума
		if (key > max) {
			max = key;
		}
		
		// Заполнение линии
		TLine<unsigned int, std::string> *newLine = new TLine<unsigned int, std::string>;
		newLine->key = key;
		newLine->value = val;
		val = new std::string;
		
		vct.PushBack(*newLine);
	}
	delete val;

	Sort(vct, max);

	vct.Clean();
	return 0;
}
