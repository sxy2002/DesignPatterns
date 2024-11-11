package decorator.io;

import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public class TestInput {
    public static void main(String[] args) {
        int c;

        try {
            InputStream in = new UpperCaseInputStream(new BufferedInputStream(new FileInputStream("D:\\设计模式\\test\\test\\src\\decorator\\io\\test.txt")));
            while ((c = in.read()) >= 0) {
                System.out.print((char) c);
            }
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}
