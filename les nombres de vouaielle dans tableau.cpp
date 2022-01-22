 #include<stdio.h>
#define n 9
main(){
	char t[n];
	int i,co=0;
	for(i=0;i<n;i++){
		scanf("%c ",&t[i]);
		if((t[i]=='a')||(t[i]=='i')||(t[i]=='o')||(t[i]=='u')||(t[i]=='e')||(t[i]=='y')||(t[i]=='A')||(t[i]=='I')||(t[i]=='O')||(t[i]=='U')||(t[i]=='E')||(t[i]=='Y')){
			co++;
		}
	}
	printf("le nombre de vouaielle est:%d",co);
}
