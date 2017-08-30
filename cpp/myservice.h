//
// Created by fgsalomon on 30/08/17.
//

#ifndef CATCHTEST_MYSERVICE_H
#define CATCHTEST_MYSERVICE_H

#include "sso/request.h"
#include "sso/response.h"
#include "sso/singlesignonregistry.h"

class MyService {

public:
    MyService(SingleSignOnRegistry *m_registry);
    Response handleRequest(const Request &request);

private:
    SingleSignOnRegistry* m_registry;


};


#endif //CATCHTEST_MYSERVICE_H
