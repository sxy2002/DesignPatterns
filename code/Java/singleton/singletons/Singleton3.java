package singleton.singletons;

// Lazy 双重检查加锁
public class Singleton3 {
    private static volatile Singleton3 singleton;   // volatile !!!

    private Singleton3() {
        if (singleton != null) {
            throw new RuntimeException("Instance already exists!");
        }

        System.out.println("init Singleton3");
    }

    public static Singleton3 getInstance() {
        if(singleton == null) {
            synchronized (Singleton3.class) {
                if(singleton == null)           // 需要，防止解锁时等待锁的线程继续执行new
                    singleton = new Singleton3();
            }
        }
        return singleton;
    }
}
