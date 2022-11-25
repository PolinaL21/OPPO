double my_pow(double n,unsigned int k){
  double s=1;
  for (int i=1; i<=k;++i)
    s*=n;
  return s;
}
