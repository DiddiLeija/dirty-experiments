// (C) 2025 Diego Ramírez. All rights reserved.

class program {

    /*
     * ***  Demo de while()  ***
     *
     * while() es el equivalente en Java del "mientras" de
     * Pascal, donde el código dentro se repetirá mientras
     * la condición dada sea cierta. Se pueden usar operadores
     * para varias condiciones (&&, ||, !), o tener una sola
     * condición.
     *
     * Por favor, pongan atención al siguiente ejemplo...
     * 
     */

    program () {
        
        while (frontIsClear && notNextToABeeper) {
            // Este código se repite mientras
            // la condición sea cierta (True).
            move();
        }
        
        if (nextToABeeper) {
            pickbeeper();
        }
        
        turnoff();
    }
}
