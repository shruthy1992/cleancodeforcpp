#include <vector>
#include <utility>

enum Vital{
  Bpm,
  Spo2,
  RespRate,
  SugarLevel
};

struct VitalValues
{
  Vital vitalType;
  float vitalValue;
  float lower;
  float upper;
};

bool vitalsAreOk(std::vector<VitalValues> vitalVector);

