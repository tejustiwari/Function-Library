bool  isSubstring(string s1, string s2)
{
	if (s1.find(s2) != string::npos)
    return true;
	return false;
}
