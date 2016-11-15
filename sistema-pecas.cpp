#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
 int main(){
 	setlocale(LC_ALL, "Portuguese");

 	// opção do usuario
 	int OP=0;
 	char OP2;

 	// para armazenar valor e quantidade
 	float total, quant, vela =130, valvula=800, pistao=80, biela=440, vibre=230, carter=40;
	float totalvela=0,totalvalvula=0,totalpistao=0,totalbiela=0,totalvibre=0,totalcarter=0;

while (OP==0) {


    cout << "                              ¦¦¦¦¦¦¦  .VENDA DE PEÇAS.  ¦¦¦¦¦¦¦"<<endl<<endl<<endl;
 	cout << "1. Vela de ignição (R$130,00)         "  << "2. Válvulas (R$800,00)           " << "3. Pistão (R$80,00)"<< endl<<endl<< "4. Biela (R$440,00)                   "<< "5. Virabrequim (R$230,00)        "<< "6. Cárter (R$40,00)"<< endl <<endl<<endl;
 	cout << "Escolha a peça desejada para mais informações, para isso ultilize o número da peça: ";
	cin >> OP;
	system("cls");
 	cout << endl ;

 while(OP>6){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE O PRODUTO DE 1 A 6 : ";
			cin>>OP;}
			cout << endl;


switch (OP){
		case 1:
		    cout<<"INFORMAÇÃO DAS PEÇAS: (R$130,00) ";
		    cout<<endl;
			cout << "A vela de ignição fornece a centelha que inflama a mistura ar/combustível para que a combustão possa ocorrer . A faísca deve acontecer apenas no momento certo para que as coisas funcionem corretamente."<< endl<< endl;
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "	;
			cin>> OP2;
			system("cls");
			cout << endl;


			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;


			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			totalvela=vela*quant;
			total=totalvela+totalvalvula+totalpistao+totalbiela+totalvibre+totalcarter;
			cout <<"O valor total é: R$" << totalvela<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;
			system("cls");

			}

			if (OP2=='n') {
			OP=0;}
			else { cout<< "o valor total é: R$"<<total;
			}
	break;


		case 2:
            cout<<"INFORMAÇÃO DAS PEÇAS:(R$800,00)";
		    cout<<endl;
			cout << "As válvulas de admissão e escape abrem no momento adequado para deixar ar e combustível entrarem e sair. Note-se que ambas as válvulas estão fechadas durante a compressão e a combustão de modo que a câmara de combustão está vedada."<< endl<< endl;
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";
			cin>> OP2;
			system("cls");
			cout << endl;

			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;


			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			totalvalvula=valvula*quant;
			total=totalvela+totalvalvula+totalpistao+totalbiela+totalvibre+totalcarter;
			cout <<"O valor total é: R$" << totalvalvula<< endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;
			system("cls");}

			if (OP2=='n') {
			OP=0;}
			else { cout<< "o valor total é: R$"<<total;
			}
			break;

		case 3:
            cout<<"INFORMAÇÃO DAS PEÇAS:(R$80,00)";
		    cout<<endl;
			cout << "Um pistão é uma peça cilíndrica de metal que se move para cima e para baixo no interior do cilindro."<< endl<< endl;
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";
			cin>> OP2;
			system("cls");
			cout << endl;

			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;


			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			totalpistao=pistao*quant;
			total=totalvela+totalvalvula+totalpistao+totalbiela+totalvibre+totalcarter;
			cout <<"O valor total é: R$" <<totalpistao<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;
			system("cls");}

			if (OP2=='n') {
			OP=0;}
			else { cout<< "o valor total é: R$"<<total;
			}
			break;

		case 4:
            cout<<"INFORMAÇÃO DAS PEÇAS:(R$440,00)";
		    cout<<endl;
			cout << "A haste que liga o pistão ao eixo. Ele pode rodar em ambas as extremidades de modo que o seu ângulo pode mudar como os movimentos do pistão, rodando o eixo."<< endl<< endl;
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";
			cin>> OP2;
			system("cls");
			cout << endl;

			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;


			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			totalbiela=biela*quant;
			total=totalvela+totalvalvula+totalpistao+totalbiela+totalvibre+totalcarter;
			cout <<"O valor total é: " <<totalbiela<<"R$"<<endl << endl<<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;
			system("cls");}

			if (OP2=='n') {
			OP=0;}
			else { cout<< "o valor total é: R$"<<total;
			}
			break;

		case 5:
		    cout<<"INFORMAÇÃO DAS PEÇAS:(R$230,00) ";
		    cout<<endl;
			cout << "O virabrequim transforma o movimento do pistão para cima e para baixo em movimento circular que faz as rodas do veículo rodarem através do movimento no eixo cardã."<< endl<< endl;
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";
			cin>> OP2;
			system("cls");
			cout << endl;

			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;
			system("cls");}
			cout << endl;


			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			totalvibre=vibre*quant;
			total=totalvela+totalvalvula+totalpistao+totalbiela+totalvibre+totalcarter;
			cout <<"O valor total é: R$" <<totalvibre<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;
			system("cls");}

			if (OP2=='n') {
			OP=0;}
			else { cout<< "o valor total é: R$"<<total;
			}
			break;

		case 6:
		    cout<<"INFORMAÇÃO DAS PEÇAS:(R$40,00)";
		    cout<<endl;
			cout << "O cárter envolve o virabrequim. Ele contém uma certa quantidade de óleo, o qual se acumula no fundo do cárter (cárter de óleo)."<< endl<< endl;
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";
			cin>> OP2;
			system("cls");
			cout << endl;

			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;
			}
			cout << endl;


			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			totalcarter=carter*quant;
			total=totalvela+totalvalvula+totalpistao+totalbiela+totalvibre+totalcarter;
			cout <<"O valor total é: R$" <<totalcarter<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não:  ";
			cin>>OP2;
			system("cls");}

			if (OP2=='n') {
			OP=0;}
			else { cout<< "o valor total é: "<<"R$"<<total;
			}
			break;
	}

  }
}
