#include <iostream>
#include <locale.h>
using namespace std; 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	// opção do usuario
 	int OP=0;
 	char OP2;
 	 
 	// para armazenar valor e quantidade        
 	float total, quant, vela =130, valvula=130, pistao=800, biela=440, vibre=230, carter=40; 
	
while (OP==0) {	
    cout << "                              ¦¦¦¦¦¦¦  .VENDA DE PEÇAS.  ¦¦¦¦¦¦¦"<<endl<<endl<<endl;
 	cout << "1. Vela de ignição (R$130,00)         "  << "2. Válvulas (R$800,00)           " << "3. Pistão (R$80,00)"<< endl<<endl<< "4. Biela (R$440,00)                   "<< "5. Virabrequim (R$230,00)        "<< "6. Cárter (R$40,00)"<< endl <<endl<<endl;
 	cout << "Escolha a peça desejada para mais informaçoes, para isso ultilize o número da peça: ";
	cin >> OP;
 	cout << endl ; 


 while(OP>6){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE O PRODUTO DE 1 A 6 : ";
			cin>>OP;}
			cout << endl;	

 	
switch (OP){
		case 1:
			cout << "Informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "	;
			cin>> OP2;
			cout << endl;

					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			total=vela*quant;
			cout <<"O valor total é: " << total<<"R$"<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;
			
			}
				
			if (OP2=='n') {
			OP=0;}
	break;	
		
			
		case 2:
			cout << "Informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";	
			cin>> OP2;
			cout << endl;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			total=valvula*quant;
			cout <<"O valor total é: " << total<<"R$"<< endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;}
				
			if (OP2=='n') {
			OP=0;}
			break;
			
		case 3:
			cout << "Informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";	
			cin>> OP2;
			cout << endl;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			total=pistao*quant;
			cout <<"O valor total é: " << total<<"R$"<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;}
				
			if (OP2=='n') {
			OP=0;}
			break;
			
		case 4:
			cout << "Informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";	
			cin>> OP2;
			cout << endl;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			total=biela*quant;
			cout <<"O valor total é: " << total<<"R$"<<endl << endl<<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;}
				
			if (OP2=='n') {
			OP=0;}
			break;
			
		case 5:
			cout << "Informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";	
			cin>> OP2;
			cout << endl;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			total=vibre*quant;
			cout <<"O valor total é: " << total<<"R$"<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não: ";
			cin>>OP2;}
				
			if (OP2=='n') {
			OP=0;}
			break;
			
		case 6:
			cout << "Informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: ";	
			cin>> OP2;
			cout << endl;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
			cout << endl;
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			cout << endl;
			total=carter*quant;
			cout <<"O valor total é: " << total<<"R$"<<endl << endl <<"FINALIZAR COMPRA ? Digite 's' para sim e 'n' para não:  ";
			cin>>OP2;}
				
			if (OP2=='n') {
			OP=0;}			
			break;	
	}

  }
}

