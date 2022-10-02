//Unit Converter//
#include <iostream>
using namespace std;

int i, length_type, mass_type, l, e, speed_type, time_type;
double j, t, x;


enum mode{length=1, temperature, mass, speed, time};
enum length {km=1, m, cm, mm};
enum mass {kg=1, g, mg};
enum speed {kmh=1, kmm, kms, mph, mpm, mps, cmh, cmm, cms, mmh, mmm, mms};
enum time {year=1, month, week, day, hour, minu, sec};

int main()
{
	cout<<"=====================================================\n\tINTERNATIONAL STANDARD UNIT CONVERTER\n=====================================================\n";
	cout<<"Pick Mode\n1. Length\n2. Temperature\n3. Mass\n4. Speed\n5. Time\nInput:";
	cin>>i;
	
	switch(i){
		case length:
			l=1;
			break;
		case temperature:
			cout<<"\nTemperature\t:Insert number in Celcius\nInput:";
			cin>>j;
			x=j;
			x+=273;
			break;
		case mass:
			l=2;
			break;
		case speed:
			l=3;
			break;
		case time:
			l=4;
			break;
		default:
			cout<<"\nERROR 404\n";
			e=1;
			}
	
	if(l==1){
		cout<<"\nLength\t:Pick the unit you want to convert from\n1. km\n2. m\n3. cm\n4. mm\nInput:";
		cin>>length_type;
		switch(length_type){
			case km:
				cout<<"\nInsert number in km\n";
				cin>>j;
				x=j;
				x*=1000;
				break;
			case m:
				cout<<"\nInsert number in m\n";
				cin>>j;
				x=j;
				break;
			case cm:
				cout<<"\nInsert number in cm\n";
				cin>>j;
				x=j;
				x/=100;
				break;
			case mm:
				cout<<"\nInsert number in mm\n";
				cin>>j;
				x=j;
				x/=1000;
				break;
			default:
				cout<<"\nERROR 404\n";
				e=1;
		}
	}
	
	if(l==2){
		cout<<"\nMass\t:Pick the unit you want to convert from\n1. kg\n2. gr\n3. mg\nInput:";
		cin>>mass_type;
		switch(mass_type){
			case kg:
				cout<<"\nInsert number in kg\n";
				cin>>j;
				x=j;
				break;
			case g:
				cout<<"\nInsert number in g\n";
				cin>>j;
				x=j;
				x/=1000;
				break;
			case mg:
				cout<<"\nInsert number in mg\n";
				cin>>j;
				x=j;
				x/=1000000;
				break;
			default:
				cout<<"\nERROR 404\n";
				e=1;
				
		}
	}
	
	if(l==3){
		cout<<"\nSpeed: Pick the unit you want to convert from\n1. km/h\n2. km/min\n3. km/s\n4. m/h\n5. m/min\n6. m/s\n7. cm/h\n8. cm/min\n9. cm/s\n10. mm/h\n11. mm/min\n12. mm/s\nInput:";
		cin>>speed_type;
		switch(speed_type){
			case(kmh):
				cout<<"\nInsert number in km/h\n";
				cin>>j;
				x=j;
				x*=1000;
				x/=3600;
				break;
			case(kmm):
				cout<<"\nInsert number in km/min\n";
				cin>>j;
				x=j;
				x*=1000;
				x/=60;
				break;
			case(kms):
				cout<<"\nInsert number in km/s\n";
				cin>>j;
				x=j;
				x*=1000;
				break;
			case(mph):
				cout<<"\nInsert number in m/h\n";
				cin>>j;
				x=j;
				x*=1;
				x/=3600;
				break;
			case(mpm):
				cout<<"\nInsert number in m/min\n";
				cin>>j;
				x=j;
				x*=1;
				x/=60;
				break;
			case(mps):
				cout<<"\nInsert number in m/s\n";
				cin>>j;
				x=j;
				x*=1;
				x/=1;
				break;
			case(cmh):
				cout<<"\nInsert number in cm/h\n";
				cin>>j;
				x=j;
				x/=100;
				x/=3600;
				break;
			case(cmm):
				cout<<"\nInsert number in cm/min\n";
				cin>>j;
				x=j;
				x/=100;
				x/=60;
				break;
			case(cms):
				cout<<"\nInsert number in cm/s\n";
				cin>>j;
				x=j;
				x/=100;
				x/=1;
				break;
			case(mmh):
				cout<<"\nInsert number in mm/h\n";
				cin>>j;
				x=j;
				x/=1000;
				x/=3600;
				break;
			case(mmm):
				cout<<"\nInsert number in mm/min\n";
				cin>>j;
				x=j;
				x/=1000;
				x/=60;
				break;
			case(mms):
				cout<<"\nInsert number in mm/s\n";
				cin>>j;
				x=j;
				x/=1000;
				x/=1;
				break;
			default:
				cout<<"\nERROR 404\n";
				e=1;
		}
	}
	
	if(l==4){
		cout<<"\nTime: Pick the unit you want to convert from\n1. Year\n2. Month\n3. Week\n4. Day\n5. Hour\n6. Minute\n7. Second\nInput:";
		cin>>time_type;
		switch(time_type){
			case(year):
				cout<<"\nInsert number in year\n";
				cin>>j;
				x=j;
				x*=365*24*3600;
				break;
			case(month):
				cout<<"\nInsert number in month\n";
				cin>>j;
				x=j;
				x*=30*24*3600;
				break;
			case(week):
				cout<<"\nInsert number in week\n";
				cin>>j;
				x=j;
				x*=7*24*3600;
				break;
			case(day):
				cout<<"\nInsert number in day\n";
				cin>>j;
				x=j;
				x*=24*3600;
				break;
			case(hour):
				cout<<"\nInsert number in hour\n";
				cin>>j;
				x=j;
				x*=3600;
				break;
			case(minu):
				cout<<"\nInsert number in minute\n";
				cin>>j;
				x=j;
				x*=60;
				break;
			case(sec):
				cout<<"\nInsert number in second\n";
				cin>>j;
				x=j;
				x*=1;
				break;
			default:
				cout<<"\nERROR 404\n";
				e=1;
				
		}
	}
	if(e==0)cout<<"Your number "<<j<<" after convertion is "<<x;
	
	return 0;
}
