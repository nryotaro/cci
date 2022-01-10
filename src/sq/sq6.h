#include <string>
#include <list>
#include <utility>
enum class AnimalType { Dog, Cat };

class Animal {
public:
  std::string name;
  Animal(std::string name);

  virtual AnimalType getType() const = 0;

  bool operator==(const Animal &other) const;

  ~Animal() {}
};


class Dog final: public Animal {
public:
  Dog(std::string name);
  AnimalType getType() const override;
  bool operator==(const Dog &other) const;
};

class Cat final : public Animal {
public:
  Cat(std::string name);
  AnimalType getType() const override;
  bool operator==(const Cat &other) const;
};

class AnimalQueue final {
private:
  std::list<std::pair<int, Dog>> dogs;
  std::list<std::pair<int, Cat>> cats;
  int indice;
public:
  void enqueue(Dog dog);
  void enqueue(Cat cat);
  Animal* dequeueAny();
  Dog dequeueDog();
  Cat dequeueCat();
};

