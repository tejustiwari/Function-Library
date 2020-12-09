vector<ll> fact;

ll powm(ll x, unsigned int y) // To compute x^y under modulo 1e7(M)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2) % M;
    p = (p * p) % M;

    return (y%2 == 0)? p : (x * p) % M;
}

ll inverseModulo(ll a)  // IF M is prime {Fermats’s little theorem}
{
    return powm(a, M-2);
}

ll nCr(ll n, ll r)   // Returns nCr % 1e7(M) using Fermat's little theorem.
{
   if (r==0)
    return 1;

    // Fill factorial array so that we can find all factorial of r, n and n-r
    fact[0] = 1;
    for (int i=1 ; i<=n; i++)
      fact[i] = fact[i-1]*i%M;

    return (fact[n]* inverseModulo(fact[r]) % M *  inverseModulo(fact[n-r]) % M) % M;
}
