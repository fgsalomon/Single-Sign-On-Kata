//
// Created by fgsalomon on 30/08/17.
//

#include "myservice.h"

MyService::MyService(SingleSignOnRegistry *m_registry) : m_registry(m_registry) {}

Response MyService::handleRequest(const Request &request) {
    // TODO: check request has a valid SSOToken
    return Response("hello " + request.name + "!");
}
