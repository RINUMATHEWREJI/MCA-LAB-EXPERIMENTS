abstract class Animal{
    abstract void makesound();
}
class Dog extends Animal {
    void makesound(){
        System.out.println("Woof!!");
    }
}
class Cat extends Animal{
    void makesound(){
        System.out.println("meow!!");
    }
}
class L2E17{
    public static void main(String[] args){

        Animal dog = new Dog();
        dog.makesound();   

        Animal cat = new Cat();
        cat.makesound(); 
    }
}