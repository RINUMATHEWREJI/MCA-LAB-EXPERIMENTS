class arithmetic{
    float real,img;
    arithmetic(){}
    arithmetic(float r,float i){
        real = r;
        img = i;
    }
    void display(){
        System.out.println(real+"+ i "+img);
    }
    arithmetic add(arithmetic c2){
        arithmetic result = new arithmetic();
        result.real = real + c2.real;
        result.img = img + c2.img;
        return result;
    }
    arithmetic sub(arithmetic c2){
        arithmetic result = new arithmetic();
        result.real = real - c2.real;
        result.img = img - c2.img;
        return result;
    }
    arithmetic mul(arithmetic c2){
        arithmetic result = new arithmetic();
        result.real = (real * c2.real)-(img * c2.img);
        result.img = (real * c2.img) + (img * c2.real);
        return result;
    }
}
class L1E2{
    public static void main(String args[]){
        arithmetic c1 = new arithmetic(5.2f,7.6f);
        arithmetic c2 = new arithmetic(4.7f,6.5f);
        System.out.println("c1 : ");
        c1.display();
        System.out.println("c2 : ");
        c2.display();
        System.out.println("Addition : ");
        arithmetic c3 = new arithmetic();
        c3 = c1.add(c2);
        c3.display();
        System.out.println("subtraction : ");
        arithmetic c4 = new arithmetic();
        c4 = c1.sub(c2);
        c4.display();
        System.out.println("Multiplication : ");
        arithmetic c5 = new arithmetic();
        c5 = c1.mul(c2);
        c5.display();
    }
}