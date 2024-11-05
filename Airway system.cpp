#include<iostream>
#include<string>
using namespace std;
void ext()
{
	cout << "\n\n\t\tThanks For Viewing Our Website\n";                     	//Exit To Program(Website)
	cout << "\n\t\tYou Are Exit To KRS Airways\n\n\n";
}
	void Instr()
	{
		cout << "\n\n";
		cout << "\t******************************  INSTRUCTIONS  **********************************" << endl << endl;               //Instructions For Passengers
		cout << "\tFollowing Are The Necessary Instructions For The Passengers:" << endl << endl;
		cout << "\t* Take Care of your Luggage" << endl;
		cout << "\t* Bring your Original CNIC,PassPort And Ticket" << endl;
		cout << "\t* Don't HandOver Your Luggage or Any Thing To Anyone" << endl;
		cout << "\t* Your Luggage Weight Is 50 KG Maximum.Extra 5 KG is Given For Request" << endl << endl << endl;
		cout << "\t**********************************  HELP ****************************************" << endl << endl;                     //Help For Passengers
		cout << "\tIf You Face Any Issue Regarding Our Airlines And You Feel The Problem For Booking Tickets Or Any Other Problems.";
		cout << "\n\tPlease Feel Free To Contact Us. The HelpLine Number is 123-777-0.";
		cout << "\n\tOn The Other Hand,The Email Is Given Below." << endl;
		cout << "\tRegister Your Complain Or Issues For Given E-Mail." << endl;
		cout << "\n\t\t\t\tKRS777Airways@gmail.com\n\n" << endl << endl << endl;
	}

void flightschedule()
{
	cout << "\t\t\tDomestic Flights Schedule\t\t\tInternational Flights Schedule\n\n" << endl;
	cout << "Press 1 For Domestic Flights Schedule " << endl;
	cout << "Press 2 for International Flights Schedule" << endl;
}

int domesticflightSchedule()                                                     //Domestic Flights Schedule
{
	string S1, S2;                                                               //String Type Variables
 	cout << "\n\t\tWelcome To Domestic Flight Schedule" << endl << endl;
	cout << "\tEnter Departure : ";
	cin >> S1;
	cout << "\n";
	cout << "\tEnter Destination : "; 
	cin >> S2;
	cout << "\n";
	if (S1 == "Lahore" && S2 == "Islamabad")                                            //if else if  Statement
	{
		cout << "\n";
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From    |      To       |    Leave     |     Arrive    |   Amount Per Seat  |" << endl;
		cout << "\t|     KRS-120     |    Lahore   |   Islamabad   |    3:00 PM   |     3:40 PM   |      15,000 RS     |" << endl;
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else if (S1 == "Quetta" && S2 == "Karachi")
	{
		cout << "\n";
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From    |      To       |    Leave     |     Arrive    |   Amount Per Seat  |" << endl;
		cout << "\t|     KRS-007     |    Quetta   |    Karachi    |    1:00 PM   |     2:10 PM   |      30,000 RS     |" << endl;
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else if (S1 == "Peshawar" && S2 == "Skardu")
	{
		cout << "\n";
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From    |      To       |    Leave     |     Arrive    |   Amount Per seat  |" << endl;
		cout << "\t|     KRS-917     |   Peshawar  |     Skardu    |    5:00 AM   |     7:05 AM   |      40,000 RS     |" << endl;
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else if (S1 == "Sialkot" && S2 == "Multan")
	{
		cout << "\n";
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From    |      To       |    Leave     |     Arrive    |   Amount Per Seat  |" << endl;
		cout << "\t|     KRS-337     |    Sialkot  |    Multan     |    9:00 PM   |     9:55 PM   |      18,000 RS     |" << endl;
		cout << "\t-----------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else
		cout << "\n\tThese Flights Are Not Available On This Time" << endl << endl;
	return 0;
}

int internationalflightSchedule()                                                              //International Flights Schedule
{
	cout << "\t\tWelcome To International Flights Schedule" << endl << endl;
	string S1, S2;                                                                               //String Type Variables
	cout << "\tEnter Departure : ";
 	cin >> S1;
	cout << "\n";
	cout << "\tEnter Destination : ";
 	cin >> S2;
	cout << "\n";
	if (S1 == "Islamabad" && S2 == "Madina")
	{
		cout << "\n";
		cout << "\t------------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From       |     To      |    Leave     |     Arrive    |   Amount Per Seat  |" << endl;
		cout << "\t|     KRS-770     |    Islamabad   |    Madina   |    6:00 PM   |     9:00 PM   |      80,000 RS     |" << endl;
		cout << "\t------------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else if (S1 == "Karachi" && S2 == "London")
	{
		cout << "\n";
		cout << "\t------------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From    |      To       |    Leave      |     Arrive    |   Amount Per Seat  |" << endl;
		cout << "\t|     KRS-120     |    Karachi  |     London    |    11:00 PM   |     3:40 PM   |      1,00000 RS    |" << endl;
		cout << "\t------------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else if (S1 == "Faisalabad" && S2 == "Washington")
	{
		cout << "\n";
		cout << "\t-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "\t| Flight Number  |      From       |       To         |    Leave      |     Arrive    |   Amount Per Seat |" << endl;
		cout << "\t|    KRS-477     |    Faisalabad   |     Washington   |    12:00 PM   |    11:50 PM   |     120,000 RS    |" << endl;
		cout << "\t-----------------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else if (S1 == "Peshawar" && S2 == "Istanbul")
	{
		cout << "\n";
		cout << "\t-------------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  Flight Number  |     From     |      To       |    Leave     |    Arrive     |   Amount Per Seat  |" << endl;
		cout << "\t|     KRS-777     |    Peshawar  |    Istanbul   |    9:00 AM   |    4:10 PM    |      105,000 RS    |" << endl;
		cout << "\t-------------------------------------------------------------------------------------------------------" << endl << endl;
	}
	else
		cout << "\n\tThese Flights Are Not Available On This Time" << endl << endl;
	return 0;
}


 
void flightstatus()
{
	cout << "\t\t\tDomestic Flights\t\t\tInternational Flights\n\n" << endl;
	cout << "Press 1 For Domestic Flights " << endl;
	cout << "Press 2 for International Flights" << endl;
}
 
int domesticflight()
{                                                                                                  //domestic flights
	int n,count= 0, c, price = 15000;
	cout << "\nPress 1 for Lahore To Islamabad" << endl;
	cout << "Press 2 for Quetta To Karachi" << endl;
	cout << "Press 3 for Peshawar To Skardu" << endl;
	cout << "Press 4 for Sialkot To Multan" << endl << endl;
	cin >> n;
	if (n == 1)                                                                //if statement
	{
		cout << "\nLahore To Islamabad" << endl;
		char  a[50], b[50], n1[50], n2[50], n3[50], n5[50];                                                   //Character type array
		cin.getline(b, 50);
		cout << "Enter Your name : ";
		cin.getline(a, 50);
		cout << "Enter Your Passport Number : ";
		cin.getline(n1, 50);                                                          //Passenger Information
		cout << "Enter CNIC Number : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);
		cout << "Class : ";
		cin.getline(n5, 50);
		cout << "\t\t\t------------------------" << endl << endl;
		cout << "\t\t\tConfirmation Of Ticket" << endl;
		cout << "\t\t\tLahore To Islamabad" << endl;
		cout << "\t\t\tName :" << a << endl;                                                       //Print Layout Of Ticket
		cout << "\t\t\tPassport Number :" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t-------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nLahore To Islamabad" << endl;
			cin.getline(b, 50);
			cout << "Enter Your name : ";
			cin.getline(a, 50);
			cout << "Enter Your Passport Number :  ";
			cin.getline(n1, 50);
			cout << "Enter CNIC Number :";
			cin.getline(n2, 50);

			cout << "Departure Date : ";
			cin.getline(n3, 50);
			cout << "Class : ";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl << endl;
			cout << "\t\t\tConfirmation Of Ticket" << endl;
			cout << "\t\t\tLahore To Islamabad" << endl;
			cout << "\t\t\tName :" << a << endl;                                                //Print Layout Of Ticket
			cout << "\t\t\tPassport Number :" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t-------------------------" << endl << endl;
			count++;
		}
		else
			cout << "\t\tYour Booking Is Finsihed" << endl;
		cout << "\n\tDo You Want To Confirm This Ticket\n\n\tPress 1 To Confirm This Ticket  " << endl << endl;
		cin >> c;
		if (c == 1)
		{
			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
 			total = price * count;
			cout << "\n\tYour Amount Is " << total << " RS " << endl << endl;
			cout << "\n\tYour Ticket is Confirmed\n\n\tHave a Safe Journey" << endl << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl << endl;
		}
	}

	if (n == 2)
	{
		int  c, count = 0, price = 30000;
		cout << "\nQuetta To Karachi" << endl;
		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cin.getline(b, 50);
		cout << "Enter Your Name : ";
		cin.getline(a, 50);
		cout << "Enter passport :  ";
		cin.getline(n1, 50);
		cout << "Enter CNIC :";
		cin.getline(n2, 50);

		cout << "Departure  Date : ";
		cin.getline(n3, 50);

		cout << "Class : ";
		cin.getline(n5, 50);
		cout << "\t\t\t------------------------" << endl;
		cout << "\t\t\tConfirmation of Ticket" << endl;
		cout << "\t\t\tQuetta To KARACHI" << endl;
		cout << "\t\t\tName :" << a << endl;                                                    //Print Layout Of Ticket
		cout << "\t\t\tPassport  Number:" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
 		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nQuetta To Karachi" << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name : ";
			cin.getline(a, 50);                                                             
			cout << "Enter Passport Number : ";
			cin.getline(n1, 50);
			cout << "Enter CNIC : ";
			cin.getline(n2, 50);

			cout << "Departure Date : ";
			cin.getline(n3, 50);

			cout << "Class :";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tQuetta To KARACHI" << endl;
			cout << "\t\t\tName :" << a << endl;                                                              //Print Layout Of Ticket
			cout << "\t\t\tPassport  Number:" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			count++;
		}
		else
			cout << "\n\tYour Booking Is Finished" << endl;
			cout << "\n\tDo you Want To confirm This Ticket\n\tPress 1 To Confirm This Ticket" << endl << endl;
		cin >> c;
		if (c == 1)
		{
			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
 			int *ptr1, *ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
 			total = *ptr1 * *ptr2;
			cout << "\n\tYour Amount Is " << total << " RS " << endl << endl;
			cout << "\n\tYour Ticket Is Confirmed\n\tHave a Safe Journey" << endl << endl << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl << endl;
		}
	}

	if (n == 3)
	{
		int count = 0, c, prize = 40000;
		cout << "\nPeshawar To Skardu" << endl;
		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cin.getline(b, 50);
		cout << "Enter Your Name : ";
		cin.getline(a, 50);
		cout << "Enter Passport Number : ";
		cin.getline(n1, 50);
		cout << "Enter CNIC : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);

		cout << "Class : ";
		cin.getline(n5, 50);
		cout << "\t\t\t------------------------" << endl;
		cout << "\t\t\tConfirmation of Ticket" << endl;
		cout << "\t\t\tPeshawar To Skardu" << endl;
		cout << "\t\t\tName :" << a << endl;                                                                //Print Layout Of Ticket
		cout << "\t\t\tPassport :" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nPeshawar To Skardu" << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name : ";
			cin.getline(a, 50);
			cout << "Enter Passport Number : ";
			cin.getline(n1, 50);
			cout << "Enter CNIC : ";
			cin.getline(n2, 50);

			cout << "Departure Date : ";
			cin.getline(n3, 50);

			cout << "Class : ";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tPeshawar To Skardu" << endl;
			cout << "\t\t\tName :" << a << endl;                                                             //Print Layout Of Ticket
			cout << "\t\t\tPassport  Number:" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			cout << "\n\tDo You Book Again" << endl;
			cout << "\tPress y OR Y To Book again" << endl << endl;
			count++;
		}
		else
			cout << "Your Booking Is Finished" << endl;
		cout << "\n\tDo you Want To confirm This Ticket\n\tPress 1 To Confirm This Ticket" << endl << endl;
		cin >> c;
		if (c == 1)
		{
			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
			total = price * count;
 			cout << "\n\tYour Amount Is " << total << " RS " << endl << endl;
			cout << "\n\tYour Ticket Is Confirmed\n\tHave a safe journey" << endl << endl << endl;
			cout << "\t\tPrint ticket\t\tPay Online" << endl;
		}
	}
	if (n == 4)
	{
		int c, count = 0; price = 18000;
		cout << "\nSialkot To Multan" << endl;
 		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cin.getline(b, 50);
		cout << "Enter Name : ";
		cin.getline(a, 50);
		cout << "Enter Passport Number : ";
		cin.getline(n1, 50);
		cout << "Enter CNIC : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);
		cout << "class : ";
		cin.getline(n5, 50);
		cout << "\t\t\t-----------------------------" << endl << endl;
		cout << "\t\t\tConfirmation Of Ticket" << endl;
		cout << "\t\t\tSialkot To Multan" << endl;
		cout << "\t\t\tName :" << a << endl;                                                                     //Print Layout Of Ticket
		cout << "\t\t\tPassport :" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl << endl;
		cout << "\t\t\t------------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nSialkot To Multan " << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name : ";
			cin.getline(a, 50);
			cout << "Enter Passport Number :  ";
			cin.getline(n1, 50);
			cout << "Enter CNIC : ";
			cin.getline(n2, 50);

			cout << "Departure Date : ";
			cin.getline(n3, 50);

			cout << "Class : ";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tSialkot To Multan" << endl;
			cout << "\t\t\tName :" << a << endl;                                                          //Print Layout Of Ticket
			cout << "\t\t\tPassport  Number:" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			count++;
		}
		else
			cout << "Your Booking Is Finished" << endl;
		cout << "\n\tDo You Want To Confirm This Ticket\n\tPress 1 To Confirm This Ticket" << endl;
		cin >> c;
		if (c == 1)
		{
 			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
			total = price * count;
			cout << "\tYour Amount Is:\t" << total << "RS" << endl;
			cout << "\n\tYour Ticket Is Confirmed\n\tHave a safe journey" << endl << endl << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl << endl;
		}
	}
	return 0;
}
int internationalflights()
{
	int n, c, count = 0, price = 80000;                                               //International Flights
	cout << "\nPress 1 for Islamabad To Madina" << endl;
	cout << "Press 2 for Karachi To London" << endl;
	cout << "Press 3 for Faisalabad TO Washington " << endl;
	cout << "Press 4 for Peshawar To Istanbul" << endl << endl;
	cin >> n;
	if (n == 1)
	{
		cout << "\nIslamabad To Madina" << endl;
		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cin.getline(b, 50);
		cout << "Enter Your Name : ";
		cin.getline(a, 50);
		cout << "Enter Passport Number : ";
		cin.getline(n1, 50);
		cout << "Enter CNIC : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);

		cout << "Class : " << endl;
		cin.getline(n5, 50);
		cout << "\t\t\t------------------------" << endl;
		cout << "\t\t\tConfirmation of ticket" << endl;
		cout << "\t\t\tIslamabad To Madina" << endl;
		cout << "\t\t\tName :" << a << endl;                                                            //Print Layout Of Ticket
		cout << "\t\t\tPassport Number:" << n1 << endl;
		cout << "\t\t\t CNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nIslamabad To Madina " << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name : ";
			cin.getline(a, 50);
			cout << "Enter Passport Number : ";
			cin.getline(n1, 50);
			cout << "Enter CNIC : ";
			cin.getline(n2, 50);

			cout << "Departure Date : ";
			cin.getline(n3, 50);

			cout << "Class : ";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tIslamabad To Madina" << endl;
			cout << "\t\t\tName :" << a << endl;                                            //Print Layout Of Ticket
			cout << "\t\t\tPassport  Number:" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			count++;
		}
		else
			cout << "Your Booking Is Finished" << endl;
		cout << "\n\tDo You Want To Confirm This Ticket\n\tPress 1 To Confirm This Ticket" << endl;
		cin >> c;
		if (c == 1)
		{
			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
			total = price * count;
			cout << "\tYour Amount Is:\t" << total << "RS" << endl;
			cout << "\n\tYour Ticket Is Confirmed\n\tHave a Safe Journey" << endl << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl << endl;
		}
	}
	if (n == 2)
	{
		int c, count = 0, price = 100000;
		cout << "\nKarachi To London" << endl;
		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cin.getline(b, 50);
		cout << "Enter Your Name : ";
		cin.getline(a, 50);
		cout << "Enter Passport Number : ";
		cin.getline(n1, 50);
		cout << "Enter CNIC : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);

		cout << "Class : ";
		cin.getline(n5, 50);
		cout << "\t\t\t------------------------" << endl;
		cout << "\t\t\tConfirmation of Ticket" << endl;
		cout << "\t\t\tKarachi To London" << endl;
		cout << "\t\t\tName :" << a << endl;                                                      //Print Layout Of Ticket
		cout << "\t\t\tPassport Number :" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nKarachi To London" << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name : ";
			cin.getline(a, 50);
			cout << "Enter Passport Number : ";
			cin.getline(n1, 50);
			cout << "Enter CNIC : ";
			cin.getline(n2, 50);

			cout << "Departure Date : ";
			cin.getline(n3, 50);

			cout << "Class : ";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tKarachi To London" << endl;
			cout << "\t\t\tName :" << a << endl;                                                         //Print Layout Of Ticket
			cout << "\t\t\tPassport  Number:" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			count++;
		}
		else
			cout << "Your Booking Is Finished" << endl;
		cout << "\n\tDo You Want To Confirm This Ticket\n\n\tPress 1 To Confirm This Ticket" << endl;
		cin >> c;
		if (c == 1)
		{
  			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
			total = price * count;
			cout << "\tYour Amount Is:\t" << total << "RS" << endl;
			cout << "\n\tYour Ticket Is Confirmed\n\tHave a Safe Journey" << endl << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl << endl;
		}
	}

	if (n == 3)
	{
		int c, count = 0, price = 120000;
		cout << "\nFaisalabad To Washington " << endl;
		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cin.getline(b, 50);
		cout << "Enter Your Name : ";
		cin.getline(a, 50);
		cout << "Enter Passport Number: ";
		cin.getline(n1, 50);
		cout << "Enter CNIC : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);

		cout << "Class : ";
		cin.getline(n5, 50);

		cout << "\t\t\t---------------------------" << endl;
		cout << "\n\t\t\tConfirmation of ticket" << endl;
		cout << "\t\t\tFaisalabad To Washington " << endl;
		cout << "\t\t\tName :" << a << endl;                                                       //Print Layout Of Ticket
		cout << "\t\t\tPassport :" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t----------------------------" << endl << endl;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		count++;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nFaisalabad To Washington " << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name : ";
			cin.getline(a, 50);
			cout << "Enter Passport Number : ";
			cin.getline(n1, 50);
			cout << "Enter CNIC :  ";
			cin.getline(n2, 50);

			cout << "Departure Date :";
			cin.getline(n3, 50);

			cout << "Class : ";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tFaisalabad To Washington " << endl;
			cout << "\t\t\tName :" << a << endl;
			cout << "\t\t\tPassport  Number:" << n1 << endl;                                             //Print Layout Of Ticket
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			count++;
		}
		else
			cout << "Your Booking Is Finished" << endl;
		cout << "\n\tDo You Want To Confirm This Ticket\n\tPress 1 To Confirm This Ticket" << endl;
		cin >> c;
		if (c == 1)
		{
  			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
			total = price * count;
			cout << "\tYour Amount Is:\t" << total << "RS" << endl;
			cout << "\n\tYour Ticket Is Confirmed\n\tHave a Safe Journey" << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl << endl;
		}
	}
	if (n == 4)
	{
		int c, count = 0, price = 105000;
		char a[50], b[50], n1[50], n2[50], n3[50], n5[50];
		cout << "\nPeshawar To Istanbul" << endl;
		cin.getline(b, 50);
		cout << "Enter Your Name : ";
		cin.getline(a, 50);
		cout << "Enter passport : ";
		cin.getline(n1, 50);
		cout << "Enter CNIC : ";
		cin.getline(n2, 50);

		cout << "Departure Date : ";
		cin.getline(n3, 50);
		cout << "Class : ";
		cin.getline(n5, 50);
		cout << "\t\t\t------------------------" << endl;
		cout << "\t\t\tConfirmation of ticket" << endl;
		cout << "\t\t\tPeshawar To Istanbul" << endl;
		cout << "\t\t\tName :" << a << endl;                                               //Print Layout Of Ticket
		cout << "\t\t\tPassport Number :" << n1 << endl;
		cout << "\t\t\tCNIC :" << n2 << endl;
		cout << "\t\t\tDeparture Date :" << n3 << endl;
		cout << "\t\t\tClass :" << n5 << endl;
		cout << "\t\t\t------------------------" << endl << endl;
		count++;
		cout << "\n\tDo You Book Again" << endl;
		cout << "\tPress y OR Y To Book again" << endl << endl;
		char Again;
		cin >> Again;
		if (Again == 'y' || Again == 'Y')
		{
			cout << "\nPeshawar To Istanbul" << endl;
			cin.getline(b, 50);
			cout << "Enter Your Name :";
			cin.getline(a, 50);
			cout << "Enter Passport Number :";
			cin.getline(n1, 50);
			cout << "Enter CNIC :";
			cin.getline(n2, 50);

			cout << "Departure Date :";
			cin.getline(n3, 50);

			cout << "Class :";
			cin.getline(n5, 50);
			cout << "\t\t\t------------------------" << endl;
			cout << "\t\t\tConfirmation of Ticket" << endl;
			cout << "\t\t\tPeshawar To Istanbul" << endl;
			cout << "\t\t\tName :" << a << endl;                                            //Print Layout Of Ticket
			cout << "\t\t\tPassport  Number:" << n1 << endl;
			cout << "\t\t\tCNIC :" << n2 << endl;
			cout << "\t\t\tDeparture Date :" << n3 << endl;
			cout << "\t\t\tClass :" << n5 << endl;
			cout << "\t\t\t------------------------" << endl << endl;
			count++;
		}
		else
			cout << "Your Booking Is Finished" << endl;
		cout << "\n\tDo You Want to Confirm This Ticket\n\tPress 1 To Confirm This Ticket" << endl;
		cin >> c;
		if (c == 1)
		{
  			cout << "\n\tYou Have Book " << count << " Tickets" << endl;
			int* ptr1, * ptr2;                                                                  //Pointer variable
			int total;
			ptr1 = &count;
			ptr2 = &price;
			total = *ptr1 * *ptr2;
			total = price * count;
			cout << "\tYour Amount Is:\t" << total << "RS" << endl;
			cout << "\n\tYour Ticket is Confirmed\n\tHave a Safe journey" << endl << endl << endl;
			cout << "\t\tPrint Ticket\t\tPay Online" << endl;
		}
	}
	return 0;
}



 void menu() 
 {
	 int h;
	 cout << "\n\n\t\tFlight Status\t\tFlight Schedule\t\tInstructions/Help\t\tExit" << endl << endl;                           //Menu
	 cout << "Press 1 For Flight Status" << endl;
	 cout << "Press 2 For Flight Schedule" << endl;
	 cout << "Press 3 For Instructions/Help" << endl;
	 cout << "Press 4 For Exit" << endl << endl;
	 cin >> h;
	 if (h == 1)
	 {
		 flightstatus();
		 int i;
		 cout << endl << endl;
		 cin >> i;
		 if (i == 1)
			 domesticflight();
		 if (i == 2)
			 internationalflights();
	 }
	 if (h == 2)
	 {
		 flightschedule();
		 int i;
		 cout << endl << endl;
		 cin >> i;
		 if (i == 1)
			 domesticflightSchedule();
		 if (i == 2)
			 internationalflightSchedule();
	 }
	 if (h == 3)
		 Instr();
	 if (h == 4)
		 ext();
 }
	 
	 
 int main()
 {
	 int n;
	 cout << endl << endl << endl;
	 cout << "\t\t\t****************  KRS AIRWAYS  **************" << endl << endl << endl;
	 cout << "\t\t\t\tWelcome To Air Reservation System" << endl << endl << endl;
	 cout << "\t\t\t\tMenu\t\t\tExit";
	 cout << endl << endl;
	 cout << "Press 1 for Menu" << endl;
	 cout << "Press 2 for Exit" << endl << endl;
	 cin >> n;
	 if (n == 1)
		 menu();                                                           //Goes To Menu Fuction Which is define by user
	 if (n == 2)
	 {
		 cout << "\n\t\tThanks For Viewing Our Website\n" << endl;           //Exit
		 cout << "\n\t\tYou Are Exit To KRS Airways\t\t\n\n\n";
	 }
 }
