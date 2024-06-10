#include<stdio.h>

main()
{
	int score;
	printf("Enter your score:");
	scanf("%d",score);
	
	(score<=110 && score>=100)
	        ?printf("your grade is A")
	        :(score<=90 && score>=95)
            ?printf("your grade is B")
	        :(score<=70 && score>=60)
			?printf("your grade is C")
			:(score>=65 && score>=75)
			?printf("your grade is D")
	        :(score>=50 && score>=40)
			?printf("your grade is E")										            
			:(score>=45 && score>=55)
			?printf("your grade is F")
	        :(score>=30 && score>=35);
}