#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int a;
	string b;
	cout << "Введите на сколько позиций сдвинется шифр" << endl;
	cin >> a;
	cout << "Введите слово(только английские, прописные буквы)" << endl;
	cin >> b;
	for (int i = 0; i < b.size(); i++) {
    if (b[i] + a > 122) {
      b[i] = b[i] - 26 + a;
    }
    else {
		b[i] = b[i] + a;
    }
	}
	cout << b;
	return 0;
}