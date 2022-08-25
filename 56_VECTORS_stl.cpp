#include<iostream>
#include<vector>  // mandatory for vector stl
using namespace std;
// vector is like an array but iski size kam jyada ho jati hai 

void display(vector<int> V){
    for (int i = 0; i < V.size() ; i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // vector <data type> nameofobj
    vector <int> vec1 ;
    int element,size;
    cout<<"enter size : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element : ";
        cin>>element;
        vec1.push_back(element);
    }

    cout<<"original display "; 
    display(vec1);

    vec1.push_back(16);
    cout<<"after push back 16 element ";
    display(vec1);

    vec1.pop_back();
    cout<<"after pop back ";
    display(vec1);

   //syntax for iterator is vector<pre_defined_data_type> :: iterator iterator_name = wherver you want to point it 
    vector<int> :: iterator itr =vec1.begin();
    vec1.insert(itr,114);  // you can aslo give the number of copies you want to insert 
    cout<<"after inserting 114 at begin " ; display(vec1);
    
    vec1.erase(itr);
    cout<<"after erasing element at begin " ; display(vec1);

    vec1.insert(itr+2,5,11);
    cout<<"after inserting 5 copies of 11 at begin+2=3rd position"<<endl;
    display(vec1);

   
   
    return 0;
}