package singleton.singletons;

// Lazy 线程不安全
public class Singleton1 {
    private static Singleton1 singleton;

    private Singleton1() {
        System.out.println("init Singleton1");
    }

    public static Singleton1 getInstance() {
        if(singleton == null)
            singleton = new Singleton1();
        return singleton;
    }
}
