// stonewt.h -- definition for the Stinewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };		// pounds per stone
	int stone;					// whole stones
	double pds_left;			// fractional poubds
	double pounds;				// enture weight in pounds
public:
	Stonewt(double lbs);		//constructor for doubkle pounds
	Stonewt(int stn, double lbs);// constructor for stone, lbs
	Stonewt();					// default constructor
	~Stonewt();
	void show_lbs()const;		// show weight in pounds format
	void show_stn()const;		// show weight in stone format
};
#endif // !STONEWT_H_
