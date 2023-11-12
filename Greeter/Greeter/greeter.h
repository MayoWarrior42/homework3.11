#pragma once
#ifndef GREETER_H
#define GREETER_H

#include <string>

class Greeter {
public:
    static std::string greet(const std::string& name);
};

#endif