/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadepc2;

/**
 *
 * @author RAFAEL
 */
public class Tributo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Carro dodge = new Carro("PPK-6969", 125000.0);
        Carro audi = new Carro("WTF-7777", 100000.00);
        Carro bmw = new Carro("BMW-9999", 175000.0);
        Carro mercedes = new Carro("CUZ-4100", 250000.00);

        System.out.println("Placa :" + audi.placa + "\nValor:" + audi.valor + "\nIPVA: " + audi.calcularIPVA(audi.valor));
        System.out.println("\nPlaca :" + mercedes.placa + "\nValor:" + mercedes.valor + "\nIPVA: " + mercedes.calcularIPVA(mercedes.valor));
        System.out.println("\nPlaca :" + dodge.placa + "\nValor:" + dodge.valor + "\nIPVA: " + dodge.calcularIPVA(dodge.valor));
        System.out.println("\nPlaca :" + bmw.placa + "\nValor:" + bmw.valor + "\nIPVA: " + bmw.calcularIPVA(bmw.valor));
    }

}
