#include<iostream>
using namespace std;

int main()
{

int Quant,choice;

int Qrooms=0,Qpasta=0,Qberger=0,Qnoodles=0,Qshake=0,Qchicken=0;
int Srooms=0,Spasta=0,Sberger=0,Snoodles=0,Sshake=0,Schicken=0;
int total_rooms=0,total_pasta=0,total_berger=0,total_noodles=0,total_shake=0,total_chicken=0;

cout<<"\n\t Quantity of items we have:";
cout<<"\n Rooms available :";
cin>>Qrooms;
cout<<"\n Quantity of pasta:";
cin>>Qpasta;
cout<<"\n Quantity of berger:";
cin>>Qberger;
cout<<"\n Quantity of noodles:";
cin>>Qnoodles;
cout<<"\n Quantity of shake:";
cin>>Qshake;
cout<<"\n Quantity of chicken-roll:";
cin>>Qchicken;

m:
cout<<"\n\t\t\t Please select from the menu options";
cout<<"\n\n1)Rooms";
cout<<"\n2)Pasta";
cout<<"\n3)Berger";
cout<<"\n4)Noodles";
cout<<"\n5)Shake";
cout<<"\n6)Chicken-roll";
cout<<"\n7) Information regarding sales and collections";
cout<<"\nExit";

cout<<"\n\n Please enter your choice!";
cin>>choice;

switch(choice)
{
	case 1:
		cout<<"\n\n Enter the number of rooms you want";
		cin>>Quant;
		if(Qrooms-Srooms>=Quant)
		{
		
		Srooms=Srooms+Quant;
		total_rooms=total_rooms+Quant*1200;
		cout<<"\n\n\t\t"<<Quant<<" room/rooms have been alloted to you!";
		
	}
	else
	cout<<"\n\n Only"<<Qrooms-Srooms<<" Rooms remaining in hotel";
	break;
	case 2:
		cout<<"\n\n Enter pasta quantity";
		cin>>Quant;
		if(Qpasta-Spasta>=Quant)
		{
		
		Spasta=Spasta+Quant;
		total_pasta=total_pasta+Quant*120;
		cout<<"\n\n\t\t"<<Quant<<" pasta is the order!";
		
	}
	else
	cout<<"\n\nOnly"<<Qpasta-Spasta<<" Pasta remaining in hotel";
	break;
	case 3:
		cout<<"\n\n Enter berger quantity";
		cin>>Quant;
		if(Qberger-Sberger>=Quant)
		{
		
		Sberger=Sberger+Quant;
		total_berger=total_berger+Quant*75;
		cout<<"\n\n\t\t"<<Quant<<" berger is the order!";
		
	}
	else
	cout<<"\n\nOnly"<<Qberger-Sberger<<" Berger remaining in hotel";
	break;
	case 4:
		cout<<"\n\n Enter noodles quantity";
		cin>>Quant;
		if(Qnoodles-Snoodles>=Quant)
		{
		
		Snoodles=Snoodles+Quant;
		total_noodles=total_noodles+Quant*140;
		cout<<"\n\n\t\t"<<Quant<<" noodles is the order!";
		
	}
	else
	cout<<"\n\nOnly"<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
	break;
	
	case 5:
		cout<<"\n\n Enter shake quantity";
		cin>>Quant;
		if(Qshake-Sshake>=Quant)
		{
		
		Sshake=Sshake+Quant;
		total_shake=total_shake+Quant*90;
		cout<<"\n\n\t\t"<<Quant<<" shake is the order!";
		
	}
	else
	cout<<"\n\nOnly"<<Qshake-Sshake<<" Shake remaining in hotel";
	break;
	case 6:
		cout<<"\n\n Enter chicken-roll quaqntity";
		cin>>Quant;
		if(Qchicken-Schicken>=Quant)
		{
		
		Schicken=Schicken+Quant;
		total_chicken=total_chicken+Quant*110;
		cout<<"\n\n\t\t"<<Quant<<" chicken-roll is the order!";
		
	}
	else
	cout<<"\n\nOnly"<<Qrooms-Srooms<<" Chicken-roll remaining in hotel";
	break;
	
	case 7:
	
	cout<<"\n\t\tDetails of sales and collections ";
	cout<<"\n\n Number of rooms we had : "<<Qrooms;
	cout<<"\n\n Number of rooms we gave for rent :"<<Srooms;
	cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
	cout<<"\n\n Total rooms collection for the day : "<<total_rooms;
	
    cout<<"\n\n Number of pastas we had : "<<Qpasta;
	cout<<"\n\n Number of pastas we sold :"<<Spasta;
	cout<<"\n\n Remaining pastas : "<<Qpasta-Spasta;
	cout<<"\n\n Total pastas collection for the day : "<<total_pasta;
	
	 cout<<"\n\n Number of bergers we had : "<<Qberger;
	cout<<"\n\n Number of bergers we sold :"<<Sberger;
	cout<<"\n\n Remaining bergers : "<<Qberger-Sberger;
	cout<<"\n\n Total bergers collection for the day : "<<total_berger;
	
	 cout<<"\n\n Number of noodles we had : "<<Qnoodles;
	cout<<"\n\n Number of noodles we sold :"<<Snoodles;
	cout<<"\n\n Remaining  noodles : "<<Qnoodles-Snoodles;
	cout<<"\n\n Total  noodles collection for the day : "<<total_noodles;
	 
	
	 cout<<"\n\n Number of shakes we had : "<<Qshake;
	cout<<"\n\n Number of shakes we sold :"<<Sshake;
	cout<<"\n\n Remaining  shakes : "<<Qshake-Sshake;
	cout<<"\n\n Total  shakes collection for the day : "<<total_shake;
	 
	  cout<<"\n\n Number of chicken-rolls we had : "<<Qchicken;
	cout<<"\n\n Number of chicken-rolls we sold :"<<Schicken;
	cout<<"\n\n Remaining chicken-rolls  : "<<Qchicken-Schicken;
	cout<<"\n\n Total  chicken-rolls collection for the day : "<<total_chicken;
	
	case 8:
	   exit(0);
	   default:
	   	cout<<"\n Please select the numbers mentioned above!";
	 
	}

goto m;

}


