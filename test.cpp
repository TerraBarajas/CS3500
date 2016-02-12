#include "gtest/gtest.h"
#include "Students.h"

TEST(StudentsTest, AddANameAndID) {
    Students t;
    std::string n("David");
    t.addUser(n, 1);
    unsigned int id = t.idForName(n);
    ASSERT_EQ(1, id);
}

TEST(StudentsTest, AddANameAndID) {
    Students t;
    std::string n("David");
    t.addUser(n, 1);
    unsigned int id = t.idForName(n);
    ASSERT_EQ(1, id);
}
