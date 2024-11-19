package singleton.singletons;

// Lazy 静态内部类
public class Singleton6 {

    private static class SingletonHolder {
        private static final Singleton6 singleton = new Singleton6();
    }

    private Singleton6() {
        System.out.println("init Singleton6");
    }

    public static Singleton6 getInstance() {
        return SingletonHolder.singleton;
    }
}
