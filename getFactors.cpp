vector<ll> factors;
void getFactors(ll n)
{
  factors.clear();
  for(ll i=2; i*i<=n; i++)
  {
    if(n%i==0)
    {
      factors.pb(i);
      if(n/i != i)
        factors.pb(n/i);
    }
  }
  factors.pb(1);
  factors.pb(n);
  sort(factors.begin(), factors.end());
}
