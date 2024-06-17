/*Include standard cpp headers*/
#include<string>
using namespace std;
/*This is serializable class and it is an abstact class 
Any class derived form this class must implement 'tostring' 
method*/
class serializable{
/*Pure virtual function */
/*'serializable' class does nto knwo wwhat 'tostring' method will do */
/*It is the responsibility of derived class to implement this method*/
/*Each derived class has it s own 'tostring' implementation */
virtual string tostring() const=0;
};