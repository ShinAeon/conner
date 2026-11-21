main.cppp

int main (void) {
  Game game = new Game();
  game.run();
}

game.h

#include <map>
#include <vector>

#include <HighScore.h>
#include <Player.h>
#include <Room.h>

class Game {
  // class variables
  private Player player;
  private std::vector<HighScore> highScoreTable;
  private std::map<Room> rooms;

  // methods
  public Game(void);

  public void run(void);
}

HighScore.h

class HighScore

Player.h

Room.h


NOTES 

Start thinking about logic

- Game loop
  - What does game loop DO
  - How should it work
  - how are command shandled
  - how are rooms displayed
- Main screen
  - How isd it displayted
- game flow
  - main -> Game.Run -> init game data -> Display main screen -> main game loog 
  - common commands?
  - room specific commands?
- How do you keep score?
  - what prevents a player from racking up a high score by going back and forth between two rooms
  
