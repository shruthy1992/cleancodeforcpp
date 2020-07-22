#include "paramchecker.h"

bool checkVitals(float vital,int lower,int upper)
{
  if(vital <lower || vital >upper)
  {
    return 0;
  }
  return 1;
}

bool vitalsAreOk(std::vector<VitalValues> vitalVec) 
{  
  int i;
 for(i=0;i<vitalVec.size();i++)
 {
  int isOk = checkVitals(vitalVec[i].vitalValue, vitalVec[i].lower,vitalVec[i].upper);
   if(isOk == 0)
   {
     return false;
   }    
 }
  return true;
}
