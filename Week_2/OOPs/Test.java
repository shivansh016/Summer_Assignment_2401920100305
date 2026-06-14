//Test Class
package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {

        System.out.println("--- Scenario A ---");
        Veena myVeena = new Veena();
        myVeena.play();

        System.out.println();

        System.out.println("--- Scenario B ---");
        Saxophone mySaxophone = new Saxophone();
        mySaxophone.play();

        System.out.println();

        System.out.println("--- Scenario C (Interface Reference) ---");
        Playable p;

        p = myVeena;
        p.play();

        p = mySaxophone;
        p.play();
    }
}