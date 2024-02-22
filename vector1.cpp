void enlarge(vector <int>& v)
{
	vector <int> ::iterator i;
	for (i = v.begin()+1; i != v.end(); i+=2)
		i = v.insert(i, *i + *(i-1));
}
