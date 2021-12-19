#include <bits/stdc++.h>
using namespace std;

class Search {
  public:
    unordered_map<int, int> prev;
    Search(unordered_map<int, unordered_set<int>> &user_friends, int start)
        : user_friends(user_friends) {
        prev[start] = -1;
        que.push(start);
    }

    bool isDone() { return que.empty(); }

    optional<int> proceed(unordered_map<int, int> &other_prev) {
        int user = que.front();
        que.pop();

        for(auto &neighbor : user_friends[user]) {
            if(prev.find(neighbor) == prev.end()) {
                prev[neighbor] = user;
                que.push(neighbor);
                if(other_prev.find(neighbor) != other_prev.end())
                    return neighbor;
            }
        }
        return nullopt;
    }

    vector<int> track(int user_id) {
        vector<int> res;
        while(true) {
            res.push_back(user_id);
            user_id = prev[user_id];
            if(user_id == -1) {
                reverse(res.begin(), res.end());
                return res;
            }
        }
    }

  private:
    unordered_map<int, unordered_set<int>> &user_friends;
    queue<int> que;
};

vector<int> build_path(Search &search_a, Search &search_b, int collision) {
    vector<int> a = search_a.track(collision);
    vector<int> b = search_b.track(collision);
    a.pop_back();
    reverse(b.begin(), b.end());
    for(auto e : b)
        a.push_back(e);
    return a;
}

vector<int> solve(unordered_map<int, unordered_set<int>> &friends, int a,
                  int b) {
    Search search_a(friends, a), search_b(friends, b);

    while(true) {
        if(search_a.isDone()) {
            if(search_b.isDone()) {
                return {};
            }
            else {
                optional<int> collision = search_b.proceed(search_a.prev);
                if(collision.has_value())
                    return build_path(search_a, search_b, collision.value());
            }
        } else {
            if(search_b.isDone()) {
                optional<int> collision = search_a.proceed(search_b.prev);
                if(collision.has_value())
                    return build_path(search_a, search_b, collision.value());
            } else {
                optional<int> collision = search_a.proceed(search_b.prev);
                if(collision.has_value())
                    return build_path(search_a, search_b, collision.value());
                collision = search_b.proceed(search_a.prev);
                if(collision.has_value())
                    return build_path(search_a, search_b, collision.value());
            }
        }
    }
}
