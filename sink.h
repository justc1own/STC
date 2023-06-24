#include <vector>
#include <string>

class Sink {
public:
    void write(const std::string &result);
    std::vector<std::string> get_results() const;

private:
    std::vector<std::string> results;
};
