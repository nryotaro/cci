#include "oop2.h"
#include <bits/stdc++.h>
using namespace std;

void Responder::respond() {}

void Manager::respond() {}

void Director::respond() {}

CallCenter::CallCenter(vector<Responder> res, vector<Manager> man,
                       vector<Director> dir) {

    for(auto &e : res) {
        responders.push(move(e));
    }
    for(auto &e : man) {
        managers.push(move(e));
    }
    for(auto &e : dir) {
        directors.push(move(e));
    }
}

Worker CallCenter::dispatchCall() {
    if(!responders.empty()) {
        Worker worker = responders.front();
        responders.pop();
        return worker;
    }
    if(!managers.empty()) {
        Worker worker = managers.front();
        managers.pop();
        return worker;
    }
    if(!directors.empty()) {
        Worker worker = directors.front();
        directors.pop();
        return worker;
    }

    throw runtime_error("no worker exists.");
}