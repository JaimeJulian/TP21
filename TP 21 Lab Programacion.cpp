#include<bits/stdc++.h>
using namespace std;
vector <int> GenerarVector (int n);
int SumarPares (vector <int> V);
int SumarImpares (vector <int> V);
void MostrarVector (vector <int> V);

int main ()
{
	vector <int> V;
	int n, sumPares, sumImpares;
	
	cout<<"Ingresa la cantidad de numeros que va a tener el vector"<<endl;
	cin>>n;
	
	V = GenerarVector (n);
	sumPares = SumarPares (V);
	sumImpares = SumarImpares (V);
	
	cout<<"La suma de los pares es: "<<sumPares<<endl;
	cout<<"La suma de los impares es: "<<sumImpares<<endl;

	MostrarVector (V);
}

vector <int> GenerarVector (int n)
{
	vector <int> Aux;
	int pos, e;
	srand (time(NULL));
	
	for (pos = 0; pos < n; pos++)
	{
		e = rand()%30;	
		Aux.push_back (e);
	}
	
	return Aux;
}

int SumarPares (vector <int> V)
{
	int pos, suma = 0;
	
	for (pos = 0; pos < V.size(); pos++)
	{
		if (V [pos] % 2 == 0)
		{
			suma = suma + V [pos]; 
		}
	}
	return suma;
}

int SumarImpares (vector <int> V)
{
	int pos, suma = 0;
	
	for (pos = 0; pos < V.size(); pos++)
	{
		if (V [pos] % 2 != 0)
		{
			suma = suma + V [pos]; 
		}
	}
	return suma;
}

void MostrarVector (vector <int> V)
{
	int pos;
	
	for (pos = 0; pos < V.size(); pos++)
	{
		cout<<V [pos]<<"/"; 
	}
	cout<<endl;
}
