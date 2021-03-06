//
// Created by gerom on 04/05/19.
//

#ifndef GLADIADOR_TORRES_H
#define GLADIADOR_TORRES_H
#include <iostream>

using namespace std;


class Torres {


    string nombre;
    int generaciones;
    int danoInferior;
    int danoSuperior;
    int potencia;
    int tipobala;
    int fuerzalanzador;
    int velocidadlanzador;
    int altotorre;
    int dano = (generaciones+danoInferior+danoSuperior+potencia+tipobala-altotorre)/4;
    int alcance = (fuerzalanzador+velocidadlanzador+altotorre-tipobala)/2;


public:
    const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        Torres::nombre = nombre;
    }

    int getGeneraciones() const {
        return generaciones;
    }

    void setGeneraciones(int generaciones) {
        Torres::generaciones = generaciones;
    }

    int getDanoInferior() const {
        return danoInferior;
    }

    void setDanoInferior(int danoInferior) {
        Torres::danoInferior = danoInferior;
    }

    int getDanoSuperior() const {
        return danoSuperior;
    }

    void setDanoSuperior(int danoSuperior) {
        Torres::danoSuperior = danoSuperior;
    }

    int getPotencia() const {
        return potencia;
    }

    void setPotencia(int potencia) {
        Torres::potencia = potencia;
    }

    int getTipobala() const {
        return tipobala;
    }

    void setTipobala(int tipobala) {
        Torres::tipobala = tipobala;
    }

    int getFuerzalanzador() const {
        return fuerzalanzador;
    }

    void setFuerzalanzador(int fuerzalanzador) {
        Torres::fuerzalanzador = fuerzalanzador;
    }

    int getVelocidadlanzador() const {
        return velocidadlanzador;
    }

    void setVelocidadlanzador(int velocidadlanzador) {
        Torres::velocidadlanzador = velocidadlanzador;
    }

    int getAltotorre() const {
        return altotorre;
    }

    void setAltotorre(int altotorre) {
        Torres::altotorre = altotorre;
    }

    int getDano() const {
        return dano;
    }

    void setDano(int dano) {
        Torres::dano = dano;
    }

    int getAlcance() const {
        return alcance;
    }

    void setAlcance(int alcance) {
        Torres::alcance = alcance;
    }

};


#endif //GLADIADOR_TORRES_H
