bool check_ip(string ip){
	int i, cnt = 0;
	string sub;
	while (i = ip.find_first_of('.')){
		cnt += 1;
		sub = ip.substr(0, i);
		if (sub.size() == 0) cnt += 100;
		cout << stoi(sub)<<endl;
		if (stoi(sub) < 0 || stoi(sub) > 255)  cnt += 100;
		if (i == -1) break;
		ip.erase(0, i + 1);
	}
	if (cnt == 4) return true;
	return false;
}
