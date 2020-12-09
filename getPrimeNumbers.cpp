vector<bool> prime(n);
void getPrimeNumbers(ll n)             //O(nloglogn) SieveOfEratosthenes
{
  memset(prime, true, sizeof(prime));

  for (ll p=2; p*p<=n; p++)
  {
    if (prime[p] == true)
    {
      for (ll i=p*p; i<=n; i += p)
        prime[i] = false;
    }
  }
}
// all the preimes for which the value of prime[ p ] is true are the prime factors of the NUMBER
