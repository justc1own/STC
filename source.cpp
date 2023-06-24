#include "source.h"

void Source::load(const std::vector<uint8_t> &input) {
    data = input;
    pos = 0;
}

uint8_t Source::read() {
    if (pos < data.size()) {
        return data[pos++];
    }
    return 0;
}

bool Source::eof() const {
    return pos >= data.size();
}
