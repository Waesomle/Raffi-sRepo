#include <iostream>
class RaffisDriveTrain 
{
private:
Victor flVic;
Victor frVic;
Victor blVic;
Victor brVic;
rdtStates States1;
public:

RaffisDriveTrain();

typedef enum rdtStates
{
MOVE,STOP
} rdtStates;

void update();


};
