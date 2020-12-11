ll powm(ll x, unsigned int y)   // To compute x^y under modulo 1e7
{
    if (y == 0)
        return 1;
    ll p = powm(x, y/2) % M;
    p = (p * p) % M;

    return (y%2 == 0)? p : (x * p) % M;
}

ll inverseModulo(ll a)  // IF M is prime {Fermats’s little theorem}
{
    return powm(a, M-2);
}













int modInverse(int a, int m) // if M is NOT prime
{
    ll m0 = m, y = 0, x = 1;
    if (m == 1)
      return 0;

    while (a > 1)
		{
        ll q = a / m, t = m;
        // m is remainder now, process same as Euclid's algo
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
      x += m0;
    return x;
}
