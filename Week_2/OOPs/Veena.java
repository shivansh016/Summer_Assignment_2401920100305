//Veena Class
package music.string;

import music.Playable;

public class Veena implements Playable {
    @Override
    public void play() {
        System.out.println("Veena is being played. Sweet string music is coming out!");
    }
}