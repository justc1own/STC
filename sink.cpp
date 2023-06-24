#include "sink.h"

void Sink::write(const std::string &result) {
    results.push_back(result);
}

std::vector<std::string> Sink::get_results() const {
    return results;
}
