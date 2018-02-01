#include <iostream> 
#include <conio.h> 
#include <Windows.h> 


using namespace std; 

int main(){ 

SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 

int num; 

float Z, B, A, Betta, y = 0.0; 

cout << "Введите колличество х: "; 
cin >> num; 
cout << "\n"; 
if (num > 0 & num != 0){ 
for (int i = 1; i <= num; i++){ 
cout << "Введите значения Z, B, A, Betta для X" << i << ":" << endl; 
cout << "Z = "; cin >> Z; cout << "\n"; 
cout << "B = "; cin >> B; cout << "\n"; 
cout << "A = "; cin >> A; cout << "\n"; 
cout << "Betta = "; cin >> Betta; cout << "\n"; 
y += pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2); 
} 
} 

cout << "y = " << y << endl; 

_getch(); 
return 0; 
}