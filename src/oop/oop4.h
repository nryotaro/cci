#include <chrono>
#include <optional>
#include<vector>

class CarId final {
public:
  CarId(int carId);
  bool operator==(const CarId &other) const;

private:
  int carId;
};

class SpaceId final {
public:
  SpaceId(int spaceId);
  bool operator==(const SpaceId &other) const;

private:
  int spaceId;
};

class Money final {
public:
  Money(int dollars);

private:
  int dollars;
};

enum class Size { Small, Medium, Large };

class Car final {
public:
  Car(CarId carId, Size size);

private:
  CarId carId;
  Size size;
};

class Driver final {
public:
  Driver(Car car);
  void parkCar() const;
  void lookSpaces() const;

private:
  Car car;
};

class SpaceCar final {
public:
  SpaceCar(
      CarId carId,
      std::chrono::time_point<std::chrono::system_clock, std::chrono::seconds>
          startTime);

private:
  CarId carId;
  std::chrono::time_point<std::chrono::system_clock, std::chrono::seconds>
      startTime;
};

class Space final {
public:
  Space(SpaceId spaceId);
  bool canPark(Car car);
  void putCar(Car car);
  
private:
  SpaceId spaceId;
  std::optional<SpaceCar> spaceCar;  
};

class Spaces final {
public:
private:
  std::vector<Space> smallSpaces;
  std::vector<Space> mediumSpaces;
  std::vector<Space> largeSpaces;
  
};

class Parking {
public:
  Spaces listSpaces() const;
  void pay(SpaceId spaceId, Money money);
  Money checkFee(SpaceId spaceId);
  void putCar(Car car);
private:
  Money storedMoney;
  Spaces spaces;
};
