#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void main_menu();
class Owner
{                                                                
	protected:
		string owner_name;
		string owner_cnic;
		long long int owner_number;
		string owner_location;
		string owner_city;
		string owner_area;
	public:
		Owner()
		{
			owner_name = "none";
		    owner_cnic= '0';
            owner_number =0;
		    owner_location = "none";
		    owner_city = "none";
		    owner_area = "none";
		}
		
};
class Vehicle:public Owner
{
	public:
		string name;
		string color;
		int engine;
		string transmission;
	    string reg_city;
	    int reg_year;
	    int driven_distance;
	    int price;
	    string assembly;
	    string fuel;
	    
	    Vehicle()
	    {
	    	name = "none";
		    color = "none";
		    engine = 0;
		    transmission = "none";
	        reg_city = "none";
	        reg_year = 0;
	        driven_distance;
	        price = 0;
	        assembly = "none";
	        fuel = "none";
	        
		}
		~Vehicle(){}
		void buy_vehicle();
		void sell_vehicle();
		friend void deleteData();
		friend void updateData();
};

void Vehicle::buy_vehicle()          // Buy fucntion
{
	try
	{
		system("cls");
		int x;
		cout<<"|Buy Vehicle|\n\n\n\t1. Car\n\t2. Bike\n\t3. Exit\n\n\tChoose any action: ";
		cin>>x;
		if(x==1)
		{
			system("cls");
			int z,i=1;
		    ifstream input("data//Car Names.txt");
		    cout<<"|Available Cars|\n\n";
		    while(input>>name)
		    {
		    	cout<<"\n\t"<<i<<". "<<name;
		 	    i++;
		    }
		    cout<<"\n\n\tChoose a Car: ";
		    cin>>z;
		    system("cls");
		    input.close();
		    ifstream read("data//Car Specifications.txt");
		    int j=1;
		    while(read>>owner_name>>owner_cnic>>owner_number>>owner_location>>name>>color>>engine>>transmission>>assembly>>fuel>>reg_city>>reg_year>>driven_distance>>price)
		    {
		 	    if(j==z) 
				 break;
		 	    j++;
		    }
		    cout<<'|'<<name<<"|\n\n\n\tOwner Details:\n\n\tName: "<<owner_name<<"\n\tCNIC: "<<owner_cnic<<"\n\tContact Number: 0"<<owner_number
		    <<"\n\tLocation: "<<owner_location;
		    cout<<"\n\n\tCar Specifications:\n\n\tColor: "<<color<<"\n\tEngine: "<<engine<<"cc\n\tFuel: "<<fuel<<"\n\tTransmission: "<<
		    transmission<<"\n\tAssembly: "<<assembly<<"\n\tRegistration City: "<<reg_city<<"\n\tRegistration Year: "<<reg_year
		    <<"\n\tDriven Distance: "<<driven_distance<<" km\n\n\tPrice: "<<price<<'k';
			
		    read.close();
		    while(true)
		    {
			    try
			    {
			    	char x;
				    cout<<"\n\n\n\n\tPress[1] to return to Buying Page , Press[2] to return to Main Menu , Press[0] to exit";
				    x=getch();
				    if(x=='1')
				    {
					    system("cls");
				   	    buy_vehicle();
				    }
			        else if(x=='2')
				    {
				    	system("cls");
					    main_menu();
				    }
				    else if(x=='0')
				    {
				    	system("cls");
				    	exit(0);
					} 
					else
					throw x;   
				}
				catch(char n)
				{
					cout<<"\n\n\t\aYou chose an invalid option , try again!";
				    _sleep(2500);
				}
			}
		   
		   
		
		}
		else if(x==2)
		{
			system("cls");
			int z,i=1;
		    ifstream fin("data//Bike Names.txt");
		    cout<<"|Available Bikes|\n\n";
		    while(fin>>name)
		    {	
		 	    cout<<"\n\t"<<i<<". "<<name;
		 	    i++;
		    }
		    cout<<"\n\n\tChoose a bike: ";
		    cin>>z;
		    system("cls");
		    fin.close();
		    ifstream fin2("data//Bike Specifications.txt");
		    int j=1;
		    while(fin2>>owner_name>>owner_cnic>>owner_number>>owner_location>>name>>color>>engine>>reg_city>>reg_year>>driven_distance>>price)
		    {
		 	    if(j==z)
		 	    break;
		 	    j++;
		    }
		    cout<<'|'<<name<<"|\n\n\n\tOwner Details:\n\n\tName: "<<owner_name<<"\n\tCNIC: "<<owner_cnic<<"\n\tContact Number: 0"<<owner_number
		    <<"\n\tLocation: "<<owner_location;
		    cout<<"\n\n\tBike Specifications:\n\n\tColor: "<<color<<"\n\tEngine: "<<engine<<"cc\n\tRegistration City: "<<reg_city
		    <<"\n\tRegistration Year: "<<reg_year<<"\n\tDriven Distance: "<<driven_distance<<" km\n\n\tPrice: "<<price<<'k';
			
		    fin2.close();
		    while(true)
			{
				try
				{
					char y;
				    cout<<"\n\n\n\n\tPress[1] to return to Buying Page , Press[2] to return to Main Menu , Press[0] to exit";
				    y=getch();
				    if(y=='1')
				    {
					    system("cls");
				   	    buy_vehicle();
				    }
			        else if(y=='2')
				    {
				    	system("cls");
					    main_menu();
				    }
				    else if(y=='0')
				    {
				    	system("cls");
				    	exit(0);
					}
					else
					throw y;
				}
				catch(char m)
				{
					cout<<"\n\n\t\aYou chose an invalid option , try again!";
				    _sleep(2500);
				}
			} 
		    
		}
		else if(x==3)
		{
			system("cls");
			exit(0);
		}
		else
		throw x;
	}
	catch(int a)
	{
		cout<<"\n\n\t\aYou chose an invalid option , try again!";
		_sleep(2500);
		buy_vehicle();
	}
	
}

void Vehicle::sell_vehicle()               //Sell fuction
{
	try
	{
		int n;
		cout<<"|Sell Vehicle|\n\n\n\t1. Car\n\t2. Bike\n\t3. Exit\n\n\tChoose any action: ";
		cin>>n;
		if(n==1)
		{
			system("cls");
			cout<<"|Sell Car|\n\n\n  Owner Details: (Note: Use underscore instead of spaces)\n\n\tFull Name: ";
		    cin>>owner_name;
		    cout<<"\n\tCNIC: ";
	    	cin>>owner_cnic;
		    cout<<"\n\tContact Number: ";
		    cin>>owner_number;
		    cout<<"\n\tCity: ";
			cin>>owner_city;
			cout<<"\n\tArea or Sector name: ";
			cin>>owner_area;
		    
	    	cout<<"\n\n  Car Specifications:\n\n\tCompany & Model: ";
		    cin>>name;
		    cout<<"\n\tColor: ";
		    cin>>color;
		    cout<<"\n\tEngine: ";
		    cin>>engine;
		    cout<<"\n\tTransmission(Automatic/Manual): ";
		    cin>>transmission;
		    cout<<"\n\tAssembly (Imported/Local): ";
		    cin>>assembly;
		    cout<<"\n\tFuel (Petrol/Diesel/Electric): ";
		    cin>>fuel;
	    	cout<<"\n\tRegistration City: ";
		    cin>>reg_city;
	    	cout<<"\n\tRegistration Year: ";
		    cin>>reg_year;
		    cout<<"\n\tDriven distance: ";
	    	cin>>driven_distance;
	    	cout<<"\n\tPrice: ";
	    	cin>>price;
		
		    ofstream write("data//Car Specifications.txt",ios::app);
		    write<<owner_name<<"  "<<owner_cnic<<"  "<<owner_number<<"  "<<owner_area<<"_"<<owner_city<<"  "<<name<<"  "<<color<<"  "<<engine<<"  "
		    <<transmission<<"  "<<assembly<<"  "<<fuel<<"  "<<reg_city<<"  "<<reg_year<<"  "<<driven_distance<<"  "<<price<<endl;
		
		    write.close();
		    ofstream output("data//Car Names.txt",ios::app);
		    output<<name<<endl;
		    output.close(); 
		    cout<<"\n\tData Saved Successfully !\n\n\n\t";
		    while(true)
		    {
		    	try
			    {
			    	cout<<"Press[1] to Return to Main Menu , Press[0] to Exit ";
				    char l;
				    l=getch();
				    if(l=='1')
				    {
				    	system("cls");
				    	main_menu();
					}
				    else if(l=='0')
				    {
					    system("cls");
					    exit(0);
				    }
				    else 
				    throw l;
				}
				catch(char f)
				{
				    cout<<"\n\n\t\aYou chose an invalid option , try again!";
					_sleep(2500);
				}
			}
		    
	    }
		else if(n==2)
		{
			system("cls");
			cout<<"|Sell Bike|\n\n\n  Owner Details: (Note: Use underscore instead of spaces)\n\n\tFull Name: ";
		    cin>>owner_name;
		    cout<<"\n\tCNIC: ";
	    	cin>>owner_cnic;
		    cout<<"\n\tContact Number: ";
		    cin>>owner_number;
		    cout<<"\n\tCity: ";
			cin>>owner_city;
			cout<<"\n\tArea or Sector name: ";
			cin>>owner_area;
		    
	    	cout<<"\n\n  Bike Specifications:\n\n\tCompany & Model: ";
		    cin>>name;
		    cout<<"\n\tColor: ";
		    cin>>color;
		    cout<<"\n\tEngine: ";
		    cin>>engine;
	    	cout<<"\n\tRegistration City: ";
		    cin>>reg_city;
	    	cout<<"\n\tRegistration Year: ";
		    cin>>reg_year;
		    cout<<"\n\tDriven distance: ";
	    	cin>>driven_distance;
	    	cout<<"\n\tPrice: ";
	    	cin>>price;
		
		    ofstream fout("data//Bike Specifications.txt",ios::app);
		    fout<<owner_name<<'\t'<<owner_cnic<<'\t'<<owner_number<<'\t'<<owner_area<<'_'<<owner_city<<'\t'<<name<<'\t'<<color<<'\t'<<engine<<'\t'
		    <<reg_city<<'\t'<<reg_year<<'\t'<<driven_distance<<'\t'<<price<<endl;
		
		    fout.close();
		    ofstream fout2("data//Bike Names.txt",ios::app);
		    fout2<<name<<endl;
		    fout2.close();
		    cout<<"\n\tData Saved Successfully !\n\n\n\t";  
		    while(true)
		    {
		    	try
		    	{
		    		cout<<"Press[1] to Return to Main Menu , Press[0] to Exit ";
				    char g;
				    g=getch();
				    if(g=='1')
				    {
				    	system("cls");
				    	main_menu();
					}
				    else if(g=='0')
				    {
					    system("cls");
					    exit(0);
				    }
				    else
				    throw g;
				}
				catch(char e)
				{
					cout<<"\n\n\t\aYou chose an invalid option , try again!";
					_sleep(2500);
				}
			}
		    
		    
	    }
	    else if(n==3)
	    {
	    	system("cls");
	    	exit(0);
		}
		else 
		throw n;
	}
	catch(int l)
	{
		cout<<"\n\n\t\aYou chose an invalid option , try again!";
		_sleep(2500);
		sell_vehicle();
	}	                     
}
	
void deleteData()                //Delete function
{
	try
	{
		system("cls");
		string x;
		
		char p;
		string c;
		cout<<"|Delete Data|\n\n\n\t1. Car\n\t2. Bike\n\t3. Exit\n\n\tChoose any action: ";
		cin>>p;
		if(p=='1')
		{
			ifstream read1("data//Car Names.txt");
	    	int k;
		    while(read1>>x)
		    {
			   k++;
		    }
		
		    read1.close();
		    Vehicle r2[k]; 
			system("cls");                       
		    ifstream read2("data//Car Specifications.txt");
			for(int i=0;i<k;i++)
			{
				read2>>r2[i].owner_name>>r2[i].owner_cnic>>r2[i].owner_number>>r2[i].owner_location>>r2[i].name>>r2[i].color>>r2[i].engine>>r2[i].transmission>>r2[i].assembly>>r2[i].fuel>>r2[i].reg_city>>r2[i].reg_year>>r2[i].driven_distance>>r2[i].price;
			 	
			}
			read2.close();
			system("cls");
	    	cout<<"|Delete Data|\n\n\n\tEnter your CNIC: ";
		    cin>>c;
		    string z;
		    int i;
		    for(i=0;i<k;i++)
		    {
			    if(r2[i].owner_cnic==c)
			    {
				    z=r2[i].name ;
				    remove("data//Car Specifications.txt");
		    	    ofstream write1("data//Car Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
				    {
					    if(r2[j].owner_cnic != c)
					    write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].transmission<<" "<<r2[j].assembly<<" "<<r2[j].fuel<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;
				    }
				    write1.close();
				    remove("data//Car Names.txt");
			        ofstream write2("data//Car Names.txt",ios::app);
				    for(int g=0;g<k;g++)
				    {
					    if(z!=r2[g].name)
					    {
						    write2<<r2[g].name<<endl;
					    }
				    }
				    write2.close();
				    break;
		    	}
		    }
		    if(r2[i].owner_cnic!=c)
		    {
		    	cout<<"\n\n\tThis CNIC does not exists in our data!";
		    	while(true)
		    	{
		    		try
			    	{
			    		cout<<"\n\n\tPress[1] to Try Again , Press[2] to return to Main Menu , Press[3] to Exit.....";
			    		char t;
			    		t=getch();
			    		if(t=='1')
			    		deleteData();
			    		else if(t=='2')
			    		main_menu();                        
			    		else if(t=='3')
			    		{
			    			system("cls");
			    			exit(0);
						}
						else
						throw t;
					}
					catch(char k)
					{
						cout<<"\n\n\t\aYou chose an invalid option , try again!";
						_sleep(2500);
					}
				}
		    	
			}
	     	
	    	else
	    	{
	            cout<<"\n\n\tData Deleted Successfully!";
	            while(true)
			    {
			    	try
				    {
				    	cout<<"\n\n\tPress[1] to Return to Main Menu , Press[0] to Exit ";
					    char l;
					    l=getch();
					    if(l=='1')
					    {
					    	system("cls");
					    	main_menu();
						}
					    else if(l=='0')
					    {
						    system("cls");
						    exit(0);
					    }
					    else 
					    throw l;
					}
					catch(char f)
					{
					    cout<<"\n\n\t\aYou chose an invalid option , try again!";
						_sleep(2500);
					}
		        }
		    }
	    }
	    else if(p=='2')
	    {
	    	ifstream read3("data//Bike Names.txt");
	     	int k=0;
		    while(read3>>x)
	    	{
			    k++;
		    }
		
		    read3.close();
		    Vehicle r2[k];
	    	ifstream read4("data//Bike Specifications.txt");
			for(int i=0;i<k;i++)
			{
				read4>>r2[i].owner_name>>r2[i].owner_cnic>>r2[i].owner_number>>r2[i].owner_location>>r2[i].name>>r2[i].color>>r2[i].engine>>r2[i].reg_city>>r2[i].reg_year>>r2[i].driven_distance>>r2[i].price;	
			}
			read4.close();
			system("cls");
	    	cout<<"|Delete Data|\n\n\n\tEnter your CNIC: ";
		    cin>>c;
		    string z;
		    int i;
		    for(i=0;i<k;i++)
		    {
			    if(r2[i].owner_cnic==c)
			    {
				    z=r2[i].name ;
				    remove("data//Bike Specifications.txt");
		    	    ofstream write3("data//Bike Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
				    {
					    if(r2[j].owner_cnic != c)
					    write3<<r2[j].owner_name<<"  "<<r2[j].owner_cnic<<"  "<<r2[j].owner_number<<"  "<<r2[j].owner_location<<"  "<<r2[j].name<<"  "<<r2[j].color<<"  "<<r2[j].engine<<"  "<<r2[j].reg_city<<"  "<<r2[j].reg_year<<"  "<<r2[j].driven_distance<<"  "<<r2[j].price<<endl;
				    }
				    write3.close();
				    remove("data//Bike Names.txt");
			        ofstream write4("data//Bike Names.txt",ios::app);
				    for(int g=0;g<k;g++)
				    {
					    if(z!=r2[g].name)
					    {
						    write4<<r2[g].name<<endl;
					    }
				    }
				    write4.close();
				    break;
		    	}
		    }
		    if(r2[i].owner_cnic!=c)
		    {
		    		cout<<"\n\n\tThis CNIC does not exists in our data!";
		    		while(true)
		    		{
		    			try
		    			{
		    				cout<<"\n\n\tPress[1] to Try Again , Press[2] to return to Main Menu , Press[3] to Exit.....";
				    		char t;
				    		t=getch();
				    		if(t=='1')
				    		deleteData();
				    		else if(t=='2')
				    		main_menu();                        
				    		else if(t=='3')
				    		{
				    			system("cls");
				    			exit(0);
							}
							else
							throw t;
						}
						catch(char e)
						{
							cout<<"\n\n\t\aYou chose an invalid option , try again!";
						    _sleep(2500);
						}
					}
			}
	     
	    	else
	    	{
	    		cout<<"\n\n\tData Deleted Successfully!";
		        while(true)
			    {
			    	try
				    {
				    	cout<<"\n\n\tPress[1] to Return to Main Menu , Press[0] to Exit ";
					    char l;
					    l=getch();
					    if(l=='1')
					    {
					    	system("cls");
					    	main_menu();
						}
					    else if(l=='0')
					    {
						    system("cls");
						    exit(0);
					    }
					    else 
					    throw l;
					}
					catch(char f)
					{
					    cout<<"\n\n\t\aYou chose an invalid option , try again!";
						_sleep(2500);
					}
		        }
	        
			}
	
		}
		else if(p=='3')
		{
			system("cls");
			exit(0);
		}
		else
		throw p;
	}
	catch(char t)
	{
		cout<<"\n\n\t\aYou chose an invalid option , try again!";
		_sleep(2500);
		deleteData();
	}
		
}

void updateData()                        // Update data
{
	try
	{
		system("cls");
		string x;
		
		int p;
		string c;
		cout<<"|Update Data|\n\n\n\t1. Car\n\t2. Bike\n\t3. Exit\n\n\tChoose your Car: ";
		cin>>p;
		if(p>3)
		{
			throw p;
		}
		system("cls");
		cout<<"|Update Data|\n\n\n\tEnter your CNIC: ";
		cin>>c;
		bool cn=false;
		if(p==1)
		{
			ifstream read1("data//Car Names.txt");
			int k=0;
			while(read1>>x)
			{
				k++;
			}
			
			read1.close();
			Vehicle r2[k];
			string n;
			ifstream read2("data//Car Specifications.txt");
			for(int i=0;i<k;i++)
			{
				read2>>r2[i].owner_name>>r2[i].owner_cnic>>r2[i].owner_number>>r2[i].owner_location>>r2[i].name>>r2[i].color>>r2[i].engine>>r2[i].transmission>>r2[i].assembly>>r2[i].fuel>>r2[i].reg_city>>r2[i].reg_year>>r2[i].driven_distance>>r2[i].price;
			 	if(r2[i].owner_cnic==c)
			 	{
			 		cn=true;
			 		n=r2[i].name;
				}
				
			}
			read2.close();
			string z;
			if(cn)
			{
				Vehicle r5;
				int opt;
				system("cls");
				cout<<"|Update Data|\n\n\n\t1.Owner Details\n\t2.Car Specification\n\t3.Both\n\n\tWhich data would you like to update: ";
				cin>>opt;
				if(opt==1)
				{
					cout<<"\n\n\n  Owner Details: (Note: Use underscore instead of spaces)\n\n\tFull Name: ";
		            cin>>r5.owner_name;
		            cout<<"\n\tCNIC: ";
	            	cin>>r5.owner_cnic;
		            cout<<"\n\tContact Number: ";
		            cin>>r5.owner_number;
		            cout<<"\n\tCity: ";
	        		cin>>r5.owner_city;
			        cout<<"\n\tArea or Sector name: ";
		         	cin>>r5.owner_area;
		         	remove("data//Car Specifications.txt");
		    	    ofstream write1("data//Car Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
		            {
				        if(r2[j].owner_cnic == c)
				        write1<<r5.owner_name<<" "<<r5.owner_cnic<<" "<<r5.owner_number<<" "<<r5.owner_area<<"_"<<r5.owner_city<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].transmission<<" "<<r2[j].assembly<<" "<<r2[j].fuel<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;		
						else	        
				        write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].transmission<<" "<<r2[j].assembly<<" "<<r2[j].fuel<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;			        
					}
				    write1.close();
				}
				else if(opt==2)
				{
					cout<<"\n\n\n  Car Specifications: (Note: Use underscore instead of spaces)\n\n\tCompany & Model: "<<n;
		            cout<<"\n\n\tColor: ";
		            cin>>r5.color;
		            cout<<"\n\tEngine: ";
		            cin>>r5.engine;
		            cout<<"\n\tTransmission(Automatic/Manual): ";
		            cin>>r5.transmission;
		            cout<<"\n\tAssembly (Imported/Local): ";
	        	    cin>>r5.assembly;
		            cout<<"\n\tFuel (Petrol/Diesel/Electric): " ;
		            cin>>r5.fuel;
	    	        cout<<"\n\tRegistration City: ";
		            cin>>r5.reg_city;
	               	cout<<"\n\tRegistration Year: ";
		            cin>>r5.reg_year;
		            cout<<"\n\tDriven distance: ";
	              	cin>>r5.driven_distance;
	    	        cout<<"\n\tPrice: ";
	    	        cin>>r5.price;
	    	        
	    	        remove("data//Car Specifications.txt");
	    	        ofstream write1("data//Car Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
				    {
		    	        if(r2[j].owner_cnic == c)
		    	        {
			                write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r5.color<<" "<<r5.engine<<" "<<r5.transmission<<" "<<r5.assembly<<" "<<r5.fuel<<" "<<r5.reg_city<<" "<<r5.reg_year<<" "<<r5.driven_distance<<" "<<r5.price<<endl;
					    }
						else
					   	write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].transmission<<" "<<r2[j].assembly<<" "<<r2[j].fuel<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;
			        }
			        write1.close();
					
				}
				else if(opt==3)
				{
					
			        cout<<"\n\n\n  Owner Details: (Note: Use underscore instead of spaces)\n\n\tFull Name: ";
			        cin>>r5.owner_name;
				    cout<<"\n\tCNIC: ";
			    	cin>>r5.owner_cnic;
				    cout<<"\n\tContact Number: ";
				    cin>>r5.owner_number;
				    cout<<"\n\tCity: ";
					cin>>r5.owner_city;
					cout<<"\n\tArea or Sector name: ";
					cin>>r5.owner_area;
				    
			    	cout<<"\n\n  Car Specifications:\n\n\tCompany & Model: "<<n;
				    cout<<"\n\n\tColor: ";
				    cin>>r5.color;
				    cout<<"\n\tEngine: ";
				    cin>>r5.engine;
				    cout<<"\n\tTransmission(Automatic/Manual): ";
				    cin>>r5.transmission;
				    cout<<"\n\tAssembly (Imported/Local): ";
				    cin>>r5.assembly;
				    cout<<"\n\tFuel (Petrol/Diesel/Electric): ";
				    cin>>r5.fuel;
			    	cout<<"\n\tRegistration City: ";
				    cin>>r5.reg_city;
			    	cout<<"\n\tRegistration Year: ";
				    cin>>r5.reg_year;
				    cout<<"\n\tDriven distance: ";
			    	cin>>r5.driven_distance;
			    	cout<<"\n\tPrice: ";
			    	cin>>r5.price;
				
				    remove("data//Car Specifications.txt");
	    	        ofstream write1("data//Car Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
				    {
		    	        if(r2[j].owner_cnic == c)
		    	        {
			                write1<<r5.owner_name<<" "<<r5.owner_cnic<<" "<<r5.owner_number<<" "<<r5.owner_area<<"_"<<r5.owner_city<<" "<<r2[j].name<<" "<<r5.color<<" "<<r5.engine<<" "<<r5.transmission<<" "<<r5.assembly<<" "<<r5.fuel<<" "<<r5.reg_city<<" "<<r5.reg_year<<" "<<r5.driven_distance<<" "<<r5.price<<endl;
					    }
						else
					   	write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].transmission<<" "<<r2[j].assembly<<" "<<r2[j].fuel<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;
			        }
			        write1.close();	
				}
				
				cout<<"\n\n\tData Updated Successfully!";
				_sleep(2500);
				main_menu();
		    }
			else
			{
				cout<<"\n\n\tThis CNIC does not exist in our data!";
		        while(true)
		        {
		        	try
		        	{
		        			cout<<"\n\n\tPress[1] to Try Again , Press[2] to return to Main Menu , Press[3] to Exit.....";
				    		char t;
				    		t=getch();
				    		if(t=='1')
				    		updateData();
				    		else if(t=='2')
				    		main_menu();                        
				    		else if(t=='3')
				    		{
				    			system("cls");
				    			exit(0);
							}
							else 
							throw t;
					}
					catch(char d)
					{
						cout<<"\n\n\t\aYou chose an invalid option , try again!";
	                	_sleep(2500);
					}
				}
			}	
		       
		    
	    }
	    else if(p==2)
	    {
	    	ifstream read1("data//Bike Names.txt");
			int k=0;
			while(read1>>x)
			{
				k++;
			}
			
			read1.close();
			Vehicle r2[k];
			string q;
	    	ifstream read2("data//Bike Specifications.txt");
			for(int i=0;i<k;i++)
			{
				read2>>r2[i].owner_name>>r2[i].owner_cnic>>r2[i].owner_number>>r2[i].owner_location>>r2[i].name>>r2[i].color>>r2[i].engine>>r2[i].reg_city>>r2[i].reg_year>>r2[i].driven_distance>>r2[i].price;
			 	if(r2[i].owner_cnic==c)
			 	{
			 		cn=true;
			 		q=r2[i].name;
				}
				
			}
			read2.close();
			string z;
			if(cn)
			{
				Vehicle r5;
				int opt;
				system("cls");
				cout<<"|Update Data|\n\n\n\t1.Owner Details\n\t2.Bike Specification\n\t3.Both\n\n\tWhich data would you like to update: ";
				cin>>opt;
				if(opt==1)
				{
					cout<<"\n\n\n  Bike Details: (Note: Use underscore instead of spaces)\n\n\tFull Name: ";
		            cin>>r5.owner_name;
		            cout<<"\n\tCNIC: ";
	            	cin>>r5.owner_cnic;
		            cout<<"\n\tContact Number: ";
		            cin>>r5.owner_number;
		            cout<<"\n\tCity: ";
	        		cin>>r5.owner_city;
			        cout<<"\n\tArea or Sector name: ";
		         	cin>>r5.owner_area;
		         	remove("data//Bike Specifications.txt");
		    	    ofstream write1("data//Bike Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
		            {
				        if(r2[j].owner_cnic == c)
				        write1<<r5.owner_name<<" "<<r5.owner_cnic<<" "<<r5.owner_number<<" "<<r5.owner_area<<"_"<<r5.owner_city<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;		
						else	        
				        write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;			        
					}
				    write1.close();
				}
				else if(opt==2)
				{
					cout<<"\n\n\n  Bike Specifications: (Note: Use underscore instead of spaces)\n\n\tCompany & Model: "<<q;
		            cout<<"\n\n\tColor: ";
		            cin>>r5.color;
		            cout<<"\n\tEngine: ";
		            cin>>r5.engine;
	    	        cout<<"\n\tRegistration City: ";
		            cin>>r5.reg_city;
	               	cout<<"\n\tRegistration Year: ";
		            cin>>r5.reg_year;
		            cout<<"\n\tDriven distance: ";
	              	cin>>r5.driven_distance;
	    	        cout<<"\n\tPrice: ";
	    	        cin>>r5.price;
	    	        
	    	        remove("data//Bike Specifications.txt");
	    	        ofstream write1("data//Bike Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
				    {
		    	        if(r2[j].owner_cnic == c)
		    	        {
			                write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r5.color<<" "<<r5.engine<<" "<<r5.reg_city<<" "<<r5.reg_year<<" "<<r5.driven_distance<<" "<<r5.price<<endl;
					    }
						else
					   	write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;
			        }
			        write1.close();
					
				}
				else if(opt==3)
				{
					
			        cout<<"\n\n\n  Owner Details: (Note: Use underscore instead of spaces)\n\n\tFull Name: ";
				    cin>>r5.owner_name;
				    cout<<"\n\tCNIC: ";
			    	cin>>r5.owner_cnic;
				    cout<<"\n\tContact Number: ";
				    cin>>r5.owner_number;
				    cout<<"\n\tCity: ";
					cin>>r5.owner_city;
					cout<<"\n\tArea or Sector name: ";
					cin>>r5.owner_area;
				    
			    	cout<<"\n\n  Bike Specifications:\n\n\tCompany & Model: "<<q;
			
				    cout<<"\n\n\tColor: ";
				    cin>>r5.color;
				    cout<<"\n\tEngine: ";
				    cin>>r5.engine;
			    	cout<<"\n\tRegistration City: ";
				    cin>>r5.reg_city;
			    	cout<<"\n\tRegistration Year: ";
				    cin>>r5.reg_year;
				    cout<<"\n\tDriven distance: ";
			    	cin>>r5.driven_distance;
			    	cout<<"\n\tPrice: ";
			    	cin>>r5.price;
				
				    remove("data//Bike Specifications.txt");
	    	        ofstream write1("data//Bike Specifications.txt",ios::app);
				    for(int j=0;j<k;j++)
				    {
		    	        if(r2[j].owner_cnic == c)
		    	        {
			                write1<<r5.owner_name<<" "<<r5.owner_cnic<<" "<<r5.owner_number<<" "<<r5.owner_area<<"_"<<r5.owner_city<<" "<<r2[j].name<<" "<<r5.color<<" "<<r5.engine<<" "<<r5.reg_city<<" "<<r5.reg_year<<" "<<r5.driven_distance<<" "<<r5.price<<endl;
					    }
						else
					   	write1<<r2[j].owner_name<<" "<<r2[j].owner_cnic<<" "<<r2[j].owner_number<<" "<<r2[j].owner_location<<" "<<r2[j].name<<" "<<r2[j].color<<" "<<r2[j].engine<<" "<<r2[j].reg_city<<" "<<r2[j].reg_year<<" "<<r2[j].driven_distance<<" "<<r2[j].price<<endl;
			        }
			        write1.close();
				    
					
				}
				cout<<"\n\n\tData Updated Successfully!";
				_sleep(2500);
				main_menu();
		    }
			else
			{
				cout<<"\n\n\tThis CNIC does not exist in our data!";
		    	while(true)
		        {
		        	try
		        	{
		        			cout<<"\n\n\tPress[1] to Try Again , Press[2] to return to Main Menu , Press[3] to Exit.....";
				    		char t;
				    		t=getch();
				    		if(t=='1')
				    		updateData();
				    		else if(t=='2')
				    		main_menu();                        
				    		else if(t=='3')
				    		{
				    			system("cls");
				    			exit(0);
							}
							else 
							throw t;
					}
					catch(char d)
					{
						cout<<"\n\n\t\aYou chose an invalid option , try again!";
	                	_sleep(2500);
					}
				}
			}	
	    	
		}
		else if(p==3)
		{
			system("cls");
			exit(0);
		}
		else
		throw p;
	}
	catch(int o)
	{
		cout<<"\n\n\t\aYou chose an invalid option , try again!";
		_sleep(2500);
		updateData();
	}	
}

void main_menu()
{
	system("cls");
	Vehicle r1; 
	int x;
	try
	{
		cout<<"|Main Menu|\n\n\n\t1.Buy a Vehicle\n\t2.Sell a Vehicle\n\t3.Delete Data\n\t4.Update Data\n\t5.Exit\n\n\tChoose any action: ";
		cin>>x;
		if(x==1)
		{
			system("cls");
			r1.buy_vehicle();
			
		}
		else if(x==2)
		{
			system("cls");
			r1.sell_vehicle();
		}
		else if(x==3)
		{
			system("cls");
			deleteData();
		}
		else if(x==4)
		{
			system("cls");
			updateData();
		}
		else if(x==5)
		{
	        system("cls");
			exit(0);	
		}
		else
		throw x;	
	}
	catch(int a)
	{
		cout<<"\n\n\t\aYou chose an invalid option , try again!";
	    _sleep(2500);
		system("cls");
		main_menu();
	}
	
}
int main()
{
	main_menu();
	return 0;
}
