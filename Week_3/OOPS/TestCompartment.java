import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "Notice [First Class]: Executive AC Coach. Please maintain silence and keep your tickets handy.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Notice [Ladies]: Reserved exclusively for female passengers. Trespassers will be heavily fined!";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "Notice [General]: Unreserved Coach. Please accommodate fellow passengers and take care of your belongings.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Notice [Luggage]: Strictly for heavy baggage and commercial parcels. Passengers not allowed to sit.";
    }
}
public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] train = new Compartment[10];
        Random random = new Random();
        System.out.println("====== Generating Train Compartments Dynamically ======\n");
        for (int i = 0; i < train.length; i++) {
            int randomNum = random.nextInt(4) + 1;
            switch (randomNum) {
                case 1:
                    train[i] = new FirstClass();
                    break;
                case 2:
                    train[i] = new Ladies();
                    break;
                case 3:
                    train[i] = new General();
                    break;
                case 4:
                    train[i] = new Luggage();
                    break;
            }
        }
        for (int i = 0; i < train.length; i++) {
            System.out.print("Coach #" + (i + 1) + " -> ");
            System.out.println(train[i].notice());
        }
    }
}


//SAMPLE OUTPUT:-
/*
====== Generating Train Compartments Dynamically ======

Coach #1 -> Notice [Ladies]: Reserved exclusively for female passengers. Trespassers will be heavily fined!
Coach #2 -> Notice [General]: Unreserved Coach. Please accommodate fellow passengers and take care of your belongings.
Coach #3 -> Notice [Luggage]: Strictly for heavy baggage and commercial parcels. Passengers not allowed to sit.
Coach #4 -> Notice [First Class]: Executive AC Coach. Please maintain silence and keep your tickets handy.
Coach #5 -> Notice [General]: Unreserved Coach. Please accommodate fellow passengers and take care of your belongings.
Coach #6 -> Notice [Luggage]: Strictly for heavy baggage and commercial parcels. Passengers not allowed to sit.
Coach #7 -> Notice [First Class]: Executive AC Coach. Please maintain silence and keep your tickets handy.
Coach #8 -> Notice [Ladies]: Reserved exclusively for female passengers. Trespassers will be heavily fined!
Coach #9 -> Notice [Ladies]: Reserved exclusively for female passengers. Trespassers will be heavily fined!
Coach #10 -> Notice [First Class]: Executive AC Coach. Please maintain silence and keep your tickets handy.
*/