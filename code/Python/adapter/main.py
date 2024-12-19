from duck.duck import MallardDuck, TurkeyAdapter
from turkey.turkey import WildTurkey, DuckAdapter

if __name__ == "__main__":
    duck = MallardDuck()
    turkey = WildTurkey()
    duck.quack()
    duck.fly()
    turkey.gobble()
    turkey.fly()   
    
    duckT = TurkeyAdapter()
    duckT.quack()
    duckT.fly()
    
    turkeyD = DuckAdapter(duck)
    turkeyD.gobble()
    turkeyD.fly()