#include<iostream>
#include<map>
//map
/*
1.collection of key value pair
2.return items in sorted order
*/
using namespace std;

int main()
    {
        //
        map<int,string> m;
        // map<key type , value type> map_name;

        m[1] = "Raj";
        m[34] = "Why";
        m[2] = "vardhan";
        m[3] = "King";
        

        cout<<"Size : "<<m.size()<<endl;

        for(auto it : m)
            {
                cout<<(it).first<<" ";
            }

        cout<<endl;

        // use of iterator
        auto itr = m.begin();

        for(itr ; itr != m.end() ;itr++)
            {
                cout<<(*itr).first<<" ";
            }

        cout<<endl<<endl;

        for(auto itr = m.begin() ; itr != m.end() ;itr++)
            {
                cout<< itr->second <<" ";
            }

            auto kt = m.find(2);

            for(auto itr = kt ; itr != m.end() ;itr++)
            {
                cout<< itr->first <<" ";
            }

            // count
            cout<<endl;
            cout<<"Is present : "<<m.count(34)<<endl;

            

            //map iterator:

            /*
            itr->first,itr->second these are shortcut to (*itr).first , (*itr).first
            
            you can use both of them
            
            */

            // set has it(iterator -> ehich points to each element) and *it(Dereferencing means accessing the actual object/value that a pointer or iterator is pointing to.)
            // map has it and it->first / it->second / (*it).first / (*it).second

            


    }