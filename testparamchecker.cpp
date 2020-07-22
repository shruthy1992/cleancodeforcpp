#include "paramchecker.h"
#include <gtest/gtest.h>

TEST(VitalsTest, BPM) {
    std::vector<VitalValues> vitalVector = {{Vital::Bpm, 100,70, 150}, {Vital::SpO2, 100,80, 101}, {Vital::RespRate, 50,30, 60}};
    ASSERT_EQ(true, vitalsAreOk(vitals));
}
TEST(VitalsTest, SPO2) {
    std::vector<VitalValues> vitalVector = {{Vital::Bpm, 100,70, 150}, {Vital::SpO2, 40,80, 101}, {Vital::RespRate, 50,30, 60}};
    ASSERT_EQ(false, vitalsAreOk(vitalVector));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
