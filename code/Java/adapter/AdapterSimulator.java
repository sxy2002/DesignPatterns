package adapter;

import adapter.duck.Duck;
import adapter.duck.MallardDuck;
import adapter.duck.TurkeyAdapter;
import adapter.turkey.DuckAdapter;
import adapter.turkey.Turkey;
import adapter.turkey.WildTurkey;

public class AdapterSimulator {

    public static void main(String[] args) {
        Duck duck = new MallardDuck();
        Turkey turkey = new WildTurkey();

        duck.quack();
        duck.fly();
        turkey.gobble();
        turkey.fly();

        Duck duckT = new TurkeyAdapter(turkey);
        duckT.quack();
        duckT.fly();

        Turkey turkeyD = new DuckAdapter(duck);
        turkeyD.gobble();
        turkeyD.fly();
    }
}
