ll power(ll a, ll b)
{
	ll res=1;
	while(b)
	{
		if(b&1)
			res=(res*a);
		a=(a*a);
		b>>=1;
	}
	return res;
}
