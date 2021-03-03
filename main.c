int main(int argc, char *argv[]) {
	
		int n,gecici,i,j,gecici2,sayac=0,a,b=1,sayac2=1;
		float t,k,m,sayac3=0;
		double s;
		
		printf("Dizinin boyutunu giriniz: ");
		scanf("%d",&n);
		
		int dizi[n],dizi2[n];
			
		for(i=0;i<n;i++){
		printf("%d.degeri giriniz: ",(i+1));
		scanf("%d",&gecici);
		dizi[i]=gecici;
		sayac+=gecici;
		sayac2*=gecici;
		sayac3+=1/(double)gecici;
	}
	
		printf("\n\n");
	for(i=0;i<n;i++)
	printf("%d  ",dizi[i]);
	
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(dizi[i]<dizi[j])
			{
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		
	}
	

	printf("\n");
	for(i=0;i<n;i++)
	printf("%d  ",dizi[i]);

	
	
	printf("\n\n");
	for(i=0;i<n;i++){
						dizi2[i]=0;
						gecici=i;
						while(dizi[i]==dizi[i+1]){
							dizi2[gecici]+=1;
							i++;
						}
						i=gecici;
					}
							gecici=dizi2[0];
						
						for(i=0;i<n;i++){
							if(dizi2[i]>gecici){
								gecici=dizi2[i];
							}
						}
						printf("Dizinin modu: ");
						for(i=0;i<n;i++){
							if(dizi2[i]==gecici){
								printf("%d ",dizi[i]);
							}
						}
	return 0;}
