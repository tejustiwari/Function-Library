ll maxSubarraySum(vector<ll> a, ll size)
{
    ll maxSoFar = LLONG_MIN, maxEndingHere = 0;
    for (ll i = 0; i < size; i++)
    {
        maxEndingHere = maxEndingHere + a[i];

        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;

        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }
    return maxSoFar;
}
