#include<stdio.h>
#include<string.h>

int main(){
	FILE *f;
	int a[50], b[50];
	int n=4;
	
	f=fopen("C:\\Users\\Admin\\Desktop\\vidu.txt","w+");
	if(f=NULL) printf("ko co file");
	for(int i=0;i<n;i++){
	printf("nhap so vao: ");
	scanf("%d",&a[i]);
	//fprintf(f, "%d", &i);
	}
	fprintf(f, "%d", a);
	fclose(f);
	
	f=fopen("C:\\Users\\Admin\\Desktop\\DAYSO.IN.txt","r");
//	for(int i=0;i<n;i++){
//	fscanf(f, "%d", &i);
//	printf("%d",i);
//	}
    fscanf(f, "%d", a);
    for(int i=0;i<n;i++){
    	printf("%d",a[i]);
    	}
	fclose(f);
	
	return 0;
	
}
