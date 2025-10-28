// (C) 2025 Diego Ramírez. All rights reserved.

class program {

    /* ***  Zumbador o fallback  *** */

    program () {
    
        // localiza el zumbador si es posible salir del recuadro
        if (rightIsClear) {
            // caso 1: la primer salida a la derecha
            turnleft();
            turnleft();
            turnleft();
            move();
        }
        else {
            move();  // avanzamos para preguntar por las salidas en (0, 1)
            if (rightIsClear) {
                // caso 2: la segunda salida a la derecha
                turnleft();
                turnleft();
                turnleft();
                move();
                move();
            }
            if (frontIsClear && leftIsBlocked) {
                // caso 3: la salida hacia el frente
                move();
                move();
            }
        }
        
        // vamos a evaluar -- encontramos un zumbador o caemos en fallback
        if (nextToABeeper) {
            // caso 1-3: encontramos zumbador
            pickbeeper();
        }
        else {
            // caso 4: no hay salidas de la caja, no hay zumbadores
            iterate (4) {
                turnleft();  // iterate() para ahorrar código :v
            }
        }
        
        turnoff();  // fin del programa....
    }
}
