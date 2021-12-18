#include <memory>
#include <queue>
class Worker {
  public:
    virtual void respond();
};

class Responder final : public Worker {
  public:
    void respond();
};
class Manager final : public Worker {
  public:
    void respond();
};

class Director final : public Worker {
  public:
    void respond();
};

class CallCenter final {
  public:
    CallCenter(std::vector<Responder> responders, std::vector<Manager> managers,
               std::vector<Director> directors);
    Worker dispatchCall();

  private:
    std::queue<Responder> responders;
    std::queue<Manager> managers;
    std::queue<Director> directors;

};
