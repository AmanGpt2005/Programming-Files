class Hello {
    public void Hi() {
        System.out.println("Inside Hello Class");
    }
}

public class MethodExample {
    public static void main(String args[]) {
        System.out.println("Hello, World!");
        Hello hello = new Hello();
        hello.Hi();
    }
}
