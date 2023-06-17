#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream testfile ("testfile.txt");
    ifstream sourcefile ("sourcefile1.txt");

    int c(0);
	string testword, sourceword, phrase;
    bool condition(true);

    while (condition)
    {
        condition=false;
     while (!testfile.eof())
     {
         testfile >> testword;
         //cout << testword<<" ";
         while (!sourcefile.eof())
         {
            sourcefile >> sourceword;
            //cout << sourceword<<" ";

            if (testword==sourceword)
            {
                phrase=phrase+" "+testword;
                //cout << "phrase :" << phrase << endl;
                break;
            }

            cout<<phrase<<" ";

            
        }
        //cout<<phrase;
        
        /* if (testword!=sourceword)
        sourcefile.seekg (0, ios::beg);
        else if (testword==sourceword)
        break; */
     }
     
     //condition=true;
    }
    
    /* while (!testfile.eof()&&!sourcefile.eof())
    {
        testfile >> testword;
        sourcefile >> sourceword;
        //cout << "testword :" << testword<<endl;
        //cout << "sourceword :" << sourceword<<endl;
        if (testword==sourceword)
            {
                phrase=phrase+" "+testword;
                c++;
                //cout << "phrase :" << phrase << endl;
            }
            else if (testword!=sourceword&&c<2)
            {
            phrase.clear();
            }
            else
            {
                cout << "phrase :" << phrase << endl;
                condition=true;
                phrase.clear();
                break;
            }
         
     c=0;
    } */
}
