package com.example.figpackage;

public class Sphere extends Figure{

    Sphere(double r){
        this.r=r;
    }

    public void calcArea(){
        a=4*pi*r*r;
    }

    public void calcVolume(){
        v=4*pi*r*r*r/3;
    }

    public void dispArea(){
        System.out.println("Area of sphere is "+a);
    }

    public void dispVolume(){
        System.out.println("Volume of cylinder is "+v);
    }

    public static void main(String[] args){
        Sphere sp = new Sphere(5);
        sp.calcArea();
        sp.calcVolume();
        sp.dispArea();
        sp.dispVolume();
    }
}
