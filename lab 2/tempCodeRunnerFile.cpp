int a,b,c,d;
    char dummychar;
    cout << "Enter first fraction: ";
    cin >> a >> dummychar >> b;
    cout << "Enter second fraction: ";
    cin >> c >> dummychar >> d;
    int sum;
    sum = (a*d) + (b*c);
    cout << "Sum: " << sum << dummychar << b*d << endl;