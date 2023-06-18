#include <iostream>
#include "BOR_golova.h"
#include<vector>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	Trie DREVO;
		int i; string word;
	do {
		
		cout << "Введите слово";
		cin >> word;
		getline(cin, word, '\n');
		DREVO.insert(word);

		cout << "Повторить ввод слова следующего (1-yes/0-no)";
		cin >> i;
	} while (i == 1);
	

	DREVO.printAll();
	return 0;
}