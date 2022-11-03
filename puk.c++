#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char r[60], r1[20], r2[20];
	for(int s=1; s<=3; s++)
	{
		cout<<"Privit! U TEBE "<<s<<" SPROBA Z 4";
		cout<<"\n=========\n";
		cout<<"Vvedy 2 ryadky, rozdilivshy ih natiskannyam 'Enter' :\n";
		cin>>r1;
		cin>>r2;
		strcpy(r,r1);
		strcat(r,r2);
		
		int x=strlen(r);
		cout<<"Ob`ednaniy ryadok takiy: \n"<<r<<endl;
		cout<<"Dovzina otrimanogo ryadka: "<<x<<endl;
		
		for(int i=0;i<x;i++)
		{
			if(r[i]=='0'||r[i]=='1'||r[i]=='2'||r[i]=='3'||r[i]=='4'||r[i]=='5'||r[i]=='6'||r[i]=='7'||r[i]=='8'||r[i]=='9')
			{
				r[i]='$';
			}
			else if(i%2!=0)
			{
	     		r[i]='@';
			}
			cout<<"Rezultat roboty: \n";
			cout<<r<<endl;
		}
	}
	cout<<"======\n=====\nSproby zakincheno. The end";
}
