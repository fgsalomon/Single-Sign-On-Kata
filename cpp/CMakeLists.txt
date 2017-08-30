cmake_minimum_required(VERSION 3.5)
project(CatchTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES myservicetest.cpp catch.hpp myservice.cpp myservice.h sso/ssotoken.h sso/response.h sso/request.h sso/authenticationgateway.h sso/singlesignonregistry.h)
add_executable(CatchTest ${SOURCE_FILES})
