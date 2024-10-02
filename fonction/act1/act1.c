#include <stdlib.h>
#include <stdio.h>

int plus(int nombre1, int nombre2){
    
	int a=nombre1 + nombre2;
 return a;}


int moins(int nombre1, int nombre2){
	int a=nombre1 - nombre2;
 return a;}

int multi(int nombre1, int nombre2){
	int a=nombre1 * nombre2;
 return a;}


double divise(int nombre1, int nombre2){
   	if (nombre2==0){
		printf("On ne peut pas divisé par 0");}
	else {
                int a=nombre1 / nombre2;
		return a;}}

double modulo(int nombre1, int nombre2){
        

	if (nombre2==0){
                printf("On ne peut pas divisé par 0");}
        else {
                int a=nombre1 % nombre2;
                return a;}}

long long puissance(int nombre1, int nombre2)
{
	int resulta=1;
  	int compteur=0;
	do{

                resulta=resulta*nombre1;

                compteur=compteur+1;}

                while(compteur<nombre2);

               return resulta;}

long long factoriel(int nombre1) {


int compteur=nombre1;

int resulta=nombre1;

compteur=compteur-1;

while (compteur!=0){
resulta*=compteur;
compteur--;
}
return resulta;}


double sin2(int x,int n)
{
int n1=puissance((-1), n);
int n2=multi(2,n);
int n3=plus(n2,1);
int n4=factoriel(n3);
int n5=puissance(x,n3);
int n6=divise(n1,n4);
int n7=multi(n6,n5);
return n7;}




int main ()
{

	char operateur;

    	int nomb1;

        int nomb2;
        
	char egal;

printf("Quel est votre opérateur?\n");
scanf("%s", &operateur);
printf("Quel est votre premier nombre?\n");
scanf("%d", &nomb1);
printf("Quel est votre deuxième nombre?\n");
scanf("%d", &nomb2);
printf("Appuyé sur '=' pour afficher le résultat.\n");
scanf("%s", &egal);
if (egal=='=') {
if (operateur == '+') {
printf("La réponse est %d.\n", plus(nomb1,nomb2));}

else if (operateur == '-') {
printf("La réponse est %d.\n", moins(nomb1,nomb2));}

else if (operateur == '*') {
printf("La réponse est %d.\n", multi(nomb1,nomb2));}

else if (operateur == '/') {
printf("La réponse est %.2f.\n", divise(nomb1,nomb2));}

else if (operateur == '%') {
printf("La réponse est %.2f.\n", modulo(nomb1,nomb2));}

else if (operateur == 'p') {
printf("La réponse est %lld.\n", puissance(nomb1, nomb2));}

else if (operateur == '!') {
printf("La réponse est %lld.\n", factoriel(nomb1));}

else if (operateur=='~'){
printf("La réponse est %.2f.\n", sin2(nomb1,nomb2));}

else {
	printf("Votre caractère n'est pas valide, veuillez recommencer.\n");}}
else {
printf("Rentrer un caractère valide.\n");}
exit(0);

}
