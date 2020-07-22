#include "paramchecker.h"
#include <gtest/gtest.h>

TEST(VitalsTest1, BPM) {
    std::vector<VitalValues> vitalVector = {{Vital::Bpm, 100,70, 150}, {Vital::Spo2, 90,80, 100}, {Vital::RespRate, 50,30, 60},{Vital::SugarLevel, 110,90, 120}};
    ASSERT_EQ(vitalsAreOk(&vitalVector));
    for(int i=0;i<vitalVector.size();i++)
    {
    TEST_OUT<<"Vital status:"<<vitalVector[i].vitalType<<":"<<vitalVector[i].vitalStatus<<"\n";
    }
}
TEST(VitalsTest2, SPO2) {
    std::vector<VitalValues> vitalVector = {{Vital::Bpm, 100,70, 150}, {Vital::Spo2, 40,80, 100}, {Vital::RespRate, 50,30, 60},{Vital::SugarLevel, 110,90, 120}};
    ASSERT_EQ(vitalsAreOk(&vitalVector));
    
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
