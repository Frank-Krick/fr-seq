#include "c74_min_unittest.h"
#include "fr-seq.binary.cpp"

SCENARIO("object produces correct output") {
    ext_main(nullptr);

    GIVEN("An instance of our object") {

        test_wrapper<binary> an_instance;
        binary&              my_object = an_instance;

        WHEN("a 'bang' is received") {
            my_object.bang();
            THEN("our greeting is produced at the outlet") {
                auto& output = *c74::max::object_getoutput(my_object, 0);
                REQUIRE((output.size() == 1));
                REQUIRE((output[0].size() == 1));
                REQUIRE((output[0][0] == symbol("hello world")));
            }
        }
    }
}
