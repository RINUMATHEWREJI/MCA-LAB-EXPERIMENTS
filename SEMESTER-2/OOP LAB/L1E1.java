class circle{
    float radius;
circle(){
    radius = 2.0f;
}
circle(float r){
    radius = r;
}
float circumference(){
    return 2.0f * 3.14f * radius; 
}
}
class L1E1{
    public static void main(String args[]){
        circle c1 = new circle();
        System.out.println("circumference of first circle : "+c1.circumference());
        circle c2 = new circle(4.0f);
        System.out.println("circumference of second circle : "+c2.circumference());

    }
}