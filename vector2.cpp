void del(vector <int>& v)
{
	vector <int> v_new;
	vector <int>::iterator i;
	for (int i = 0; i < v.size(); i++)
		if (i % 2 == 1)
			v_new.push_back(v[i]);
	v = v_new;
}
