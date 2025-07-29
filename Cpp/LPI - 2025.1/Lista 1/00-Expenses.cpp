#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

class Despesa {
private:
    string nome;
    float valor;
    string tipoDeGasto;
public:
    Despesa() {
        valor = 0.0;
    }
    string getNome() { return nome; }
    float getValor() { return valor; }
    string getTipoDeGasto() { return tipoDeGasto; }
    void setNome(string n) { nome = n; }
    void setValor(float v) { valor = v; }
    void setTipoDeGasto(string t) { tipoDeGasto = t; }
};

class ControleDeGastos {
private:
    Despesa despesas[100];
public:
    void setDespesa(Despesa d, int pos) {
        if (pos >= 0 && pos < 100) {
            despesas[pos] = d;
        }
    }
    Despesa getDespesa(int pos) {
        if (pos >= 0 && pos < 100) {
            return despesas[pos];
        }
        return Despesa();
    }
    float calculaTotalDeDespesas() {
        float total = 0.0;
        for (int i = 0; i < 100; i++) {
            total += despesas[i].getValor();
        }
        return total;
    }
    float calculaTotalDeDespesas(string tipo) {
        float total = 0.0;
        for (int i = 0; i < 100; i++) {
            if (despesas[i].getTipoDeGasto() == tipo) {
                total += despesas[i].getValor();
            }
        }
        return total;
    }
    bool existeDespesaDoTipo(string tipo) {
        for (int i = 0; i < 100; i++) {
            if (despesas[i].getTipoDeGasto() == tipo) {
                return true;
            }
        }
        return false;
    }
};

string formataValor(float v) {
    ostringstream oss;
    oss << fixed << setprecision(1) << v;
    string s = oss.str();
    size_t pos = s.find('.');
    if (pos != string::npos) {
        s.erase(s.find_last_not_of('0') + 1, string::npos);
        if (!s.empty() && s.back() == '.') {
            s.pop_back();
        }
    }
    return s;
}

int main() {
    ControleDeGastos controle;
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string nome, tipo;
        float valor;
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, tipo);
        Despesa d;
        d.setNome(nome);
        d.setValor(valor);
        d.setTipoDeGasto(tipo);
        controle.setDespesa(d, i);
    }

    string tipoConsulta;
    getline(cin, tipoConsulta);

    if (!controle.existeDespesaDoTipo(tipoConsulta)) {
        cout << "Nenhuma despesa do tipo especificado" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            Despesa d = controle.getDespesa(i);
            if (d.getTipoDeGasto() == tipoConsulta) {
                cout << d.getNome() << ", R$ " << formataValor(d.getValor()) << endl;
            }
        }
    }

    float totalTipo = controle.calculaTotalDeDespesas(tipoConsulta);
    float totalGeral = controle.calculaTotalDeDespesas();
    cout << "Total: " << formataValor(totalTipo) << "/" << formataValor(totalGeral) << endl;

    return 0;
}
