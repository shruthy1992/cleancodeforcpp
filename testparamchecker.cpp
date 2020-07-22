#include "paramchecker.h"
#include <gtest/gtest.h>
    vital.vitalValue =100;
    vital.lower = 70;
    vital.upper = 150;
    vitals.pushback(vital)
    vital.vitalValue =100;
    vital.lower = 80;
    vital.upper = 100;
    vitals.pushback(vital)
    vital.vitalValue = 80;
    vital.lower = 30;
    vital.upper = 60;
    vitals.pushback(vital)
TEST(VitalsTest, BPM) {
    ASSERT_EQ(true, vitalsAreOk(vital));
}
    vital.bpm =100;
    vital.lower = 70;
    vital.upper = 150;
    vitals.pushback(vital)
    vital.spo2 =40;
    vital.lower = 80;
    vital.upper = 100;
    vitals.pushback(vital)
    vital.resprate = 50;
    vital.lower = 30;
    vital.upper = 60;
    vitals.pushback(vital)
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(vital));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
