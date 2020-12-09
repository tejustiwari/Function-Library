vector<ll> primeFactors;
void generatePrimeFactors(ll n)
{
  primeFactors.clear();
  for(ll i=2; i*i<=n; i++)
  {
    if(n%i==0)
    {
      primeFactors.pb(i);
      while(n%i==0)
          n=n/i;
    }
  }
  if(n!=1)
    primeFactors.pb(n);
}



// STARTING FROM 2 ....
// IN THIS FUNCTION,WE DONT CONSIDER 1 AS PRIME  
