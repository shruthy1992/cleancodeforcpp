
bool checkVitals(float vital, int lower, int upper)
{
  if(vital <lower || vital >upper)
  {
    return true;
  }
  return false;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) 
{ 
  bool isBpmOk = checkVitals(bpm,70,150);
  bool isSpo2Ok = checkVitals(spo2,80,100);
  bool isrespRateOk = checkVitals(respRate,30,60);
  bool result = isBpmOk & isSpo2Ok & isrespRateOk;
  if(result)
  {
    return true;
  }
  return false;
}
