vector<ll> factorial;
void getFactorial(ll n)
{
	factorial[0] = 1;
	for(ll i = 1; i <= n; i++)
		factorial[i] = (i* 1ll * factorial[i - 1]) % M;
}
