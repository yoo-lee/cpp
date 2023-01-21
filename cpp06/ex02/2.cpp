int j;
char* c = reinterpret_cast<char*>(&j);
c[0] = 1;
c[1] = 1;
// 257 in little-endian.
cout << "j: " << j << endl;
long addrint = reinterpret_cast<long>(c);
cout << "addrint: " << addrint << endl;
// Note: reinterpret_cast<int>(c); causes a compile error.