#include <vector>
#include <cstdint>

class Source {
public:
    void load(const std::vector<uint8_t> &input);
    uint8_t read();
    bool eof() const;

private:
    std::vector<uint8_t> data;
    std::size_t pos = 0;
};
