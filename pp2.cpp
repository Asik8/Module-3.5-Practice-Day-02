#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Cricketer
{
    public:
	int jersey_no;
	string country;
};


int main() {
    Cricketer *dhoni = new Cricketer;
    dhoni->country = "India";
    dhoni->jersey_no = 23;

    Cricketer * kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;
    delete dhoni;
    dhoni = nullptr;
    cout<<kohli->jersey_no<<" "<<kohli->country<<endl;
    delete kohli;
    kohli = nullptr;
    return 0;
}