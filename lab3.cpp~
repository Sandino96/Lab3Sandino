#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void agregarFicha(int columna, int& turno, int temp[6][7]);
void imprimirTablero(int[6][7]);
bool gameOver(bool);

int main(int argc, char*argv[]){
	const int filas = 6;
	const int columnas = 7;
	int tablero[6][7] = {0};
	int columna;
	bool termina = true;
	imprimirTablero(tablero);
	int chance = 1;
	while(gameOver(termina)){	
		if(chance == 1){		
			cout << "Agregar ficha en columna: ";
			cin >> columna;
			agregarFicha(columna,chance,tablero);
			imprimirTablero(tablero);
			chance = 2;
		} else {
			cout << "Agregar ficha en columna: ";
			cin >> columna;
			agregarFicha(columna,chance,tablero);
			imprimirTablero(tablero);
			chance = 1;
		}
	}
	return 0;
}

void agregarFicha(int columna, int& turno, int temp[6][7]){
	for(int i = 5; i > 0; i--){	
		if (columna >= 0 && columna <= 6){		
			if (temp[i][columna] == 0){
				temp[i][columna] = turno;
				break;
			} else if (temp[i][columna] != 0 && temp[i-1][columna] == 0){
				temp[i-1][columna] = turno;
				break;
			}
			if(temp[0][columna] != 0){
				cout << "No se puede agregar mas fichas en esta columna" << endl;
				break;
			}
		} else {
			if (turno == 1)
				turno = 2;
			else
				turno = 1;
			cout << "Pierde turno, columna inexistente" << endl;
			break;
		}
	}
	int cont = 0;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 7; j++){
			if (temp[i][j] == turno){
				cont++;
				if(temp[i+1][j] == turno){
					cont++;
					if(temp[i+2][j] == turno){
						cont++;
						if(temp[i+3][j] == turno){
							cont++;
						}
					}
				}
			}
			if(cont == 4){
				bool juego = false;
				cout << "Gano"<< endl;
				gameOver(juego);
				break;
			} else {
				bool juego = true;
				gameOver(juego);
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

bool gameOver(bool juego){
	return juego;
}
