#include <iostream>
#include <vector>

using namespace std;

struct item
{
    int valor, dano;
};


int main() {
    int y, d, x, i, vmin = 10001, dmax = 0;
    item v;
    vector<item>a;

    cin >> y;

    for(i=0;i<y;i++) {
        cin >> v.valor;
        a.push_back(v);
        if(v.valor < vmin)
            vmin = v.valor;
    }

    for(i=0;i<y;i++) {
        cin >> d;
        a[i].dano = d;
    }

    cin >> x;

    if(vmin > x) {
        cout << "Yan Pobre";
        return 0;
    }

    for(i=0;i<y;i++) {
        if(a[i].valor <= x && a[i].dano > a[dmax].dano) {
            dmax = i;
        }
    }

    cout << a[dmax].valor << " " << a[dmax].dano;
}