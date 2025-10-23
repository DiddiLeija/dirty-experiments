// (C) 2025 Diego Ramírez. All rights reserved.

class program {

    /*
     * Chicos, por favor pongan atención en clase.
     * Estaremos usando estos conceptos en Arduino,
     * es muy importante que los dominen desde ahora.
     *
     *                               Hoo.
    */
    
    program () {
        if (facingNorth && frontIsClear) {
            // si Karel al norte Y el frente libre
            move();
        }
        if (!(frontIsBlocked && nextToABeeper)) {
            // si NO (tengo el frente bloqueado Y junto a un zumbador)
            turnleft();
            turnleft();
            turnleft();
        }
        if (nextToABeeper) {
            // si junto a zumbador
            pickbeeper();
        }
        if (frontIsClear && anyBeepersInBeeperBag) {
            // si frente libre Y zumbador en la mochila
            move();
        }
        if (frontIsClear || rightIsBlocked) {
            // si frente libre O derecha bloqueada
            putbeeper();
        }
        else {
            // si el if anterior no se cumple
            // (si NO frente libre y NO derecha bloqueada)
            turnleft();
        }
        turnoff();  // fin.
    }
}
