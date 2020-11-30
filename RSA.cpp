#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int p,q; //Ввод простых чисел
  cout << "Введите 2 простых числа" << endl;
  cin >> p >> q;
  int n = p*q; //модуль произведения двух простых
  int f = (p-1)*(q-1); //функция Эйлера
  cout << "f=" << f << endl;
  cout << "Выберите такое число e, что оно:" << endl << "1) простое" << endl << "2) Меньше f" << endl << "3)взаимно простое с f" << endl;
  int e;
  cin >> e;
  cout << "{" << e << ";" << n << "}" << " - открытый ключ" << endl;
  int d;
  for (int i = 1; i <= 1000; i++) {
   
    if ((i*e)%f==1) {
     d=i;
     break;
    }
  }
  cout << "{" << d << ";" << n << "}" << " - секретный ключ" << endl;
  int P;
  cout << "Введите сообщение, не больше чем "<< n << endl;
  cin >> P;
  int x = pow(P,e);
  int E = x % n; //шифрованное сообщение
  cout << "Зашифрованное: " << E << endl;
  cout << "Расшифровка:" << endl;
  x = pow(E,d);
  int y = x % n;
  cout << y;
}