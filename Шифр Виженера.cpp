#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string a, b;
	cout << "Введите кодовое слово(только прописные, английские буквы)" << endl;
	cin >> a;
  cout << endl;
	cout << "Введите слово(только прописные, английские буквы" << endl;
	cin >> b;
  cout << endl;
	for (int i = 0; i < b.size(); i++) {
  int k = a[i%a.size()]-96;
    if (b[i] + k > 122) {
      b[i] = b[i] + k -26;
    }
    else {
      b[i] = b[i] + k;
    }
	}
	cout << b;
	return 0;
}