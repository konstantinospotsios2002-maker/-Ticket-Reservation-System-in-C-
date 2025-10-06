#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {int k=0;
char ans[100];
char x[100];
char username[100];
char password[100];
int an; 
int ep;
char surname[100];
int age;
char gender[100];
char name[100];
char san[100];
char saf[100];
int a=0;
// Κύριο loop εισαγωγής - συνεχίζει μέχρι να επιβεβαιωθεί κράτηση (k αυξάνεται) while (k == 0)
while (k==0)
{
// Ζήτηση username
printf("Grapse to username\n ");
scanf("%s",&username);

// Ζήτηση password
printf("Grapse ton kodiko\n");
scanf("%s",&password);
// Έλεγχος προαποφασισμένων username/password (όπως ζήτησε η άσκηση)
if ((strcmp(username,"user1")==0 && strcmp(password,"2020")==0) || (strcmp(username,"u")==0 && strcmp(password,"2020c")==0))
{
	// Εάν ταιριάζουν, εμφανίζουμε μήνυμα επιτυχίας
	printf("Sosta stoixeia\n");
}
else if ((strcmp(username,"user1")!=0 && strcmp(password,"2020")!=0) && (strcmp(username,"u")!=0 && strcmp(password,"2020c")!=0))
{
	// Εάν δεν ταιριάζουν, επαναλαμβάνουμε την εισαγωγή μέχρι να δοθούν σωστά στοιχεία
	while( a==0)
	{
		if (strcmp(username,"user1")==0 && strcmp(password,"2020")==0)
		 {  
		 	break;
		 }
		 if (strcmp(username,"u")==0 && strcmp(password,"2020c")==0)
		 {
		 	
		 	break ;
		 	
		 }
		printf("Grapse to username\n ");
        scanf("%s",&username);

        printf("Grapse ton kodiko\n");
        scanf("%s",&password);
		
	}
	// Όταν δοθούν σωστά στοιχεία, εμφανίζεται μήνυμα
	printf("Sosta stoixeia\n");
	
}
// Ερώτηση αν θα πάρει κατοικίδιο μαζί
printf("Grapse no  an den tha pareis mazi sou katoikidio kai yes an tha pareis\n");
scanf("%s",&x); 
while((strcmp(x,"yes")!=0) && strcmp(x,"no")!=0)
{
	printf("Parakalw katahoriste sosta an tha parete katoikidio me yes kai no an den parete\n");
	scanf("%s",&x);
	if ((strcmp(x,"yes")==0) && strcmp(x,"no")==0 )
	{
		break;
	}
}
if ((strcmp(x,"yes")==0))
{
	printf("Telika tha parete mazi sas katoikidio\n");
}
else if ((strcmp(x,"no")==0))
{
	printf("Telika den tha parete katoikidio\n");
}


// Ζήτηση κωδικού αναχώρησης (π.χ. αεροδρόμιο / στάση)
printf("Grapse tin  anachorisi\n");
scanf("%s",&san);


// Έλεγχος εγκυρότητας επιλογής αναχώρησης (επιτρέπονται μόνο A,L,P,V)
if (strcmp(san,"A")==0 || strcmp(san,"L")==0 || strcmp(san,"P")==0 || strcmp(san,"V")==0 ) 
{
 
	// Εμφάνιση της επιλεγμένης αναχώρησης
		printf("%s\n",&san);
		
	
}
if (strcmp(san,"A")!=0 && strcmp(san,"L")!=0 && strcmp(san,"P")!=0 && strcmp(san,"V")!=0 ) 
{
	
	// Αν η τιμή δεν είναι αποδεκτή, επαναλαμβάνουμε μέχρι να δοθεί σωστή
		while (strcmp(san,"A")!=0 && strcmp(san,"L")!=0 && strcmp(san,"P")!=0 && strcmp(san,"V")!=0 )
		{
			printf("Grapse ksana\n");
			scanf("%s",&san);	
		}
	printf("%s\n",&san);
	  
}
// Ζήτηση κωδικού άφιξης (παρόμοια με αναχώρηση)
printf("Grapse tin  afiksi\n");
scanf("%s",&saf);
// Έλεγχος εγκυρότητας επιλογής άφιξης
if (strcmp(saf,"A")==0 || strcmp(saf,"L")==0 || strcmp(saf,"P")==0 || strcmp(saf,"V")==0 ) 
{
 
	
		printf("%s\n",&saf);
		
	
}
if (strcmp(saf,"A")!=0 && strcmp(saf,"L")!=0 && strcmp(saf,"P")!=0 && strcmp(saf,"V")!=0 ) 
{
	
	
		while (strcmp(saf,"A")!=0 && strcmp(saf,"L")!=0 && strcmp(saf,"P")!=0 && strcmp(saf,"V")!=0 )
		{
			printf("Grapse ksana\n");
			scanf("%s",&saf);	
		}
	printf("%s\n",&saf);
	  
}


// Ζήτηση ημέρας αναχώρησης (αριθμός)
printf("Grapse tin imera anachorisis\n");
scanf("%d",&an);

// Ζήτηση ημέρας επιστροφής (αριθμός)
printf("Grapse tin imera epistrofis\n");
scanf("%d",&ep);
// Έλεγχος: ημερομηνία αναχώρησης πρέπει να είναι μικρότερη από ημερομηνία επιστροφής
if (an<ep)
{
	printf("Sosta stoixeia\n");
}
else if (an>ep)
{
	// Αν είναι αντίστροφα, ζητάμε να εισαχθούν ξανά μέχρι να είναι σωστά
	while(an>ep)
	{
		printf("Grapse pali\n");
		scanf("%d",&an);
		scanf("%d",&ep);
	}
	printf("Sosta stoixeia\n");
}
// Ζήτηση ονόματος επιβάτη
printf("Grapse to onoma sou\n");
scanf("%s",&name);
printf("%s\n",&name);

// Ζήτηση επωνύμου
printf("Grapse to epitheto sou\n");
scanf("%s",&surname);
printf("%s\n",&surname);

// Ζήτηση ηλικίας
printf("Grapse tin ilikia sou\n");
scanf("%d",&age);
printf("%d\n",age);

// Ζήτηση φύλου
printf("Grapse to fylo sou\n");
scanf("%s",&gender);

// Έλεγχος φύλου (αποδεκτά "male" ή "female")
if (strcmp(gender,"male")==0)
{
	printf("%s\n",&gender);
}
else if (strcmp(gender,"female")==0)
{
	printf("%s\n",&gender);
}
else if (strcmp(gender,"male")!=0 && strcmp(gender,"female")!=0)
{
	// Επανάληψη μέχρι να δοθεί αποδεκτή τιμή
	while (strcmp(gender,"male")!=0 && strcmp(gender,"female")!=0)
	{
		scanf("%s",&gender);
	}
	printf("%s\n",&gender);
}

// Επιβεβαίωση ότι όλα τα στοιχεία είναι ορθά (yes/no)
printf("Symfoneite pws ola ta stoixeia sas einai ortha;\n");
scanf("%s",&ans);

// Αν ο χρήστης επιβεβαιώνει, ολοκληρώνουμε τη διαδικασία κράτησης (βγαίνουμε από το loop)
 if (strcmp(ans,"yes")==0)
{
	printf("H krathsh sas epivevaiothike\n");
	k=k+1;// τερματίζει το while
}
else if (strcmp(ans,"yes")!=0)
{
	printf("Akyrosh kratisis\n");
	// Το πρόγραμμα θα επανεκκινήσει την εισαγωγή επειδή k παραμένει 0
	
}
}
// Μετά το loop: υπολογισμός κόστους και αριθμού αποσκευών
int c=0;
float cost=0;
// Αν έχει κατοικίδιο, δικαιούται 4 βαλίτσες και κόστος 60

if ((strcmp(x,"yes")==0))
{
	printf("Telika tha parete mazi sas katoikidio\n");
	printf("Dikaiouste na parete mazi sas 4 valitses mazi me to katoikidio sas!\n");
	cost=60;
	c=4;
}
// Αν δεν έχει κατοικίδιο, δικαιούται 5 βαλίτσες και κόστος 50
else if ((strcmp(x,"no")==0))
{
	printf("Telika den tha parete katoikidio\n");
	printf("Dikaiouste na parete mazi sas 5 valitses!\n");
	cost=50;
	c=5;
}
// Εμφάνιση ηλικίας για έλεγχο τιμών
printf(" H ilikia sas einai %d\n",age);

if (age>=18)
{
	if (strcmp(san,"A")==0)
	{
		if (strcmp(saf,"L")==0)
		{
			cost=cost+(18*2)+1;
			
		}
		else if (strcmp(saf,"P")==0)
		{
			cost=cost+(25.45*2)+1;
			
		}
		else if (strcmp(saf,"V")==0)
		{
			cost=cost+(20*2)+1;
			
		}
		
	}
}
else if (age<18)
{
	if (strcmp(san,"A")==0)
	{
		if (strcmp(saf,"L")==0)
		{
			cost=cost+(13.50*2)+1;
			
		}
		else if (strcmp(saf,"P")==0)
		{
			cost=cost+(20*2)+1;
			
		}
		else if (strcmp(saf,"V")==0)
		{
			cost=cost+(15.50*2)+1;
			
		}
	}
	
}
// Εμφάνιση τελικού κόστους
printf("Cost is %f\n",cost);

// Είσοδος αριθμού κάρτας (απλός έλεγχος 16-ψήφιου με πρώτα ψηφία)
long long int card;
int p;
int b=0;
printf("Parakalo ekhoriste ton 16psifio kodiko\n");
scanf("%lld",&card);

// Έλεγχος εγκυρότητας (απλός - εξετάζουμε το πρώτο ψηφίο)
while (b==0)
{
p =(card/ 1000000000000000);
if (p>=1 && p<=9)
{
	printf("Egkyros kodikos\n");
	b=b+1;
}
else if (p<1 || p>9)
{
	printf("Parakalo prospathiste ksana\n");
	scanf("%lld",&card);
	
}
}
printf("Grapse ton arithmo pou antistoixei sto synoliko poso pou prepei na pliroseis\n");
// Ζήτηση του ποσού που πληρώνει ο χρήστης (εάν είναι ίσο με cost, δίνεται έκπτωση)
float disc;
float w;
scanf("%f",&w);
if (w==cost)
{
	// Εφαρμογή έκπτωσης 5% αν πληρώνει ακριβώς το ποσό
	disc=(cost*5)/100;
	cost=cost-disc;
	printf("To teliko kostos me ekptosi einai %f\n",cost);
}
else if ( w < cost) {
    printf("To poso den einai arketo. Xrwstas akoma %.2f euro.\n", cost - w);
    while(w<cost){
    	printf("Parakalw dwste to synoliko poso pliromis!");
    	scanf("%f",&w);
    	if(w>= cost){
    		 printf("Euxaristoume! H plirwmh oloklhrwthike.\n");
             printf("Ta rest sou einai: %.2f euro\n", w-cost); 
    		break;
		}
	}
}
else {
 float change= w - cost;
    printf("Euxaristoume! H plirwmh oloklhrwthike.\n");
    printf("Ta rest sou einai: %.2f euro\n", change); 
}
printf("Reservation completed here is your is ticket:\n");
  
  printf("\tName:%s\t",&name);       printf("\tSurname:%s\t",&surname);  printf("\tAge:%d\t",age);  printf("\tGender:%s\n",&gender);
  
  printf("\tDeparture date:%d/12/2020\n", an);
  
  printf("\tFrom:%s\t",&san);  printf("\tTo:%s\t",&saf);   printf("\tNo. of Baggages:%d\t",c);   printf("\tPet:%s\n",&x);



// Εκτύπωση επιβεβαιωτικού εισιτηρίου
printf("Reservation completed here is your is ticket:\n");

  printf("\tName:%s\t",&name);       printf("\tSurname:%s\t",&surname);  printf("\tAge:%d\t",age);  printf("\tGender:%s\n",&gender);

  printf("\tReturn date:%d/12/2020\n", ep);
 
   printf("\tFrom:%s\t",&saf);  printf("\tTo:%s\t",&san);   printf("\tNo. of Baggages:%d\t",c);   printf("\tPet:%s\t",&x);


	return 0;
}
