vector <int>::iterator last_occure(vector <int> v, int num) {
	vector<int>::iterator i;
	vector<int>::iterator pre_i;
	i = find(v.begin(), v.end(), num);
	while (i != v.end()) {
		pre_i = i;
		i = find(i + 1, v.end(), num);
	}
	return pre_i;
}
