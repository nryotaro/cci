#include "oop2.h"
#include <bits/stdc++.h>
using namespace std;

void Responder::respond() {}

void Manager::respond() {}

void Director::respond() {}

WorkerQueue::WorkerQueue(queue<Worker> workers) : workers(workers){};

bool WorkerQueue::empty() { return workers.empty(); }

Worker WorkerQueue::pop() {
    Worker worker = workers.front();
    workers.pop();
    return worker;
}
void WorkerQueue::pushBack(Worker worker) { workers.push(worker); }

CallCenter::CallCenter(WorkerQueue responders, WorkerQueue managers,
                       WorkerQueue directors)
    : responders(responders), managers(managers), directors(directors) {}

Worker CallCenter::dispatchCall() {

    vector<WorkerQueue> queues = {responders, managers, directors};
    for(auto queue : queues) {
        if(queue.empty())
            return queue.pop();
    }
    throw runtime_error("no worker exists.");
}