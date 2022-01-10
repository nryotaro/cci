#include "sq6.h"
#include <bits/stdc++.h>
using namespace std;

Animal::Animal(string name) : name(name) {}


bool Animal::operator==(const Animal &other) const {
  return name == other.name && getType() == other.getType();
}

Dog::Dog(string name) : Animal(name) {}

AnimalType Dog::getType() const { return AnimalType::Dog; }

bool Dog::operator==(const Dog &other) const {
  return Animal::operator==(other);
}

AnimalType Cat::getType() const { return AnimalType::Dog; }

bool Cat::operator==(const Cat &other) const {
  return Animal::operator==(other);
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
