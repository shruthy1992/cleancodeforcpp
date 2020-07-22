
bool checkVitals(float vital,int upper,int lower)
{
  if(vital <lower || vital >upper)
  {
    return 0;
  }
  return 1;
}

bool vitalsAreOk(vector<float>& vitals,int upperLimit,int lowerlimit) 
{  int i=0;
   int result=0;
   int isVitals = 1;
  for(i=0;i<vitals.size();i++)
  { 
   result= checkVitals(vital[i],upperLimit,lowerlimit);
   isVitals = isVitals & result;  
  }
  
  if((isVitals)== 1)
  {
    return true;
  }
  return false;
}
