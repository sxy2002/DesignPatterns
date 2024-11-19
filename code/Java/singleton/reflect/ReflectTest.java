package singleton.reflect;

import java.lang.reflect.*;

interface Greeting {
    void sayHello();
}

class GreetingImpl implements Greeting {
    public void sayHello() {
        System.out.println("Hello, world!");
    }
}

public class ReflectTest {
    public static void main(String[] args) {

        // 获取类的详细信息，如类名、包名、构造方法、成员变量、方法等
        Class<?> clazz = null;
        try {
            clazz = Class.forName("java.lang.String");

            Method[] methods = clazz.getMethods();
            for (Method method : methods) {
                System.out.println("Method: " + method.getName());
            }

            Method method = clazz.getMethod("toUpperCase");
            // 调用方法
            String result = (String) method.invoke("hello");
            System.out.println(result);

        } catch (Exception e) {
            throw new RuntimeException(e);
        }

        // 动态实例化类的对象
        try {
            clazz = Class.forName("java.util.ArrayList");

            // 通过无参构造器创建实例
            Object obj = clazz.getDeclaredConstructor().newInstance();

            System.out.println("Created object: " + obj.getClass().getName());

            // 获取私有字段 "size"
            Field field = clazz.getDeclaredField("size");
            field.setAccessible(true); // 绕过访问权限限制
            System.out.println("Private field 'size': " + field.get(obj));

        } catch (Exception e) {
            throw new RuntimeException(e);
        }

        // 创建动态代理
        Greeting greeting = new GreetingImpl();

        // 创建动态代理
        Greeting proxy = (Greeting) Proxy.newProxyInstance(
                Greeting.class.getClassLoader(),
                new Class[]{Greeting.class},
                new InvocationHandler() {
                    @Override
                    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
                        System.out.println("Before method call");
                        Object result = method.invoke(greeting, args);
                        System.out.println("After method call");
                        return result;
                    }
                }
        );

        proxy.sayHello();


    }
}
