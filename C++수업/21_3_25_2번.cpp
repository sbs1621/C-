int *num = new int(5);
	double b = 0;
	for (int i = 0; i < 5; i++)
		cin >> num[i];
	for (int i = 0; i < 5; i++)
		b = b + num[i];
	double c = b / 5;
	cout << c;
