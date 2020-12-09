bool rangesOverlap (ll L1, ll R1, ll L2, ll R2)
{
  if (R1 < L1 || R2 < L2)
    return false;
  else if (R1 < L2 || L1 > R2)
    return false;
  else if (L1 >= L2 && R1 <= R2)
    return true;
  else if (L1 >= L2 && L1 <= R2)
    return true;
  else if (R1 >= L2 && R1 <= R2)
    return true;
  else
    return false;
}
