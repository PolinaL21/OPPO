double my_pow(double n,unsigned int deg){
  double res=1;
  for (int i=0; i<deg;i++)
    res*=n;
  return res;}
