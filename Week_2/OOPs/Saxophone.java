//Saxophone Class
package music.wind;

import music.Playable;

public class Saxophone implements Playable {
    @Override
    public void play() {
        System.out.println("Saxophone is being played. Melodious wind music is coming out!");
    }
}