//============================================================================
// Name        : BlockMergeBase.cpp
// Author      : Profesorado de IP/FP
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "entorno.h"
#include "tadJuego.h"
#include "pr_tadTablero.h"
#include "pr_tadCelda.h"

using namespace std;

int main() {
	tadJuego j;
	iniciar(j);
	jugar(j);
	//pruebasTablero();
	//pruebasCelda();
	return 0;
}
