package com.example.figpackage;

public class Cone extends Figure{
    double h,s;

    Cone(double r,double h){
        this.h=h;
        this.r=r;
    }

    public void calcArea(){
        s=java.lang.Math.sqrt(r*r + h*h);
        a=(pi*r*s)+(pi*r*r);
    }

    public void calcVolume(){
        v=pi*r*r*h/3;
    }

    public void dispArea(){
        System.out.println("Area of cone is "+a);
    }

    public void dispVolume(){
        System.out.println("Volume of cone is "+v);
    }

    public static void main(String[] args){
        Cone co = new Cone(3,4);
        co.calcArea();
        co.calcVolume();
        co.dispArea();
        co.dispVolume();
    }


}