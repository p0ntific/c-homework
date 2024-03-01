void get_number_scope(vector <double> v, float num, int &a, int &b) {
	//1. проверить случай что число больше максимального в массиве
	//2. проверим есть ли в целом элемент
	//3. проверить случай повторения ? не надо, в задании указано соседних

	vector<double>::iterator ub, lb, prev;
	if (num >= *(v.end()-1)) {
		a = b = v.size();
		return;
	}
	ub = upper_bound(v.begin(), v.end(), num);
	lb = lower_bound(v.begin(), v.end(), num);
	prev = lb - 1;
	if (abs(*prev - num) <= 0.1) {
		a = b = lb - v.begin() - 1;
	}
	else if (lb == ub) {
		a = lb - v.begin() - 1;
		b = lb - v.begin();
	}
}
