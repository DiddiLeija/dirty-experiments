// (C) 2025 Diego Ramirez. All rights reserved.

// VERSIÓN 3 - versión final

class program {
    void turn (n) {
        iterate (n) {
            turnleft();
        }
    }
    void todos_los_zumbadores () {
        while (nextToABeeper) {
            pickbeeper();
        }
    }

    program () {
        while (notNextToABeeper) {
            if (frontIsClear) {
                move();
            }
            else {
                turn(3);
            }
        }
        todos_los_zumbadores();
        turnoff();
    }
}
