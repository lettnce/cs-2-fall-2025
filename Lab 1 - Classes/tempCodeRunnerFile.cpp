cout << "===== Testing Rectangle Class =====\n";
    Rectangle r(4.0, 5.0);
    r.print();
    cout << "Is square? " << (r.isSquare() ? "Yes" : "No") << endl;
    r.scale(2.0);
    r.print();