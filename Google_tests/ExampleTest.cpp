#include "gtest/gtest.h"
#include "ClassUnderTest.h"

TEST(test1true, ExampleTest) {
    ClassUnderTest e = ClassUnderTest();

    EXPECT_EQ(true, e.test1(1));
    std::cout << "Test 1 : test1() successful!" << std::endl;
}

TEST(test1false, ExampleTest) {
    ClassUnderTest e = ClassUnderTest();

    EXPECT_EQ(false, e.test1(10));
    std::cout << "Test 2 : test1() successful!" << std::endl;
}

TEST(test2false, ExampleTest) {
    ClassUnderTest e = ClassUnderTest();
    std::ifstream ifs ("test.txt", std::ifstream::in);

    EXPECT_EQ(false, e.test2(ifs));
    std::cout << "Test 3 : test2() successful!" << std::endl;
}