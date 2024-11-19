package singleton.singletons;

// Early 枚举（反射）
public enum Singleton5 {
    INSTANCE;

    private Singleton5() {
        System.out.println("init Singleton5");
    }
}
