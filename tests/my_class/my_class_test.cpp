#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "mock_my_class.h"

using namespace std;
using namespace testing;


TEST(my_class_test, check_methods)
{
    MockMyClass my_class;
    MyClassRunner my_class_runner;
    EXPECT_CALL(my_class, print()).Times(Exactly(1));
    EXPECT_CALL(my_class, get()).Times(Exactly(1));

    my_class_runner.call_methods(my_class);
}

TEST(test_constructors, test_my_class)
{
    char* str = "Hello world!";
    MyClass my_class_0(str);

    EXPECT_TRUE(my_class_0.get().compare(string(str)) == 0);

    MyClass my_class_1;
    EXPECT_TRUE(my_class_1.get().empty());

    MyClass my_class_2(std::move(my_class_0));
    EXPECT_TRUE(my_class_2.get().compare(string(str)) == 0);
    EXPECT_TRUE(my_class_0.is_data_null());
}

