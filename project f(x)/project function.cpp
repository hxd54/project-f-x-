
	cout<<"Area of solids"<<endl;
	cout<<"1.rectangle"<<endl;
	cout<<"2.circle"<<endl;
	cout<<"3.triangle"<<endl;
	cout<<"4.square"<<endl;
	cout<<"5.cuboid"<<endl;
	cout<<"enter the number corresponding to your choice:"<<endl;
	cin>>number;
	switch(number) {
		case 1 :
			cout<<"enter length= "; cin>>metric[0];
			cout<<"enter width= "; cin>>metric[1];
			cout<<"length entered: "<<metric[0]<<endl;
			cout<<"width entered: "<<metric[1]<<endl;
			
			rect = metric[0]*metric[1];
			cout<<"area of rectangle: "<<rect<<endl;
			break;
			
			case 2 :
			cout<<"enter radius= "; cin>>metric[2];
			cout<<"radius entered: "<<metric[2]<<endl;
			circ = metric[2]*PI;
			cout<<"area of circle: "<<circ<<endl;
			break;
			
			case 3 :
			cout<<"enter base= "; cin>>metric[3];
			cout<<"enter height= "; cin>>metric[4];
			cout<<"base entered: "<<metric[3]<<endl;
			cout<<"height entered: "<<metric[4]<<endl;
			triang = (metric[3]*metric[4])/2;
			cout<<"area of triangle: "<<triang<<endl;
			break;
			
			case 4 :
			cout<<"enter side= "; cin>>metric[5];
			cout<<"side entered: "<<metric[5]<<endl;
			sqr = pow(metric[5],2);
			cout<<"area of square: "<<sqr<<endl;
			break;
			
			case 5 :
			cout<<"enter length= "; cin>>metric[0];
			cout<<"enter width= "; cin>>metric[1];
			cout<<"enter height= "; cin>>metric[4];
			cout<<"length entered: "<<metric[0]<<endl;
			cout<<"width entered: "<<metric[1]<<endl;
			cout<<"height entered: "<<metric[4]<<endl;
			cuboid = metric[0]*metric[1]*metric[4];
			cout<<"area of cuboid: "<<cuboid<<endl;
			break;
				
			DEFAULT :
				cout<<"number entered not valid"<<endl;			
	}
	
	
	return 0;
}
