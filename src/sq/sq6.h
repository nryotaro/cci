#include <string>
#include <list>
#include <iostream>
#include <utility>

class Animal {
public:
  std::string name;
  Animal(std::string name);

  virtual void doge() const{
    std::cout << "dogeee" << std::endl;
  };
  ~Animal() {}
};

class Dog final: public Animal {
public:
  Dog(std::string name);
  bool operator==(const Dog &other) const;
  void doge() const override;
};

class Cat final : public Animal {
public:
  Cat(std::string name);
  bool operator==(const Cat &other) const;
  void doge() const override;  
};

class AnimalQueue final {
private:
  std::list<std::pair<int, Dog>> dogs;
  std::list<std::pair<int, Cat>> cats;
  int indice;
public:
  void enqueue(Dog dog);
  void enqueue(Cat cat);
  Animal dequeueAny();
  Dog dequeueDog();
  Cat dequeueCat();
};

