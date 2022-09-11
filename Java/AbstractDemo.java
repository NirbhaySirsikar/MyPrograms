abstract class Shape {
    abstract void area();
}

class Rectangle extends Shape {
    int area;
    int l = 23;
    int b = 30;

    void area() {
        area = l * b;
        System.out.println("Area of Rectangle:" + area);

    }

}

class Triangle extends Shape {
    double area;
    int h = 12;
    int b = 23;

    void area() {
        area = 0.5 * h * b;
        System.out.println("Area of triangle:" + area);

    }

}

class Circle extends Shape {
    double area;
    int r = 7;

    void area() {
        area = 3.14 * r * r;
        System.out.println("Area of Circle:" + area);

    }
}

class Abstractdemo {
    public static void main(String args[]) {
        Shape c = new Circle();
        Shape t = new Triangle();
        Shape r = new Rectangle();
        t.area();
        c.area();
        r.area();

    }

}