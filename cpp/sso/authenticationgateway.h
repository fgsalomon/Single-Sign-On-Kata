//
// Created by fgsalomon on 30/08/17.
//

#ifndef CATCHTEST_AUTHENTICATIONGATEWAY_H
#define CATCHTEST_AUTHENTICATIONGATEWAY_H
#include <string>


class AuthenticationGateway {
    virtual bool credentialsAreValid(std::string username, std::string password) = 0;
};


#endif //CATCHTEST_AUTHENTICATIONGATEWAY_H
