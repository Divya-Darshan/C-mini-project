#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i;
for(i =0;i<10;++i){
	

    int ans;
    srand(time(0));  
    int ran = rand() % 5;  
    
    
    char * a[] = {
        "What is the capital city of India?",
        "What is the currency of India?",
        "What is the official language of the Indian state of Tamil Nadu?",
        "Which festival is known as the Festival of Lights in India?",
        "Who is known as the Iron Man of India?",
        "What is the national animal of India?"
        
    };
    
    
 
 	 printf(" \n\n%s\n\n",a[ran]);  
 
 
 
 
    if (a[ran] == a[0]){
	printf("1. Bengaluru  \a 2. Mumbai \n\n3. New Delhi  \a 4. Kolkata");
	scanf("%d",&ans);
	
		if(ans == 3){
		printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n3. New Delhi \n\n ");
		}
	
	}
	
	
	if (a[ran] == a[1]){
	printf("1. Euro  \a 2. Indian Rupee \n\n3. Peso  \a 4. Yen");
	scanf("%d",&ans);
	
		if(ans == 2){
		printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n2. Indian Rupee\n\n ");
		}
	
	}
	
	if (a[ran] == a[2]){
	printf("1. Kannada  \a 2. Tamil \n\n3. Hindi  \a 4. Bengali");
	scanf("%d",&ans);
	
		if(ans == 2){
		printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n2. Tamil\n\n ");
		}
	
	}
	
	if (a[ran] == a[3]){
	printf("1. Diwali  \a 2. Holi \n\n3. Eid  \a 4. Navratri\n\n");
	scanf("%d",&ans);
	
		if(ans == 1){
		printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n1. Diwali \n\n");
		}
	
	}
	
	if (a[ran] == a[4]){
	printf("1. Sardar Vallabhbhai Patel  \a 2. Bhagat Singh \n\n3. Mahatma Gandhi  \a 4. Jawaharlal Nehru\n\n");
	scanf("%d",&ans);
	
		if(ans == 1){
			printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n1. Sardar Vallabhbhai Patel\n\n ");
		}
	
	}
	
	if (a[ran] == a[5]){
	printf("1. Elephant  \a 2. Bengal Tiger \n\n3. Lion  \a 4. Peacock\n\n");
	scanf("%d",&ans);
	
		if(ans == 2){
			printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n2. Bengal Tiger\n\n ");
		}
	
	}
	
	if (a[ran] == a[6]){
	printf("1. Vikram Sarabhai  \a 2. Dr. A. P. J. Abdul Kalam \n\n3. Satish Dhawan  \a 4. Homi J. Bhabha\n\n");
	scanf("%d",&ans);
	
		if(ans == 2){
			printf("\n\nYour answer was correct!\n\n");
		}
		else{
			printf("\n\nThat was a wrong answer, The answer was \n2.  Dr. A. P. J. Abdul Kalam \n\n");
		}
	
	}
	
	}
	

  
} 
