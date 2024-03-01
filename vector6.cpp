vector <int>::iterator second_occure(vector <int> v, int num) {
	vector<int>::iterator i;
	i = find(v.begin(), v.end(), num);
	if (i != v.end())
		i = find(i + 1, v.end(), num);
	return i;
}
