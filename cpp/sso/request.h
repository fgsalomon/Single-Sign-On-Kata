//
// Created by fgsalomon on 30/08/17.
//

#ifndef CATCHTEST_REQUEST_H
#define CATCHTEST_REQUEST_H
#include "ssotoken.h"
#include <string>

struct Request {

    std::string name;
    SSOToken* token;

    Request(const std::string &name, SSOToken *token) : name(name), token(token) {}
};


#endif //CATCHTEST_REQUEST_H
