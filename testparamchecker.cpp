#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    vector<float> vitals(3);
    vitals.pushback(100);
     vitals.pushback(100);
     vitals.pushback(50);
    ASSERT_EQ(true, vitalsAreOk(vitals));
}
 
TEST(VitalsTest, SPO2) {
  vector<float> vitals(3);
    vitals.pushback(100);
     vitals.pushback(40);
     vitals.pushback(50);
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
