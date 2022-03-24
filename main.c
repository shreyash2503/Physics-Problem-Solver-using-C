# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>

double Electricity();
double oscillation();
double Wavelength();
double Energy();
double Bohr_Hydrogen_Atom();

float workdone()
{
    float heat,work,internalenergy;
    printf("   Enter the value of Heat=");
    scanf("%f",&heat);
    printf("   Enter the change in internal energy=");
    scanf("%f",&internalenergy);
    work=heat-internalenergy;     //1st law of thermodynamics
    printf("   Work done by the system=%fjoules\n",work);
}

float efficiency_of_a_process()
{
    float efficiency,heat1,work1;
    printf("   Enter the work done=");
    scanf("%f",&work1);
    printf("   Enter the heat supplied=");
    scanf("%f",&heat1);
    efficiency=(work1/heat1)*100;
    printf("   Efficiency of the process based on work done by the system and heat supplied=%f\n",efficiency);
}

float number_of_moles()
{
    float moles,pressure,temperature,volume;
    printf("   Enter pressure=");
    scanf("%f",&pressure);
    printf("   Enter temperature=");
    scanf("%f",&temperature);
    printf("   Enter volume=");
    scanf("%f",&volume);
    moles=(pressure*volume)/(8.314*temperature);  //gas equation
    printf("   No. of moles present=%f\n",moles);
}

float thermal_resistance_in_series()
{
    float equivalent_resistance,r[100];
    int i,n;
    printf("   Enter the number of resistances=");
    scanf("%d",&n);
    printf("   Enter the values=");
    for(i=0;i<n;i++)
    {
        printf("R%d=",i+1);
        scanf("%f",&r[i]);
    }
    for(i=0;i<n;i++)
    equivalent_resistance+=r[i];
    printf("   Equivalent thermal resistance of %d rods in series=%fohms\n",n,equivalent_resistance);
}

float absorptive_power()
{
    float a,b,c;
    printf("   Enter the energy absorbed=");
    scanf("%f",&a);
    printf("   Enter energy incident=");
    scanf("%f",&b);
    c=(a/b);
    printf("   Absorptive power of the body=%f\n",c);
}

float entropy_change()
{
    float q1,q2,temp,entropy;
    printf("   Enter initial energy=");
    scanf("%f",&q1);
    printf("   Enter final energy=");
    scanf("%f",&q2);
    printf("   Enter temperature=");
    scanf("%f",&temp);
    entropy=(q2-q1)/temp;
    system("cls");    //2nd law of thermodynamics
    printf("   The entropy change in the system=%fJ/k\n",entropy);
}

int main(){
   // int c;
    //scanf("%d",&c);
    //if(c==1){

   // system("E:\\real\\main.exe");
    
   // }
int x,y;
printf(".................................Welcome to Physics problem solver...........................\n");
printf("");
printf("   1.Electricity\n");
printf("\n");
printf("   2.Oscillations\n");
printf("\n");
printf("   3.Heat and Thermodynamics\n");
printf("\n");
printf("   4.Modern Physics\n");
printf("\n");


printf("   Choose a Topic from above according to serial number or enter 'exit' to quit::");
scanf("%d",&x);
if(x==1){
    system("cls");
    Electricity();
}
else if(x==2){
    system("cls");
    oscillation();
}
else if(x==3){
    system("cls");
    int ch,y;
    do{  
    printf("--------------------------HEAT & THERMODYNAMICS---------------------\n\n");    
    printf("   1.To Calculate Work Done Using 1st Law Of Thermodynamics\n");
    printf("\n");
    printf("   2.To Calculate Efficiency Of A Process\n");
    printf("\n");
    printf("   3.To Calculate Number of Moles Using Gas Equation\n");
    printf("\n");
    printf("   4.To Calculate Thermal Resistance In Series\n");
    printf("\n");
    printf("   5.To Calculate Absorptive Power\n");
    printf("\n");
    printf("   6.To Calculate Entropy Change\n");
    printf("\n");
    printf("   Enter choice according to serial number or press 9 to return to main menu=");
    scanf("%d",&ch);
    printf("--------------------------------------------------------------------\n");
    switch (ch)
    {
    case 1:
    workdone();
    break;
    case 2:
    efficiency_of_a_process();
    break;
    case 3:
    number_of_moles();
    break;
    case 4:
    thermal_resistance_in_series();
    break;
    case 5:
    absorptive_power();
    break;
    case 6:
    entropy_change();
    break;
    case 9:
    system("cls");
    main();
    break;
    default:
    printf("invalid input\n");
    }
    printf("   Press 8 to continue with heat thermo problems or 9 to return to main menu:");
    scanf("%d",&y);
    if (y==9){
            system("cls");
            main();
    }    
}while(y==8);
}



else if (x==4){
    system("cls");
    printf("-----------------Modern Physics------------------\n");
    display:
    printf("   1.Energy\n");
    printf("\n");
    printf("   2.Wavelength\n");
    printf("\n");
    printf("   3.Problems on Bohr atomic model\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("   Enter choice according to serial number or press 9 to return to main menu:");
    scanf("%d",&y);
    system("cls");

    if(y==1){
        system("cls");
        Energy();
        goto display;
    }
    else if(y==2){
        system("cls");
        Wavelength();
        goto display;
    }
    else if(y==3){
        system("cls");
        Bohr_Hydrogen_Atom();
        goto display;
    }
    else if(y==9){
        system("cls");
        main();
    }
    else{
        system("cls");
        printf("Invalid Input\n");
        goto display;
    }   
}
else if(x==5){
    system("E:\\real\\main.exe");
    system("cls");
    main(); 

}




}   

double Electricity(){
double r[100],c[100],n1,n2,i,m,v,P,H,t,R = 0,C = 0;
int k;
int choice;
double input1,input2,input3,input4;
double output;

do
{
    printf("\n-------------------------ELECTRICITY-------------------------");
    printf("\n");
    printf("\n   1.To find Equivalent resistance in series");
    printf("\n");
    printf("\n   2.To find the capacitance of capacitors in series");
    printf("\n");
    printf("\n   3.To find the Voltage using ohms law");
    printf("\n");
    printf("\n   4.To find the Power in electric circuit");
    printf("\n");
    printf("\n   5.To calculate the Heating Effect in the circuit");
    printf("\n");
    printf("\n   6.Find Current\n");
    printf("\n   7.Find Current Density\n");
    printf("\n   8.Resistance Of Wire\n");
    printf("\n   9.Temperature Dependence Of Resistance\n");
    printf("\n   Enter  choice according to serial number or  10 to go back to main menu : ");
    scanf("%d",&choice);
    printf("--------------------------------------------------------------------\n");

    switch(choice){

        case 1 :
        printf("--------------------------Equivalent Resistance-------------------------\n");
        printf("   Enter the number of Resistances :: ");
        scanf("%lf", &n1);

        printf("\n   Enter Value of Each Resistance in Kohm :: ");
        for (k = 0; k < n1; k++) {
        printf("\nR%d : ", k + 1);
        scanf("%lf", &r[k]);
        }

        for (k = 0; k < n1; k++) {
        R = R + r[k];
        }

        printf("\n   Equivalent Series Resistance :: %lf Kohm", R);
        printf("-------------------------------------------------------------\n");
        break;

        case 2 :
            printf("\n--------------------------Equivalent Capacitance-------------------------\n");
            printf("   Enter the number of Capacitors :: ");
            scanf("%lf", &n2);

                printf("\n   Enter Value of Each Capacitor in farad :: ");
                    for (k = 0; k < n2; k++) {
                    printf("\nC%d : ", k+1 );
                    scanf("%lf", &c[k]);
                    }

                    for (k = 0; k < n2; k++)
                    {
                        C = C + (1.0 / c[k]);
                    }


                printf("\n   Equivalent Capacitance of capacitors in series:: %lf F\n", C);
                printf("-------------------------------------------------------------\n");
                break;
        case 3 :
            printf("--------------------------Voltage-------------------------\n");
            printf("\n   Enter the value of Current I :: ");
            scanf("%lf",&i);
            printf("\n   Enter the value of Resistance R :: ");
            scanf("%lf",&m);

            v=i*m;

            printf("\n   The value of the Voltage it volt :: %lf volt\n", v);
            printf("-------------------------------------------------------------\n");
            break;

        case 4 :
            printf("\n   Enter the value of Current I :: ");
            scanf("%lf",&i);
            printf("\n   Enter the value of Resistance R :: ");
            scanf("%lf",&m);

            P=i*i*m;

            printf("\n   The Electric Power in the circuit in Watt :: %lf watt\n", P);
            printf("-------------------------------------------------------------\n");
            break;
            
        case 5:
            printf("--------------------------Heat Generated In Circuit-------------------------\n");
            printf("\n   Enter the value of Current flowing through circuit  :: ");
            scanf("%lf",&i);
            printf("\n   Enter the value of Resistance in the circuit :: ");
            scanf("%lf",&m);
            printf("\n   Enter the time for which the current is flowing :: ");
            scanf("%lf",&t);

            H=i*i*m*t;

            printf("\n   The heat generated in an electric circuit :: %lfjoule\n", H);
            printf("--------------------------------------------------------------------\n");
            break;
        case 6:
        printf("\n   Enter Voltage : ");
        scanf("%lf",&input1);
        printf("\n   Enter Resistance : ");
        scanf("%lf",&input2);
        
        printf("\n   Electric current is : %lf Ampere.",(input1/input2));
        break;
        
        case 7:
        printf("\n   Enter Current In Amp : ");
        scanf("%lf",&input1);
        printf("\n   Enter Cross Sectional Area : ");
        scanf("%lf",&input2);
        printf("\n   Current Density is : %lf Ampere.",(float)(input1/input2));
        break;
        
        case 8:
        printf("\n   Enter Resistivity : ");
        scanf("%lf",&input1);
        printf("\n   Enter Conductivity : ");
        scanf("%lf",&input2);
        printf("   Enter Length Of Wire : ");
        scanf("%lf",&input3);
        printf("\n   Resistivity is : %lf Ohm.",((float)1/input1)*(input3)/input2);
        break;
        
        case 9:
        printf("\n   Enter Resistivity And Temperature : ");
        scanf("%lf %lf",&input1,&input2);
        printf("\n   Enter Temperature : ");
        scanf("%lf",&input3);
        printf("   Temperature Coefficient Of Resistivity : ");
        scanf("%lf",&input4);
        printf("\n   Resistivity At Temperature %d is : %lf.",input3,(input1)*(1+input3*(input3 - input2)));
        break;
        
        }
        if (choice==10){
            system("cls");
            main();
        }
        }while(1);
}
// END OF ELECTRICITY


// START MODERN PHYSICS//

double Energy(){
    double mass;
    double Energy,c = 8.98755*pow(10,16);
    printf("--------------------------Energy-------------------------\n");
    printf("   Enter the mass in kg::");
    scanf("%lf",&mass);
    Energy = mass*c;
    printf("   The value of the Energy is %lf Joules\n",Energy);
    printf("-------------------------------------------------------------\n");
    printf("\n");

}

double Bohr_Hydrogen_Atom(){
    int a;
    int t;
    double r,v,k;
    printf("--------------------------Bohr_Hydrogen_Atom-------------------------\n");

    printf("   Enter the Atomic number hydrogen like atom for which you want to calculate the values::");
    scanf("%d",&a);
    printf("   Choose from below what you want to calculate::\n");
    printf("\n");
    printf("   1.Calculate the radius of the atom\n");
    printf("\n");
    printf("   2.Calculate the greatest possible speed of the electron in that atom\n");
    printf("\n");
    printf("   3.Calculate the kinetic energy of the electron in the atom\n");
    printf("\n");
    printf("   4.Calculate the potential energy of the electron in the atom\n");
    printf("\n");
    printf("   5.To calculate work done\n");
    printf("\n");
    printf("   Enter Here::");
    scanf("%d",&t);
    
    if(t==1){
    r=0.529*a*a;
    printf("   The radius of the entered hydrogen like atom is %lf Anstrong\n",r);
    }

    else if(t==2){
    v=(pow(10,6)*2.19)/a;
    printf("   The maximum velocity of the entered hydrogen like atom is %lf m/s\n",v);
    }

    else if(t==3){
    k=13.6/pow(a,2);
    printf("   The kinetic energy of the electron is %lf eV\n",k);
    }

    else if(t==4){
        printf("   The potential energy of the electron is %lf eV\n",k/2);
        }
        
    else{
        printf("You have not entered a valid choice, Please choose a valid input\n");
       
        Bohr_Hydrogen_Atom();
    }

        

    
}

double Wavelength(){
    float w,v,r=1.097*pow(10,7),k,q;
    int n1,n2;
    printf("--------------------------Wavelength-------------------------\n");
    printf("Enter the principal quantum number of the first orbit from which our electron is going to jump:\n");
    scanf("%d",&n1);
    printf("Enter the principal quantum number of the second orbit\n");
    scanf("%d",&n2);
    w=(pow(n1,2)*pow(n2,2));
    v=(pow(n2,2)-pow(n1,2));
    k=w/v;
    q=k/r;
    printf("The wavelength of the entered principal quantum number is %lf metre\n",q);

}

//End of MODERN PHYSICS

//Wave Function



//int draw(){
    //int a;
    //printf("Enter the value of mass::");
    //scanf("%lf",&a);
    //Energy(a);
    //Bohr_Hydrogen_Atom();
    //Wavelength();
    //int i;
    //double x[]={};
    //double y[]={};
    
    //for(i=0;i<4;i++){
       // x[i]=i;
        //y[i]=pow(x[i],2);

    //}
   // RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();
    //DrawScatterPlot(imageRef,600,400,x,4,y,4);
    //size_t length;
   // double *pngData = ConvertToPNG(&length, imageRef->image);
    //WriteToFile(pngData,length,"t.png");

//}

// START OF OSCILLATION'S
double oscillation(){
int d;
	d = 1;
	do{
	
	int command;
	printf("\n");
	printf("--------------------------Oscillation-------------------------\n");
	printf("\n");
	printf("\t 1.Find the angular frequency.\n");
    printf("\n");
	printf("\t 2.Find the Frequency.\n");
    printf("\n");
	printf("\t 3.Find the Time Period.\n");
    printf("\n");
	printf("\t 4.Find the maximum acceleration.\n");
    printf("\n");
	printf("\t 5.Find the maximum Velocity.\n");
    printf("\n");
	printf("\t 6.Find the Potential Energy. \n");
    printf("\n");
	printf("\t 7.Find the kinetic Energy. \n");
    printf("\n");
	printf("\t 8.Find the Total Energy. \n");
    printf("\n");
	printf("\t 9.Find the time Period of Simple Pendulum.\n\n");
	printf("-------------------------------------------------------------\n");
	printf(" Enter the no. of operation you want to perform or 10 to go back to main menu:");
	scanf("%d",&command);
    system("cls");
	
	if(command==1){
        system("cls");
		float f;
		printf("----------------------Angular frequency----------------------\n");
		printf("\n   Enter the value of frequency:");
		scanf("%f",&f);
		printf("   The value of angular frequency is:%.3f rad/s \n\n", 6.28*f);
		printf("-------------------------------------------------------------\n");
        
	}
	
	else if(command==2){
        system("cls");
		float w;
		printf("------------------------Frequency----------------------------\n");
		printf("\n   Enter the value of angular frequency:");
		scanf("%f",&w);
		printf("   The value of frequency is:%.3f Hz \n\n", w/6.28);
		printf("-------------------------------------------------------------\n");
        
	}
	
	else if(command==3){
        system("cls");
		float f;
		printf("----------------------Time Period----------------------------\n");
		printf("\n   Enter the value of frequency:");
		scanf("%f",&f);
		printf("   The value of Time period is:%.3f sec \n\n", 1/f);
		printf("-------------------------------------------------------------\n");
        
	}
	
	else if(command==4){
        system("cls");
		float w,x;
		printf("---------------------Maximum acceleration-----------------------\n");
		printf("\n   Enter the value of angular frequency:");
		scanf("%f",&w);
		printf("   Enter the value of displacement:");
		scanf("%f",&x);
		float result = w*w*x;
		printf("   The value of Acceleration is:-%.3f m/s^2 \n\n ", result);
		if(x==0){
			printf("At mean position the acceleration is minimum.");
		}
		
		printf("-------------------------------------------------------------\n");	
        
	}
	
	else if(command==5){
        system("cls");
		float w,x,a,v,result;
		printf("------------------------velocity----------------------------\n");
		printf("\n   Enter the value of angular frequency:");
		scanf("%f",&w);
		printf("   Enter the value of amplitude:");
		scanf("%f",&a);
		printf("   Enter the value of displacement:");
		scanf("%f",&x);
        v=pow((pow(a,2)-pow(x,2)),0.5);
		result=w*v;
		printf("   The value of velocity is:%.3f m/s\n\n",result);
		if(result==0){
			printf("   At extrem position the velocity of particle is 0.\n\n");
		}
		else if(x==0){
			printf("   At mean position the velocity of partical is maximum.\n\n");
		}
		printf("-------------------------------------------------------------\n");
        system("cls");
	}
	
	else if(command==6){
        system("cls");
		float m,w,x;
		printf("-----------------------Potential Energy-----------------------\n");
		printf("\n   Enter the value of mass:");
		scanf("%f",&m);
		printf("\n   Enter the value of angular frequency:");
		scanf("%f",&w);
		printf("   Enter the value of displacement:");
		scanf("%f",&x);
		printf("   The value of Potential Energy is:%.3f joule \n\n ",0.5*m*w*w*x*x);
		if(x==0){
			printf("   At mean position potential energy is minimum.\n\n");
			printf("\n");
		}
		printf("-------------------------------------------------------------\n");
        
	}
	
	else if(command==7){
        system("cls");
		float m,w,x,a;
		printf("------------------------Kinetic Energy-----------------------\n");
		printf("\n   Enter the value of mass:");
		scanf("%f",&m);
		printf("\n   Enter the value of angular frequency:");
		scanf("%f",&w);
		printf("   Enter the value of amplitude:");
		scanf("%f",&a);
		printf("   Enter the value of displacement:");
		scanf("%f",&x);
		printf("   The value of Kinetic Energy is:%.3f joule \n\n",0.5*m*w*w*(a*a-x*x));
		if(x==0){
			printf("   At mean position kinetic energy is maximum.\n\n");
		}
		else if(a==x){
			printf("   At extrem position kinetic energy is minimum.\n\n");
		}	
		printf("-------------------------------------------------------------\n");
        
	}
	
	else if(command==8){
        system("cls");
		float m,w,a;
		printf("-----------------------Total Energy--------------------------\n");
		printf("\n   Enter the value of mass:");
		scanf("%f",&m);
		printf("   Enter the value of amplitude:");
		scanf("%f",&a);
		printf("   Enter the value of angular frequency:");
		scanf("%f",&w);
		printf("   The value of total energy is:%.3f joule \n\n",0.5*m*w*a*a);
		printf("   The total energy in oscillation remains constant.\n\n");
		printf("-------------------------------------------------------------\n");
        
	}
	
	else if(command==9){
        system("cls");
		float l,result;
		printf("---------------Time period of Simple pendulum----------------\n");
		printf("\n   Enter the value of length of the string:");
		scanf("%f",&l);
		result = 6.28*pow(l/9.8,0.5);
		printf("   The value of time period of simple pendulum is:%.3f sec \n\n",result);
		printf("-------------------------------------------------------------\n");
        
	}
    else{
        printf("Invalid Input\n");
    }
	
	printf(" If you want to perform more operation enter 1 or enter 10 to exit!");
	scanf("%d",&d);
	printf("-------------------------------------------------------------\n");
    
	}while(d==1);
    system("cls");
    main();
	return 0;

    
}
//END OF OSCILLATION'S
