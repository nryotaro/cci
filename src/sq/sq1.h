#include <stdexcept>

template <class T> class Stack3 {
  public:
    Stack3(int size) : size(size) {
        array = new T[size * 3];
        cursor[0] = -1;
        cursor[1] = size - 1;
        cursor[2] = size * 2 - 1;
        bound[0] = size;
        bound[1] = size * 2;
        bound[3] = size * 3;
    }
    void push(int v, int index) {
        if(cursor[index] < bound[index] - 1) {
            cursor[index]++;
            array[cursor[index]] = v;
        } else {
            throw std::invalid_argument("full");
        }
    }
    T top(int index) {
        if(bound[index] - cursor[index] <= size)
            return array[cursor[index]];
        throw std::invalid_argument("empty");
    }
    T pop(int index) {
        T value = top(index);
        cursor[index]--;
        return value;
    }

    ~Stack3() { delete array; }

  private:
    T *array;
    int size;
    int cursor[3];
    int bound[3];
};