package singleton.singletons;

// Early
public class Singleton4 {
    private static final Singleton4 singleton = new Singleton4();

    private Singleton4() {
        if (singleton != null) {
            throw new RuntimeException("Instance already exists!");
        }

        System.out.println("init Singleton4");
    }

    public static Singleton4 getInstance() {
        return singleton;
    }
}
