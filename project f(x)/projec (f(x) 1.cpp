#include<iostream>
#include<cmath>
using namespace std;
int main() {
int number, physec1, physec2, physec3, physec4, physec5;
const double G = 9.8;
float values[25];
float results[15];
cout<<"Physics Formulas"<<endl;
cout<<"1.Measurements of physical quantities"<<endl;
cout<<"2.Motion"<<endl;
cout<<"3.Work, Power, Energy"<<endl;
cout<<"4.Electrostatics"<<endl;
cout<<"5.ElectroKinetics"<<endl;
cout<<"enter the number corresponding to your choice"<<endl;
cin>>pnumber;
switch(pnumber) {
	case 1 :
		cout<<"1.Density"<<endl;
		cout<<"2.Force"<<endl;
		cout<<"enter the number corresponding to your choice"<<endl;
		cin>>physec1;
		switch(physec1) {
		case 1 :
			cout<<"enter mass= ";
				cin>>values[0];
				cout<<"enter volume= ";
				cin>>values[1];
				results[0] = values[0]/values[1];
				cout<<"density is: "<<results[0];
			break;
			
			case 2:
			cout<<"enter mass= ";
				cin>>values[0];
				results[0] = values[0]*G;
				cout<<"Force is: "<<results[1];
			break;
		}
		
		break;
		
		case 2:
			cout<<"1.velocity"<<endl;
			cout<<"2.acceleration"<<endl;
			cout<<"3.momentum"<<endl;
			cout<<"enter the number corresponding to your choice"<<endl;
			cin>>physec2;
			
			switch(physec2){
				case 1:
					cout<<"enter distance covered"<<endl;
					cin>>values[2];
					cout<<"enter time taken"<<endl;
					cin>>values[3];
					results[2] = values[2]/values[3];
					cout<<"velocity or speed is: "<<results[2]<<endl;
					break;
					case 2:
						cout<<"enter final velocity"<<endl;
						cin>>values[4];
						cout<<"enter initial velocity"<<endl;
						cin>>values[5];
						cout<<"enter time taken"<<endl;
						cin>>values[6];
						results[3] = (values[4]-values[5])/values[6];
						cout<<"acceleration is: "<<results[3]<<endl;
						break;
					case 3:
						cout<<"enter mass"<<endl;
						cin>>values[0];
						cout<<"enter velocity"<<endl;
						cin>>values[4];
						results[4] = values[0]*values[4];
						cout<<"momentum is: "<<results[4]<<endl;
						break;
			
		}
		
		case 3:
			cout<<"1.work"<<endl;
			cout<<"2.power"<<endl;
			cout<<"3.potential energy"<<endl;
			cout<<"4.kinetic energy"<<endl;
			cout<<"5.mechanical energy"<<endl;
			cout<<"enter the number corresponding to your choice"<<endl;
			cin>>physec3;
			switch(physec3) {
			            case 1:
			            	cout<<"enter value of force"<<endl;
			            	cin>>values[7];
			            	cout<<"enter distance"<<endl;
			            	cin>>values[2];
			            	results[5] = values[7]*values[2];
			            	cout<<"workdone is: " <<results[5]<<endl;
			            	break;
			            	
			           case 2: 
			                cout<<"enter workdone"<<endl;
			                cin>>values[8];
			                cout<<"enter enter distance"<<endl;
			                cin>>values[2];
			                results[6] = values[8]*values[2];
			                cout<<"power is: "<<results[6]<<endl;
			                
			           case 3: 
			                cout<<"enter mass"<<endl;
			                cin>>values[0];
			                cout<<"enter height"<<endl;
			                cin>>values[9];
			                results[7] = values[0]*G*values[9];
			                cout<<"potential energy is: "<<results[7]<<endl;
			                break;
			                
			           case 4:
			           	    cout<<"enter mass"<<endl;
			           	    cin>>values[0];
			           	    cout<<"enter velocity"<<endl;
			           	    cin>>values[4];
			           	    results[8]= (values[0]*pow(values[4],2))/2;
			           	    cout<<"kinetic energy is: "<<results[8]<<endl;
			           	    break;
			           	    
			          case 5:
			          	   cout<<"enter potential energy"<<endl;
			          	   cin>>values[10];
			          	   cout<<"enter kinetic energy"<<endl;
			          	   cin>>values[11];
			          	   results[9] = values[10]+values[11];
			          	   	cout<<"mechanical energy is:"<<results[9]<<endl;
			          	   	break;
			   
			}
			
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
				cout<<"electrostatic force is: "<<results[10]<<"C/s";
				break;
				
			case 5:
				cout<<"1.potential difference(ohm's law)"<<endl;
				cout<<"2.current"<<endl;
				cout<<"3.resistance"<<endl;
				cout<<"enter the number corresponding to your choice"<<endl;
				cin>>physec4;
				switch(physec4){
					case 1:
						cout<<"enter current"<<endl;
						cin>>values[16];
						cout<<"enter resistance"<<endl;
						cin>>values[17];
						results[11] = values[16]*values[17];
						cout<<"potential difference = "<<results[11]<<"V";
						break;
						
					case 2: 
					cout<<"enter voltage"<<endl;
					cin>>values[18];
					cout<<"enter resistance"<<endl;
					cin>>values[19];
					results[12] =  values[18]/values[19];
					cout<<"current = "<<results[12]<<"A";
					break;
					
					case 3:
						cout<<"enter potential difference"<<endl;
						cin>>values[20];
						cout<<"enter current"<<endl;
						cin>>values[21];
						results[13] = values[20]/values[21];
						cout<<"resistance is: "<<results[13];
						break;
						
						
				}
			}
		
return 0;
}


