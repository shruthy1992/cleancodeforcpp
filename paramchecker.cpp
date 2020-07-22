#include "paramchecker.h"

bool checkVitals(float vital,int lower,int upper)
{
  if(vital <lower || vital >upper)
  {
    return 0;
  }
  return 1;
}

bool vitalsAreOk(std::vector<VitalValues>& vitalVec) 
{  
  int i;
  bool isOk = true;
 for(i=0;i<vitalVec.size();i++)
 {
    vitalVec[i].vitalStatus = checkVitals(vitalVec[i].vitalValue, vitalVec[i].lower,vitalVec[i].upper);
  if(vitalVec[i].vitalStatus == false)
  {
   isOk = vitalVec[i].vitalStatus;
  }
 }
  return isOk;
}
