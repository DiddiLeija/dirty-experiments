// (C) 2025 Diego Ramírez. All rights reserved.

class program {

    /* ***  Zumbador o fallback  *** */

    program () {
    
        // localiza el zumbador si es posible salir del recuadro
        if (rightIsClear) {
            turnleft();
            turnleft();
            turnleft();
            move();
        }
        else {
            move();
            if (rightIsClear) {
                turnleft();
                turnleft();
                turnleft();
                move();
                move();
            }
            if (frontIsClear && leftIsBlocked) {
                move();
                move();
            }
        }
        
        // encontramos un zumbador o caemos en fallback
        if (nextToABeeper) {
            pickbeeper();
        }
        else {
            iterate (4) {
                turnleft();
            }
        }
        
        turnoff();
    }
}
