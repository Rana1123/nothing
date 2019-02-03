#include<stdio.h>

main()
{
	char A[10],A1[10],A2[10];
	scanf("%s %s %s",&A[10],&A1[10],&A2[10]);
		if(A=="invertebrado"){
			if(A1=="inseto"){
				if(A2=="hematofago") printf("pulga\n");
				else printf("largarta\n");
					}
						else if(A1=="anelideo") {
								if(A2=="hematofago") printf("sanguessuga\n");
								else printf("minhoca\n");
							}
		}
			else if(A=="vertebrado"){
					if(A1=="ave"){
						if(A2=="carnivoro") printf("aguia\n");
						else printf("pomba\n");
						}
							else if(A1=="mamifero") {
									if(A2=="onivoro") printf("homem\n");
									else printf("vaca\n");
							}

				}
}
