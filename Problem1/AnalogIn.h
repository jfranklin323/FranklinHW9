// AnalogIn.h
// Jasmine Franklin CPE 422
// * This class wraps the functionality of the analog to digital converter

 #ifndef ANALOGIN_H_
 #define ANALOGIN_H_

 using std::string;

 class AnalogIn {
   private:
      unsigned int number;

   public:
     AnalogIn();
     AnalogIn(unsigned int n);
     virtual unsigned int getNumber() {return number;}   // inline function
     virtual void setNumber(unsigned int n);
     virtual int readAdcSample();
     virtual ~AnalogIn();
 };
#endif
