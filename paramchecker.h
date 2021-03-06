#include <vector>
#include <utility>

enum Vital{
  Bpm,
  Spo2,
  RespRate,
  SugarLevel,
  None
};

struct VitalValues
{
  Vital vitalType;
  float vitalValue;
  float lower;
  float upper;
  bool vitalStatus;
};

Vital vitalsAreOk(std::vector<VitalValues>& vitalVector);

