#include "sq6.h"
#include <bits/stdc++.h>
using namespace std;

Animal::Animal(string name) : name(name) {}


Dog::Dog(string name) : Animal(name) {}

void Dog::doge() const {

  cout << "dogeeee" << endl;
}

void Cat::doge() const {
  
}
bool Dog::operator==(const Dog &other) const {
  return name == other.name;
}

bool Cat::operator==(const Cat &other) const {
  return name == other.name;
}

Cat::Cat(string name): Animal(name) {}

void AnimalQueue::enqueue(Dog dog) { dogs.push_front({indice++, dog}); }

void AnimalQueue::enqueue(Cat cat) { cats.push_front({indice++, cat}); }

Dog AnimalQueue::dequeueDog() {
  Dog dog = dogs.back().second;
  dogs.pop_back();
  return dog;
}

Cat AnimalQueue::dequeueCat() {
  Cat cat = cats.back().second;
  cats.pop_back();
  return cat;
}

Animal AnimalQueue::dequeueAny() {
  if(dogs.size() == 0)
    return dequeueCat();
  else if(cats.size() == 0)
    return dequeueDog();
  if(cats.back().first < dogs.back().first) {
    return dequeueCat();
  } else
    return dequeueDog();
}
