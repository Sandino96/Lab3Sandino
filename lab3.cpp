#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void agregarFicha(int columna, int turno, int temp[6][7]);
void imprimirTablero(int[6][7]);

int main(int argc, char*argv[]){
	const int filas = 6;
	const int columnas = 7;
	int tablero[6][7] = {0};
	int columna;
	imprimirTablero(tablero);	
	cout << "Agregar ficha en columna: ";
	cin >> columna;
	imprimirTablero(tablero);
	int turno = 1;
	agregarFicha(columna,turno,tablero);
	return 0;
}

void agregarFicha(int columna, int turno, int temp[6][7]){
	for(int i = 0; i < 6; i++){
		if(i == 0){
			if(temp[0][columna] == 0 && temp[0+i][columna] != 0){
				temp[i][columna] = turno;
			}
		} else if(i == 5){
			if(temp[5][columna] == 0){
				temp[i][columna] = turno;
			} else {
				
			}
		}
	}
}

void imprimirTablero(int temp[6][7]){
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 7; j++){
			cout << "[" << temp[i][j] << "]\t";
		}
		cout << endl;
	}
}
