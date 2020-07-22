#include "paramchecker.h"

bool checkVitals(float vital,int lower,int upper)
{
  if(vital <lower || vital >upper)
  {
    return false;
  }
  return true;
}

Vital vitalsAreOk(std::vector<VitalValues>& vitalVec) 
{  
  Vital vitalEnum = Vital::None;
  
 for(int i=0;i<vitalVec.size();i++)
 {
  bool vitalState;
  vitalState = checkVitals(vitalVec[i].vitalValue, vitalVec[i].lower,vitalVec[i].upper);
  vitalVec[i].vitalStatus= vitalState;
  if(vitalState == false)
  {
   vitalEnum =  vitalVec[i].vitalType;
  }
 }
  return vitalEnum;
}
