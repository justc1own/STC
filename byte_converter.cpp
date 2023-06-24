#include "byte_converter.h"

std::string byte_converter::convert(uint8_t byte) {
    uint8_t type = (byte & 0b11000000) >> 6;
    uint8_t data = byte & 0b00111111;

    if (type == 0b00) {
        return std::to_string(static_cast<uint8_t>(data));
    }

    if (type == 0b01) {
        return std::to_string(static_cast<int8_t>(data << 2) >> 2);
    }

    if (type == 0b10) {
        return std::string(1, 'a' + data);
    }

    return "unknown";
}