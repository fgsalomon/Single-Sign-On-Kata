//
// Created by fgsalomon on 30/08/17.
//

#ifndef CATCHTEST_SINGLESIGNONREGISTRY_H
#define CATCHTEST_SINGLESIGNONREGISTRY_H
#include "ssotoken.h"
#include <string>

class SingleSignOnRegistry {


    virtual SSOToken registerNewSession(std::string userName, std::string password) = 0;
    virtual bool isValid(SSOToken token) = 0;
    virtual void unregister(SSOToken token) = 0;
};


#endif //CATCHTEST_SINGLESIGNONREGISTRY_H
