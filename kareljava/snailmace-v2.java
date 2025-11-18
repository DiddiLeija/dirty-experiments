// (C) 2025 Diego Ramirez. All rights reserved.

// VERSIÓN 2 - ¿le sobra algo?

class program {
    void turn (n) {
        iterate (n) {
            turnleft();
        }
        if (nextToABeeper) {
            pickbeeper();
        }
    }
    void todos_los_zumbadores () {
        while (nextToABeeper) {
            if (frontIsBlocked) {
                turnleft();
            }
            else {
                pickbeeper();
                turnleft();
            }
        }
    }

    program () {
        while (notNextToABeeper) {
            if (frontIsClear) {
                move();
            }
            if (frontIsBlocked && notNextToABeeper) {
                turn(7);
            }
            if (frontIsClear) {
                move();
            }
        }
        iterate (1) {
            todos_los_zumbadores();
        }
        turnoff();
    }
}
