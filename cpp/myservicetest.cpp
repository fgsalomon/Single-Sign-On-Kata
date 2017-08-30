#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myservice.h"

TEST_CASE("MyServiceTest"){

    SECTION("invalidSSOTokenIsRejected") {
        MyService service(nullptr);
        Response response = service.handleRequest(Request("Foo", nullptr));
        CHECK("hello Foo!" != response.text);
    }
}