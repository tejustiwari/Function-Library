ll log2(ll x)
{
  return 64- __builtin_clzll(x)-1;
}
