/* multimap */

#include<iostream>
#include<map>
using namespace std;
main()
{
	multimap<string,int> m;					//multimap with string and integer

	m.insert(pair<string,int>("Hai",7) );			//inserting elements to map
	m.insert(pair<string,int>("Hello",3) );
	m.insert(pair<string,int>("Hai",2) );
	m.insert(pair<string,int>("Bye",9) );

	cout << "Number of 'Hai': " << m.count("Hai") << endl;	//counting the strings
	cout << "Number of 'Hello': " << m.count("Hello") << endl;
	cout << "Number of 'Bye': " << m.count("Bye") << endl;

	for( multimap<string,int>::iterator iter=m.begin();iter != m.end();++iter )
	 {
		cout <<iter->first << " ID " << iter->second << endl; //printing the map
	}
////////////////////////////////////////
	m.erase("Hai");							//erasing string

	cout<<"\nAfter removing Hai .."<<endl;
	for( multimap<string,int>::iterator iter=m.begin();iter != m.end();++iter )
	 {
		cout <<iter->first << " ID " << iter->second << endl;
	}
////////////////////////////////////////
	cout<<"Assigning map to another one"<<endl;			//assigning one map to another
	multimap <string,int>m2(m.begin(),m.end());
	for( multimap<string,int>::iterator iter=m2.begin();iter != m2.end();++iter )
	 {
		cout <<iter->first << " ID " << iter->second << endl;
	}

}
