#include <iostream>
#include <thread>
#include "byte_converter.h"
#include "source.h"
#include "sink.h"

int main() {
    Source source;
    Sink sink;
    byte_converter converter;

    source.load({0x30, 0x68, 0x89, 0xB2, 0b00'101010, 0b01'101010});

    std::thread t([&](){
        while(!source.eof()) {
            sink.write(converter.convert(source.read()));
        }
    });

    t.join();

    for (const std::string &res : sink.get_results()) {
        std::cout << res << std::endl;
    }

    return 0;
}
