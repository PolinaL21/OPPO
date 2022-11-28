double my_pow(double n,unsigned int deg){
  double s=1;
  for (int i=1; i<=deg;++i)
    s*=n;
  return s;
}
