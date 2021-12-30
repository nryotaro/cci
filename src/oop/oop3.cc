#include "oop3.h"
#include <bits/stdc++.h>
#include <optional>
using namespace std;

Money::Money() { dollars = 0; };
Money::Money(int dollars) : dollars(dollars){};
Money Money::operator+(const Money &money) const {
  return Money(dollars + money.dollars);
}
bool Money::operator<=(const Money &money) const { return
    dollars <= money.dollars;
}
Money Money::operator-(const Money &money) const {
  return Money(dollars - money.dollars);
}
Money Money::operator*(const Money &money) const {
  return Money(dollars * money.dollars);
}

Music::Music(string artist, string title) : artist(artist), title(title) {}
bool Music::operator==(const Music &music) const {
  return (artist ==  music.artist) == (title == music.title);
}
bool Music::operator!=(const Music &music) const {
  return ! (*this == music);
}

MusicItems::MusicItems(vector<Music> items) : items(items) {}

bool MusicItems::contains(Music music) {
  for(auto &item: items) {
    if(item == music)
      return true;
  }
  return false;
}

JukeBox::JukeBox(MusicItems musicItems): musicItems(musicItems) {
  state = State::Wait;
  current = nullopt;
}

Money JukeBox::price() { return Money(1); }

void JukeBox::pay(Money m) {
  money = money + m;
}

State JukeBox::getState() { return state; }

bool JukeBox::play(Music music) {
  if(Money(1) <= money) {
    if(musicItems.contains(music)) {
      money = money - Money(1);
      state = State::Playing;
      return true;
    }
  }
  return false;
}

optional<Music> JukeBox::playingMusic() { return current; }

void JukeBox::stop() {
  state = State::Wait;
}

MusicItems JukeBox::listMusicItems() {
  return musicItems;
}
