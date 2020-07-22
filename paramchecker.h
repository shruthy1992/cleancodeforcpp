#include <vector>


enum Vital{
  Bpm,
  Spo2,
  RespRate
};

struct VitalValues
{
  Vital vitalType;
  float vitalValue;
  float upper;
  float lower;
};

bool vitalsAreOk(std::vector<VitalValues> vitalVector);

