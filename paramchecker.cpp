
bool checkVitals(float vital, int lower, int upper)
{
  if(vital <lower || vital >upper)
  {
    return 0;
  }
  return 1;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) 
{ 
  int isBpmOk = checkVitals(bpm,70,150);
  int isSpo2Ok =checkVitals(spo2,80,100);
  int isRespRateOk =checkVitals(respRate,30,60);
  if((isBpmOk & isSpo2Ok & isRespRateOk)== 1)
  {
    return true;
  }
  return false;
}
