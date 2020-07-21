
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
  bool isOk = false;
  bool isOk = checkVitals(bpm,70,150);
  bool isOk = isOk || checkVitals(spo2,80,100);
  bool isOk =  isOk || checkVitals(respRate,30,60);
  if(isOk)
  {
    return true;
  }
  return false;
}
