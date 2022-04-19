#pragma once
using namespace std;


void RandomVector(vector<int>& v, int size) {

    vector<int> n(size, 0);
    srand(time(0));
    generate(n.begin(), n.end(), rand);
    for (int i = 0; i < size; i++) {
        v.push_back(n[i]);
    }
}

/*int size = 50000;
    int count = 0;
    vector<int> v(size, 0);
  //  srand(time(0));
    generate(v.begin(), v.end(), rand);
    for (int i = 0; i < size; i++) {
        cout << "v.push_back(" << v[i] << ");" << endl;
        count++;
    }
    cout << count;
    return 0;*/