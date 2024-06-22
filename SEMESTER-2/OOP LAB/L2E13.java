import java.util.Scanner;
interface RESIZABLE{
    void resize(int percentage);
}
class Image implements RESIZABLE{
    int width;
    int height;
    Image(int width,int height){
        this.width = width;
        this.height = height;
    }
    @Override
    public void resize(int percentage){
        int newwidth = width + (width * percentage / 100);
        int newheight = height + (height * percentage / 100);

        System.out.println("new width: "+newwidth+"    new height: "+newheight);
    }
    void printinfo(){
        System.out.println("width: "+width+"     height: "+height);
    }
}
class L2E13{
    public static void main(String[] args){
        Scanner scanner  = new Scanner(System.in);

        System.out.print("enter the width of image: ");
        int width = scanner.nextInt();
        System.out.print("enter the height of image: ");
        int height = scanner.nextInt();
        Image m1 = new Image(width,height);
        m1.printinfo();
        System.out.print("enter the percentage to resize: ");
        int percentage = scanner.nextInt();
        m1.resize(percentage);
    }
}