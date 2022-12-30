/*
 * tadJuego.h
 *
 *  Created on: Dec 28, 2022
 *      Author: ruben
 */

#ifndef TADJUEGO_H_
#define TADJUEGO_H_

#include <iostream>
#include "tadTablero.h"
using namespace std;

struct tadJuego {
	Tablero tablero;
	int puntuacion;
};


/*
 * PRE: {}
 * POST: {}
 * DESCRIPCIÓN: Inicia la estructura de datos del juego, según la configuración del fichero match.cnf
 * COMPL:
 */
void iniciar();

/*
 * PRE: {}
 * POST: {}
 * DESCRIPCIÓN: Realiza la gestión general del juego (gestionar las teclas que se pulsen, actualizar el tablero y la pantalla, dar el juego por finalizado, etc.)
 * COMPL:
 */
void jugar();

/*
 * PRE: {}
 * POST: {}
 * DESCRIPCIÓN: Termina el juego, mostrando un mensaje de despedida y cerrando el entorno gráfico.
 * COMPL:
 */
void terminar();

#endif /* TADJUEGO_H_ */
