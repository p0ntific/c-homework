vector <int> repeat(vector <int> a, int n) {
	vector <int> res(a.size()*n);
	for (int i = 0; i < a.size()*n; i++)
	{
		res[i] = a[i%a.size()];
	}
	
	return res;
}
