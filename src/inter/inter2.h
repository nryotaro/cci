#include <string>
#include <unordered_map>
#include<unordered_set>

class WordFrequency final {

public:
  int lookUpFrequency(std::string word);
 WordFrequency(std::unordered_map<std::string, int> frequency);
private:
  std::unordered_map<std::string, int> frequency;
};

class WordFrequencyFactory final {
 public:
  WordFrequency create(std::string text);
};


