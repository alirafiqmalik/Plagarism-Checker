#include <iostream>
#include <fstream>
using namespace std;

int word_count(string x){
    int count=0;
    for(int i=0;i<x.length();i++){
        
    }
 return 0;   
}

int main()
{
    ifstream testfile ("testfile.txt");
    ifstream sourcefile ("sourcefile1.txt");

    int c(0);
	string testword, sourceword,phrase;

    string all_phrases[50];
    int count=0;


     while (!testfile.eof())
     {
         testfile >> testword;

         //cout<<testword<<" ";
         if (sourcefile.eof()){
             sourcefile.seekg(0,ios::beg);
         }
         while (!sourcefile.eof())
         {
             sourcefile >> sourceword; 
            if(sourceword==testword){

                 phrase=phrase+" "+testword;
                 break;
             }
             else if(sourceword!=testword){
             if(phrase!=""){
             all_phrases[count]=phrase;
             count++;
             }
             phrase="";       
             }
             
         
         }
         

     }
     if(phrase!=""){
             all_phrases[count]=phrase;
             count++;
             }

     

for(int i=0;i<=count;i++){
    cout<<all_phrases[i];
    cout<<"\n";
}


}

