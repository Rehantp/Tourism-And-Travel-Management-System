
RegisteredUsers.h

#include <iostream>
#define rsize 1
		class RegisteredUser
	{
	protected:
		char name[20];
		int contactNumber;
		char email[20];
		Reports* repRU[rsize 1];
	public:
		RegisteredUser();
		void displayUserDetails();
		~RegisteredUser();
	};
	TravelAgent.h
#include <iostream>
#include "TourPackage.h"
#include "Traveler"
#include "Tours"
#include "Vehicles"
#define tpsize 2
		class travelAgent : public RegisteredUser
	{
	private:

			char travelAgentId[6];
		int age;
		TourPackages* tpNo[tpsize];
	public:
		travelAgent();
		void addTravelAgentDetails();
		void organizetour();
		void rentVehicle(Vehicles* veh);
		void confirmTourRequests();
		~travelAgent();
	};
	Traveler.h
#include <iostream>
#include "Payments.h"
#include "Ratings.h"
#include "Reports.h"
#include "TravelAgent.h"
#include "HotelServices.h"
#include "RegisteredUser.h"
#include "TourDriver.h"
#include "TourGuide.h"
#include "TravelAgent.h"
		class Traveler : public RegiseteredUser
	{
	private:
		char travelerId[6];
		char gender[10];
		char address[20];
		int age;
		TourDriver* tourdriver1;
		Ratings* ratingValue[rateSIZE];


	public:
		traveler();
		void addDetails();
		void purchasePackages();
		void reserveServiceProviders();
		void addRatings();
		~traveler();
	};
	TourGuide.h
#include <iostream>
#include "Payments.h"
#include "Tours.h"
#include "Reports.h"
#define psize 6
		//Tourguide class
		class tourGuide : public RegisteredUser
	{
	private:
		char tourGuideId[6];
		int licenseNo;
		int age;
		char language[15];
		char gender[10];
		Payments* pay[psize];
		Reports* repTG[rsize];
		Tours* toursTG[10];
	public:
		tourGuide();

		void confirmTours();
		void receivePayment();
		void confirmTourRequests();
		void updateProfile();
		~tourGuide();
	};



	HotelServices.h
#include <iostream>
#include "Payments.h"
#include "HotelPackages.h"
#include "Traveler.h"
#define size 5
		class HotelServices : public RegisteredUser
	{
	private:
		char HotelId[6];
		char address[50];
		HotelPackages* hpNo[hpsize];
		Payments* pay[size];
	public:
		HotelServices(HotelPackages* hpNo[], Payments* pay[]);
		void addHotelPackage();
		void confirmPayment();
		~HotelServices();
	};

		TourDriver.h
#include <iostream.h>
#include "Reports.h"
#include "Tours.h"
#include "Vehicles.h"
#include "Payments.h"
#define rsize 5
#define vsize 6
#define psize 4
#define tsize 6
		class TourDriver : public RegisteredUser
	{
	private:
		char tourDriverId[6];
		int age;
		int licenceNumber;
		Reports* reports[rsize];
		Vehicles* vehicles[vsize];
		Payments* payments[psize];
		Tours* tours[tsize];
	public:
		TourDriver();
		void updateProfile();
		void updateProfile();
		void confirmTours();
		void reserveVehicle(Vehicles* vehi1, Vehicles* vehi2, Vehicles* vehi3);
		void confirmTourRequests();
		void receivePayments();
		void addTourDriverDetails();

			~TourDriver();
	};
	Payments.h
#include <iostream>
#include "HotelServices.h"
#include "Traveler.h"
#include "Reports.h"
		//payment class
		class Payments
	{
	private:
		char paymentID[6];
		double amount;
		char travelerId[6];
		char travelAgentId[6];
		char type[10];
		char date[10];
		char time[6];
		hotelSevices* hs;
		traveler* t[tsize];
		Reports* repPayments[rsize];
	public:
		Payments();
		Payments(char payId[], hotelServices* hs)
			void confirmPaymentDetails();
		void storePaymentDetails();
		~Payments();
	};

		Tours.h
#include <iostream>
		//tour class
		class Tours
	{
	private:
		char tourID[6];
		char date[10];
		char time[6];
	public:
		Tours();
		void storeTourDetails();
		~Tours();
	};
	HotelPackages.h
#include <iostream>
		class HotelPackages
	{
	private:
		char hotelPackageId[6];
		char hotelPackageName[10];
		char hotelName[10];
		char type[10];
		double price;
	public:
		HotelPackages(char hpID[], char hpName[], char hName[], chart[], double p);
		void storeHotelPackageDetails();
		~HotelPackages();
	};
	Reports.h
#include <iostream.h>
		class Reports
	{
	private:
		char reportID[6];
	public:
		Reports();
		void registerUserDetails();
		void JourneyDetails();
		void workingHoursDetails();
		~Reports();
	};
	Vehicles.h
#include <iostream.h>
		class Vehicles
	{
	private:
		int vehicleRegistrationNo;
		char vehicleModel[15];
		char vehicleType[15];
	public:
		Vehicles();
		void storeVehicleDetails();

			~Vehicles();
	};
	Ratings.h
#include <iostream>s
#include "Traveler.h"
		class Rating
	{
	private:
		char ratingsId[6];
		double value;
	public:
		ratings();
		void storeRatingValues();
		double calcRating();
		~ratings();
	};
	TourPackages.h
#include <iostream>
		class TourPackages
	{
	private:
		char packageID[6];
		char packageName[10];
		char packageType[10];
		double packagePrice;
	public:
		TourPackages();
		void tourPackagesDetails();
		~TourPackages();

	};
	Main.cpp
#include <iostream.h>
#include <cstring.h>
#include "RegisteredUser.h"
#include "Traveler.h"
#include "TravelAgent.h"
#include "HotelServices.h"
#include "TourGuide.h"
#include "TourDriver.h"
#include "Vehicles.h"
#include "Payments.h"
#include "Reports.h"
#include "Tours.h"
#include "Ratings.h"
#include "HotelPackages.h"
#include "TourPackages.h"
		using namespace std;
	int main()
	{
		//Create objects


		Traveler* traveler = new Traveler();
		TravelAgent* travelagent = new TravelAgent();
		HotelServices* hotelservices = new HotelServices();
		TourGuide* tourguide = new TourGuide();
		TourDriver* tourdriver = new TourDriver();
		Vehicles* vehicle = new Vehicles();
		Payments* payment = new Paymnets();
		Reports* report = new Reports();
		Tours* tour = new Tours();
		
			Ratings * rating = new Ratings();
		HotelPackages* Hpackage = new HotelPackages();
		TourPackages* Tpackage = new TourPackages();
		return 0;
	}
