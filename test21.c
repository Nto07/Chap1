#include <stdio.h>

int main()
{
	int absS1;
	int absS2;

	int ue1S1;
	int ue2S1;

	int ue1S2;
	int ue2S2;

	int m1S1;
	int m2S2;

	bool s1 = false;
	bool s2 = false;
	
	printf("Nombre d'absencs injusitifiées à chaque semestre (S1 S2) :");
	scanf("%d %d", &absS1, &absS2);
	
	printf("Moyenne UE1 UE2 au S1 :");
	scanf("%d %d", &ue1S1, &ue2S1);

	printf("Moyennes UE1 UE2 au S2 : ");
	scanf("%d %d", &ue1S2, &ue2S2);
	
	m1S1 = (ue1S1 + ue1S2) / 2;
	m2S2 = (ue1S2 + ue2S2) / 2;					
	
	printf("Moyenne années : UE1 = %d et UE2 = %d\n", m1S1, m2S2);
	
	if(ue1S1 + ue2S1 >= 12)
	{
		s1 = true;
	}

	if(ue1S2 + ue2S2 >= 12)
	{
		s2 = true;
	}

	if(s1 && s2 && absS1 < 6 && absS2 < 6)
	{
		printf("Décision : Ajournée\n");
	}

	if(absS1 >= 6 || absS2 >= 6)
	{
		printf("Décision : Défaillant\n");
	}						
}