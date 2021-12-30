#include <optional>
#include <string>
#include <vector>

enum class State { Playing, Wait };

class Money final {
public:
  Money();
  Money(int dollars);
  Money operator+(const Money &money) const;
  bool operator<=(const Money &money) const;
  Money operator-(const Money &money) const;
  Money operator*(const Money &money) const; 

protected:
  int dollars;
};

class Music final {
public:
  Music(std::string artist, std::string title);
  bool operator==(const Music &music) const;
  bool operator!=(const Music &music) const;
  
protected:
  std::string artist;
  std::string title;
};

class MusicItems final {
public:
  MusicItems(std::vector<Music> items);
  bool contains(Music music);
private:
  std::vector<Music> items;
};

class JukeBox final {
public:
  JukeBox(MusicItems musicItems);
  Money price();  
  void pay(Money money);
  State getState();
  bool play(Music music);
  std::optional<Music> playingMusic();
  void stop();
  MusicItems listMusicItems();

private:
  Money money;
  MusicItems musicItems;
  State state;
  std::optional<Music> current;
};

