#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

std::unordered_map<std::string, int>
solve(std::vector<std::pair<std::string, int>> names,
      std::vector<std::pair<std::string, std::string>> synonyms);
