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
  bool vitalStatus;
  float lower;
  float upper;
};

Vital vitalsAreOk(std::vector<VitalValues>& vitalVector);

