#include <iostream>
#include <map>
#include <numeric>

//n = magazine;
//m = orase;
//p = produse;
//pret_unitar = pret;
//nr_buc = numar buc;

using namespace std;

struct magazin {
	string denumire_magazin;
	map<string, int> produse;
	struct oras {
		string denumire_oras;
	}oras;
}f;

void initialize() {
	magazin magazine[3];
	int cate_magazine, stoc_produs, pret_produs, pret_total;
	string denumire_produs;
	cout << "numarul de magazine: ";
	cin >> cate_magazine;
	if (cate_magazine > 3) exit;
	cout << "stoc produse: ";
	cin >> stoc_produs;
	if (stoc_produs > 5) exit;
	for (int i = 0; i < cate_magazine; i++) {
		cout << "nume magazin: ";
		cin >> magazine->denumire_magazin;
		cout << "oras magazin: ";
		cin >> magazine->oras.denumire_oras;
		for (int k = 0; k < stoc_produs; k++) {
			cout << "nume si pret produs[" << k << "]: ";
			cin >> denumire_produs >> pret_produs;
			magazine->produse.insert({ denumire_produs, pret_produs });
		}
	}
	for (int i = 0; i < cate_magazine; i++) {
		cout << magazine->denumire_magazin << endl;
		cout << magazine->oras.denumire_oras << endl;
		cout << magazine->produse.size() << endl;
		for (map<string, int>::iterator iter = magazine->produse.begin();
			iter != magazine->produse.end(); ++iter) {
			cout << iter->first << " : " << iter->second << endl;
		}
		pret_total = accumulate(magazine->produse.begin(), magazine->produse.end(), 0,
			[](auto inainte, auto& dupa) {
				return inainte + dupa.second;
			});
		cout << pret_total << endl;
	}
}

int main() {
	initialize();
}
