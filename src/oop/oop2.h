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

class WorkerQueue final {
  public:
    WorkerQueue(std::queue<Worker> workers);
    bool empty();
    Worker pop();
    void pushBack(Worker worker);

  private:
    std::queue<Worker> workers;
};


class CallCenter final {
  public:
    CallCenter(WorkerQueue responders, WorkerQueue managers,
               WorkerQueue directors);
    Worker dispatchCall();

  private:
    WorkerQueue responders;
    WorkerQueue managers;
    WorkerQueue directors;
};
