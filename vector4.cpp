vector <int> concat(vector <int> a, vector <int> b) {
	vector <int> res(a.size() + b.size());
	for (int i = 0; i < a.size(); i++)
	{
		res[i] = a[i];
	}
	for (int i = 0; i < b.size(); i++)
	{
		res[i+a.size()] = b[i];
	}
	return res;
}
