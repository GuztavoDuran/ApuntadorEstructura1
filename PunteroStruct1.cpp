//apuntadores a variabes de estructuras
#include <iostream>
using namespace std;
struct Dato{//estructura
  int dato1;
  char dato2 [10];
};

int main(int argc, char const *argv[]) {
  /* code */
  struct Dato var1;
  struct Dato *Ptr;
  Ptr=&var1;
  cout << "INICIO" << endl;
  cout << endl;
  cout << "Puntero direct: " << &Ptr << endl;//imprime el valor del Puntero
  cout << "Puntero valor:  " << Ptr << endl;//direccion del Puntero
  cout << endl;
  cout << "insertar valor1:  ";
  cin >> Ptr->dato1;// equivalente a cin >> (*Ptr).dato1;
  cout << endl;
  fflush(stdin);//limpiar buffer
  cout << "insertar valor2: " ;
  cin >> Ptr->dato2;
  cout << endl;
  cout << "valor 1 :  " << Ptr->dato1 << endl;
  cout << "valor 2 :  " << Ptr->dato2 << endl;

  return 0;
}
