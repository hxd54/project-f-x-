#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int mathsec1, mathsec2, mathsec3, mathsec4, mathsec5, mathsec6, mathsec7;
	float metric[30];
	double mresults[20];
	const double PI = 3.142;
	int mnumber, number;
	int pnumber, physec1, physec2, physec3, physec4, physec5;
    int G = 9.8;
    float values[25];
    double results[15];
    cout<<"welcome to our formula provider app. select a category you want the formula from using numbers\n"<<endl; 
	cout<<"1.math formulas"<<endl;
    cout<<"2.physics formulas\n"<<endl;
    cout<<"enter the number corresponding to your choice: \n";
    cin>>number;
    switch(number){
    	case 1:
   	cout<<"Math formulas"<<endl;
	cout<<"1.Area of solids"<<endl;
	cout<<"2.Powers"<<endl;
	cout<<"3.Percentage, discount, profit & Loss"<<endl;
	cout<<"4.Quadratic Equations"<<endl;
	cout<<"enter the number corresponding to your choice: \n";
	cin>>mnumber;
	switch(mnumber){
		case 1:
	cout<<"Area of solids"<<endl;
	cout<<"1.rectangle"<<endl;
	cout<<"2.circle"<<endl;
	cout<<"3.triangle"<<endl;
	cout<<"4.square"<<endl;
	cout<<"5.cuboid"<<endl;
	cout<<"6.cube"<<endl;
	cout<<"enter the number corresponding to your choice: \n";
	cin>>mathsec1;
	switch(mathsec1) {
		case 1 :
			cout<<"enter length= "; cin>>metric[0];
			cout<<"enter width= "; cin>>metric[1];
			cout<<"length entered: "<<metric[0]<<endl;
			cout<<"width entered: \n"<<metric[1]<<endl;
			
			mresults[0] = metric[0]*metric[1];
			cout<<"area of rectangle: "<<mresults[0]<<endl;
			break;
			
			case 2 :
			cout<<"enter radius= "; cin>>metric[2];
			cout<<"radius entered: "<<metric[2]<<endl;
			mresults[1] = metric[2]*PI;
			cout<<"area of circle: "<<mresults[1]<<endl;
			break;
			
			case 3 :
			cout<<"enter base= "; cin>>metric[3];
			cout<<"enter height= "; cin>>metric[4];
			cout<<"base entered: "<<metric[3]<<endl;
			cout<<"height entered: "<<metric[4]<<endl;
			mresults[2] = (metric[3]*metric[4])/2;
			cout<<"area of triangle: "<<mresults[2]<<endl;
			break;
			
			case 4 :
			cout<<"enter side= "; cin>>metric[5];
			cout<<"side entered: "<<metric[5]<<endl;
			mresults[3] = pow(metric[5],2);
			cout<<"area of square: "<<mresults[3]<<endl;
			break;
			
			case 5 :
			cout<<"enter length= "; cin>>metric[0];
			cout<<"enter width= "; cin>>metric[1];
			cout<<"enter height= "; cin>>metric[4];
			cout<<"length entered: "<<metric[0]<<endl;
			cout<<"width entered: "<<metric[1]<<endl;
			cout<<"height entered: "<<metric[4]<<endl;
			mresults[4] = metric[0]*metric[1]*metric[4];
			cout<<"area of cuboid: "<<mresults[4]<<endl;
			break;
				
				case 6 :
					cout<<"enter side= "; cin>>metric[5];
					cout<<"side entered: "<<metric[5]<<endl;
					mresults[5] = 6*pow(metric[5],2);
					cout<<"area of cube: "<<mresults[5]<<endl;
					break;
					
			DEFAULT :
				cout<<"number entered not valid"<<endl;		
	}
	break;
	
    	case 2:
		cout<<"enter a number to be powered= "; cin>>metric[6];
		cout<<"power= "; cin>>metric[7];
		cout<<"number entered: "<<metric[6]<<endl;
		cout<<"power entered: "<<metric[7]<<endl;
		mresults[6] = pow(metric[6],metric[7]);
		cout<<"results: "<<mresults[6]<<endl;
		break;
		
		case 3:
		cout<<"1.percentage"<<endl;
		cout<<"2.percentage increase and decrease"<<endl;
		cout<<"3.discount"<<endl;
		cout<<"4.commission"<<endl;
		cout<<"5.profit"<<endl;
		cout<<"6.loss"<<endl;
		cout<<"7.percentage profit"<<endl;
		cout<<"8.percentage loss"<<endl;
		cout<<"9.simple interest"<<endl;
		cout<<"enter the number corresponding to your choice: ";
		cin>>mathsec2;
		switch(mathsec2) {
			case 1:
				cout<<"enter number= "; cin>>metric[8];
				cout<<"enter pervalue= "; cin>>metric[9];
				cout<<"number entered: "<<metric[8]<<endl;
				cout<<"pervalue entered: "<<metric[9]<<endl;
				mresults[7] = (metric[8]*100)/metric[9];
				cout<<"percentage: "<<mresults[7]<<endl;
				break; 
			
			case 2:
				cout<<"1.percentage increase"<<endl;
				cout<<"2.percentage decrease"<<endl;
				cout<<"enter the number corresponding to your choice: ";
				cin>>mathsec3;
				switch(mathsec3) {
					case 1:
						cout<<"enter percantage number= "; cin>>metric[10];
						cout<<"enter original quantity= "; cin>>metric[11];
						cout<<"percentage number entered: "<<metric[10]<<endl;
						cout<<"original quantity entered: "<<metric[11]<<endl;
						mresults[8] = ((100+metric[10])*metric[11])/100;
						cout<<"percentage increase: "<<mresults[8]<<"%"<<endl;
						break; 
						
						case 2:
						cout<<"enter percentage number= "; cin>>metric[10];
						cout<<"enter original quantity= "; cin>>metric[11];
						cout<<"percentage number entered: "<<metric[10]<<endl;
						cout<<"original quantity entered: "<<metric[11]<<endl;
						mresults[8] = ((100-metric[10])*metric[11])/100;
						cout<<"percentage increase: "<<mresults[8]<<"%"<<endl;
						break;
				}
						break;
						case 3:
							cout<<"enter original price= "; cin>>metric[12];
							cout<<"enter discount percentage= "; cin>>metric[13];
							cout<<"original price entered: "<<metric[12]<<endl;
							cout<<"discount percentage entered: "<<metric[13]<<"%"<<endl;
							mresults[9] = ((100-metric[13])*metric[12])/100;
						cout<<"discount: "<<mresults[9]<<endl;
						break;
						
						case 4:
							cout<<"enter percentage of commission= "; cin>>metric[14];
							cout<<"enter value of goods sold= "; cin>>metric[15];
							cout<<"percentage of commission entered: "<<metric[14]<<endl;
							cout<<"value of goods entered: "<<metric[15]<<endl;   
							mresults[10] = metric[14]*metric[15];
							cout<<"commission: "<<mresults[10]<<endl;
							break;
						
						case 5: 
						     cout<<"enter sell price= "; cin>>metric[16];
							 cout<<"enter cost price= "; cin>>metric[17];
							 cout<<"sell price entered: "<<metric[16]<<endl;
							 cout<<"cost price entered: "<<metric[17]<<endl;
							 mresults[11] = metric[16]-metric[17];
							 cout<<"profit: "<<endl;
							 break;
							 
					    case 6:
					    	cout<<"enter cost price= "; cin>>metric[16];
							 cout<<"enter sell price= "; cin>>metric[17];
							 cout<<"cost price entered: "<<metric[16]<<endl;
							 cout<<"sell price entered: "<<metric[17]<<endl;
							 mresults[11] = metric[16]-metric[17];
							 cout<<"profit: "<<endl;
							 break;
						case 7:
							cout<<"enter profit= "; cin>>metric[18];
							cout<<"cost price= "; cin>>metric[19];
							cout<<"profit entered: "<<metric[18]<<endl;
							cout<<"cost price entered: "<<metric[19]<<endl;
							mresults[12] = (metric[18]*100)/metric[19];
							cout<<"profit percentage: "<<mresults[12]<<endl;
							break;
							
						case 8:
							cout<<"enter loss= "; cin>>metric[18];
							cout<<"cost price= "; cin>>metric[19];
							cout<<"loss entered: "<<metric[18]<<endl;
							cout<<"cost price entered: "<<metric[19]<<endl;
							mresults[12] = (metric[18]*100)/metric[19];
							cout<<"loss percentage: "<<mresults[12]<<endl;
							break;
							
						case 9:
						cout<<"enter principal= "; cin>>metric[20];
						cout<<"enter rate= "; cin>>metric[21];
						cout<<"enter time= "; cin>>metric[22];
						cout<<"principal entered: "<<metric[20]<<endl;
						cout<<"rate entered: "<<metric[21]<<endl;
						cout<<"time entered: "<<metric[22]<<endl;
						mresults[13] = (metric[20]*metric[21]*metric[22])/100;
						cout<<"simple interest: "<<mresults[13];
						mresults[14] = metric[20]+mresults[13];
						cout<<"amount= "<<mresults[14]<<endl;
						break;
											
		}
		break;
		case 4:
			cout<<"enter value for a= "; cin>>metric[23];
			cout<<"enter value for b= "; cin>>metric[24];
			cout<<"enter value for c= "; cin>>metric[25];
			metric[26] = pow(metric[24],2)-4*metric[23]*metric[25];
			if (metric[26]>0) {
			metric[27] = (-(metric[24])+sqrt(metric[26]))/2*metric[23];
			metric[28] = (-(metric[24])-sqrt(metric[26]))/2*metric[23];
			cout<<"x1 is: "<<metric[27]<<endl;
			cout<<"x2 is: "<<metric[28]<<endl;
			}
			else if (metric[26]=0) {
			metric[27] = (-(metric[24]))/2*metric[23];
			metric[28] = (-(metric[24]))/2*metric[23];
			cout<<"x1 is: "<<metric[27]<<endl;
			cout<<"x2 is: "<<metric[28]<<endl;
			}
			else if (metric[26]<0) {
			cout<<"no real roots"<<endl;
			}
			else {
				cout<<"invalid";
			}
			break;
			
	}
	break;
	
	case 2:
cout<<"Physics Formulas"<<endl;
cout<<"1.Measurements of physical quantities"<<endl;
cout<<"2.Motion"<<endl;
cout<<"3.Work, Power, Energy"<<endl;
cout<<"4.Electrostatics"<<endl;
cout<<"5.ElectroKinetics"<<endl;
cout<<"enter the number corresponding to your choice: ";
cin>>pnumber;
switch(pnumber) {
	case 1 :
		cout<<"1.Density"<<endl;
		cout<<"2.Force"<<endl;
		cout<<"enter the number corresponding to your choice: ";
		cin>>physec1;
		switch(physec1) {
		case 1 :
			cout<<"enter mass= ";
				cin>>values[0];
				cout<<"enter volume= ";
				cin>>values[1];
				cout<<"mass entered: "<<values[1]<<endl;
				results[0] = values[0]/values[1];
				cout<<"density is: "<<results[0]<<endl;
			break;
			
			case 2:
			cout<<"enter mass= ";
				cin>>values[0];
				results[0] = values[0]*G;
				cout<<"Force is: "<<results[1]<<endl;
			break;
		}
		
		break;
		
		case 2:
			cout<<"1.velocity"<<endl;
			cout<<"2.acceleration"<<endl;
			cout<<"3.momentum"<<endl;
			cout<<"enter the number corresponding to your choice: ";
			cin>>physec2;
			
			switch(physec2){
				case 1:
					cout<<"enter distance covered= "<<endl;
					cin>>values[2];
					cout<<"enter time taken= "<<endl;
					cin>>values[3];
					results[2] = values[2]/values[3];
					cout<<"velocity or speed is: "<<results[2]<<endl;
					break;
					case 2:
						cout<<"enter final velocity= "<<endl;
						cin>>values[4];
						cout<<"enter initial velocity= "<<endl;
						cin>>values[5];
						cout<<"enter time taken= "<<endl;
						cin>>values[6];
						results[3] = (values[4]-values[5])/values[6];
						cout<<"acceleration is: "<<results[3]<<endl;
						break;
					case 3:
						cout<<"enter mass= "<<endl;
						cin>>values[0];
						cout<<"enter velocity= "<<endl;
						cin>>values[4];
						results[4] = values[0]*values[4];
						cout<<"momentum is: "<<results[4]<<endl;
						break;
			
		}
		break;
		
		case 3:
			cout<<"1.work"<<endl;
			cout<<"2.power"<<endl;
			cout<<"3.potential energy"<<endl;
			cout<<"4.kinetic energy"<<endl;
			cout<<"5.mechanical energy"<<endl;
			cout<<"enter the number corresponding to your choice: ";
			cin>>physec3;
			switch(physec3) {
			            case 1:
			            	cout<<"enter value of force= "<<endl;
			            	cin>>values[7];
			            	cout<<"enter distance= "<<endl;
			            	cin>>values[2];
			            	results[5] = values[7]*values[2];
			            	cout<<"workdone is: " <<results[5]<<endl;
			            	break;
			            	
			           case 2: 
			                cout<<"enter workdone= "<<endl;
			                cin>>values[8];
			                cout<<"enter enter distance= "<<endl;
			                cin>>values[2];
			                results[6] = values[8]*values[2];
			                cout<<"power is: "<<results[6]<<endl;
			                break;
			                
			           case 3: 
			                cout<<"enter mass= "<<endl;
			                cin>>values[0];
			                cout<<"enter height= "<<endl;
			                cin>>values[9];
			                results[7] = values[0]*G*values[9];
			                cout<<"potential energy is: "<<results[7]<<endl;
			                break;
			                
			           case 4:
			           	    cout<<"enter mass= "<<endl;
			           	    cin>>values[0];
			           	    cout<<"enter velocity= "<<endl;
			           	    cin>>values[4];
			           	    results[8]= (values[0]*pow(values[4],2))/2;
			           	    cout<<"kinetic energy is: "<<results[8]<<endl;
			           	    break;
			           	    
			          case 5:
			          	   cout<<"enter potential energy= "<<endl;
			          	   cin>>values[10];
			          	   cout<<"enter kinetic energy= "<<endl;
			          	   cin>>values[11];
			          	   results[9] = values[10]+values[11];
			          	   	cout<<"mechanical energy is:"<<results[9]<<endl;
			          	   	break;
			   
			}
			
			 break;
			 
			case 4:
				cout<<"elecrostatic force"<<endl;
				cout<<"enter constant k= ";
				cin>>values[12];
				cout<<"enter q1= ";
				cin>>values[13];
				cout<<"enter q2= ";
				cin>>values[14];
				cout<<"enter distance= ";
				cin>>values[15];
				results[10] = (values[12]*values[13]*values[14])/pow(values[15],2);
				cout<<"electrostatic force is: "<<results[10]<<"C/s"<<endl;
				break;
				
			case 5:
				cout<<"1.potential difference(ohm's law)"<<endl;
				cout<<"2.current"<<endl;
				cout<<"3.resistance"<<endl;
				cout<<"enter the number corresponding to your choice: ";
				cin>>physec4;
				switch(physec4){
					case 1:
						cout<<"enter current= "<<endl;
						cin>>values[16];
						cout<<"enter resistance= "<<endl;
						cin>>values[17];
						results[11] = values[16]*values[17];
						cout<<"potential difference = "<<results[11]<<"V"<<endl;
						break;
						
					case 2: 
					cout<<"enter voltage= "<<endl;
					cin>>values[18];
					cout<<"enter resistance= "<<endl;
					cin>>values[19];
					results[12] =  values[18]/values[19];
					cout<<"current = "<<results[12]<<"A"<<endl;
					break;
					
					case 3:
						cout<<"enter potential difference= "<<endl;
						cin>>values[20];
						cout<<"enter current= "<<endl;
						cin>>values[21];
						results[13] = values[20]/values[21];
						cout<<"resistance is: "<<results[13]<<endl;
						break;
						
						
				}
				
			}
			
			break;
	}
		cout<<"----------------------------------------------"<<endl;
	cout<<"--  HAXDEV54  --  KION</>  --  HUGHO  --"<<endl;
	cout<<"--------------- ALL RIGHTS RESERVED -----------\n"<<endl;
		
	return 0; 
}
