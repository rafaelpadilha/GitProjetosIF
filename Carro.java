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
public class Carro {

    String placa;
    Integer ano;
    Double valor;

    public Carro() {
    }

    public Carro(String p) {
        this.placa = p;
    }

    public Carro(String p, Double v) {
        this.placa = p;
        this.valor = v;
    }

    public double calcularIPVA(Double v) {
        return v * 0.035;
    }

}
