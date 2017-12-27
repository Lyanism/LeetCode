#include <iostream>
using namespace std;

class Solution {
public:
    bool judgeCircle(string direction) {


         int u = 0;
         int d = 0;
         int l = 0;
         int r = 0;


        for(int i = 0; i < direction.size(); i++)
          {
            switch(direction[i])
            {
              case 'U' :
                  u++;
                  break;
              case 'D' :
                  d++;
                  break;
              case 'L' :
                  l++;
                  break;
              case 'R' :
                  r++;
                  break;
            }

        }
        return u-d == 0 && l-r == 0;
    }
};

int main()
{
    string d;

    Solution Solut;

    cin >> d;


    if(Solut.judgeCircle(d) == true)
    {
    cout<< "Q: Its a circle? " << "A : yes " << endl;
    }
    else
    {
      cout<< "Q: Its a circle? " << "A : nah " << endl;
    }
    return 0;
}
