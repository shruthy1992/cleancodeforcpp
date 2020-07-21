
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
  isOk = checkVitals(bpm,70,150);
  isOk = isOk || checkVitals(spo2,80,100);
  isOk =  isOk || checkVitals(respRate,30,60);
  if(isOk)
  {
    return true;
  }
  return false;
}
