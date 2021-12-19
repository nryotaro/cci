#include <optional>
#include <string>
#include <vector>
struct Point {
    int r, c, cost;
};

std::optional<std::string> solve(std::vector<std::string> &grid);