#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void agregarFicha(int columna, int turno, int temp[6][7]);
void imprimirTablero(int[6][7]);
int 
bool gameOver();
bool turno(int);

int main(int argc, char*argv[]){
	const int filas = 6;
	const int columnas = 7;
	int tablero[6][7] = {0};
	int columna;
	imprimirTablero(tablero);
	int turno = 1;
	do{	
		cout << "Agregar ficha en columna: ";
		cin >> columna;
		agregarFicha(columna,turno,tablero);
		imprimirTablero(tablero);
	} while(gameOver() && !turno());
	return 0;
}

void agregarFicha(int columna, int turno, int temp[6][7]){
	for(int i = 5; i > 0; i--){
		if(temp[i][columna] == 0){
			temp[i][columna] = turno;
			break;
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

bool gameOver(){
 return true;
}
