// (C) 2025 Diego Ramirez. All rights reserved.

// VERSIÓN 1 - ¿le falta algo?

class program {
    void turn (n) {
        iterate (n) {
            turnleft();
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
        pickbeeper();
        turnoff();
    }
}
