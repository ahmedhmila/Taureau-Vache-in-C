#include<stdlib.h>
#include<stdio.h>
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
	
	
	
	
	     
	int toul(long int a){
	char ch[12];	
	itoa(a,ch,10);
	return strlen(ch);		
	}
	
	long int saisie (){
	long int n;
	do{printf(" Donner un nombre entre 100 et 2,147,483,647  OU tous les chiffres sont differents \n\n");
	scanf("%d",&n);
	}
	while((n<100)||(n>2147483647));
	return n ;
	     }

	
	int diffB(int a ){       
	 int d;
	  do{
	        printf(" Quelle diffuculte voulez vous choisir ?\n\n  1- *     Facile macile\n  2- ***   Naadi rohi\n  3- ***** Wasa3 wasa3 sahbi \n");       
	        scanf("%d",&d);
	        switch(d){
			case 1: return a+12; break;
			case 2: return a+7; break;
			case 3: return a+5; break; 
			}}
				while((d<1)||(d>3));
			    }
			    
	int diffS(int a ){       
	 int d;
	  do{
	        printf(" Quelle diffuculte voulez vous choisir ?\n\n  1- *     Facile macile\n  2- ***   Naadi rohi\n  3- ***** Wasa3 wasa3 sahbi \n");       
	        scanf("%d",&d);
	        switch(d){
			case 1: return a+6; break;
			case 2: return a+5; break;
			case 3: return a+4; break; 
			}}
	 while((d<1)||(d>3));
			    }
			    
			    
    void espace(){
		printf("\n");
	    printf("\n");
	 }     
	 
	 
	 
	  void ahla(){
	printf("**********************  Ahla Bik frr ************************************************************************");
	espace();
	espace();
	printf("                        ********   **         **     \n");
	printf("                           **       **       **    \n");
	printf("                           **        **     **           \n");
	printf("                           **         **   **         \n");                              
	printf("                           **     **   ** **             \n");
	printf("                           **     **     *                     \n\n");
	printf("                                                        Taureau Vache par Ahmed Hmila  ");

	espace();
	printf("**************************************************************************************************************");
	}
	
	
	
	void reg(){
		espace();
		printf("\n\n**********************  Comment jouer ? *********************************************************************\n");
		printf(" 1. Tous les chiffres dans le nombre secret doivent etre differents \n");
		printf(" 2. Si dans votre proposition il y a des chiffres du nombre secret, aux bons endroits, ils sont des Taureaux. \n 3. Si dans votre proposition il y a des chiffres du nombre secret, mais pas aux bons endroits, ils sont des Vaches.\n");
		printf("\n*****************************************************************************************************************");
        espace();
	}
	
void  main(){
	
	long int init;
	int length,nl;
	char chx[12];	char chxp[12];
	char *p;
	int i,j;int l,m; bool c,k;int b,u;
	int T,V;T=0;V=0;
	
	ahla();
    reg();
	espace();
    espace();
    do{
    init=saisie();    
	itoa (init,chx,10);
    itoa (init,chxp,10);
    
    espace();
    length=toul(init);
    //louken famma des fazet differents
   
    for (b=1;b<length-1;b++){
    	for(u=b+1;u<length;u++){
		if (chx[u]==chx[b]) {
				do{printf(" vous avez donne un nombre incorrect \n");
					 	
					 	printf("Pour recommencer appuyer sur 0 \n");
			            scanf("%d",&k);
						system("cls");
						main();
				}while (k==0);	}
		
		}	
	}
    
	printf(" La longeur de votre nombre est : %d \n",length);
	   espace();
	    printf("                 **********************************            \n");
   espace();


   	
    printf(" Voulez vous confirmer votre nombre :\n\n******************  %d ******************\n 0 si Oui veuillez passer le pc au 2eme joueur alors \n 1 si Non \n\n",init);
    scanf("%d",&c);
        espace();
  printf("                 **********************************            \n");
  espace();
	}while (c==1);



    
    printf("                 **********************************            \n");
    //mas7a lel écran
 	system("cls");  

    ahla();
    reg();
    
    
	printf("**************************************************************************************************************");
	printf("\n**************************                    Joueur 2                    ************************************\n");
    printf("**************************************************************************************************************");

    
    
	espace();	
    printf(" La longeur du nombre que vous cherchez  est : %d \n",length);
    espace();			 

    if(length>6){nl=diffB(length);}
    else nl=diffS(length);
    espace();
    
	printf("********************** Vous avez %d essais *************************** \n********************** Bonne Chance ya behi!! ************************",nl);
	espace();
	
    p=malloc(length*sizeof(char));
    if (p==NULL)
		{
		printf( " pas assez de mémoire \n" ); 
		system(" pause " );
		}
    
    for (i=1;i<nl;i++){
    		printf(" N'oubliez pas le nombre que vous cherchez est de longeur  %d \n",length);
    		printf(" N'oubliez pas le nombre que tous les nombres doient etre differents   \n");
    		printf(" C'est l'essai No %d  \n Il vous manque %d propositions \n",i,nl-i);
    		printf(" Donnez une proposition : \n");
			scanf("%s",p);

			//3amek l taureau
			for(j=0;j<length;j++){
					if ((chx[j]==p[j]) && j<=length){
						T++;
					    chxp[j]=NULL;
						}}
						
				//okhtna l vache 
					for(l=0;l<length;l++){
						for(m=0;m<length;m++)
						if ((p[l]==chx[m])  ) {
						V++;
						chxp[l]=NULL;
						}
						}

			printf(" Vous avez  %d taureaux \n",T);
	    	printf(" Vous avez  %d Vaches \n",V-T
			); 
			espace();
			printf("                 **********************************            \n");
			V=0;T=0; itoa (init,chxp,10);
			espace();			 
						 
						 
    		if (strcmp(chx,p)==0 && i<=nl){
    			printf(" Felicitations !!! Vous avez trouve la solution: %s en %d essais ",chx,i);
		    	break;
			}
    		
    	else	if ( i==nl-1 && strcmp(chx,p)!=0 ){
    			printf(" Dommage :( :( Vous n'avez pas trouve la solution : %s ",chx);
			break;
		      }	
	}	
}		      
