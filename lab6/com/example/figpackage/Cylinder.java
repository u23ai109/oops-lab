package com.example.figpackage;

public class Cylinder extends Figure{
    double h;

    Cylinder(double r,double h){
        this.r=r;
        this.h=h;
    }
    public void calcArea(){
        a=2*((pi*r*r)+(pi*r*h));
    }

    public void calcVolume(){
        v=pi*r*r*h;
    }

    public void dispArea(){
        System.out.println("Area of cylinder is "+a);
    }

    public void dispVolume(){
        System.out.println("Volume of cylinder is "+v);
    }

    public static void main(String[] args){
        Cylinder cy=new Cylinder(7,7);
        cy.calcArea();
        cy.calcVolume();
        cy.dispArea();
        cy.dispVolume();
    }
}
