  #include<iostream>
  using namespace std;
  
  class person{
  public:
      int id, salary;
      string name, address;
      virtual void accept() = 0;
      virtual void dispaly() = 0;
  };
 
 class doctor : public person{
    void accept();
    void display(); 
};

class nurse : public person{
    void accept();
    void display(); 
};

class staff : public person{
    void accept();
    void display(); 
};

void doctor :: accept(){
    cout<<"Enter id, name, salary, address"<<endl;
    cin>>id>>name>>salary>>address;
}

void doctor :: display(){
    cout<<"Doctor details :"<<endl;
    cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<address;
}

void nurse:: accept(){
    cout<<"Enter id, name, salary, address"<<endl;
    cin>>id>>name>>salary>>address;
}

void nurse :: display(){
    cout<<"Doctor details :"<<endl;
    cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<address;
}

void staff :: accept(){
    cout<<"Enter id, name, salary, address"<<endl;
    cin>>id>>name>>salary>>address;
}

void staff :: display(){
    cout<<"Doctor details :"<<endl;
    cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<address;
}

int main(){
    doctor d[10];
    nurse n[10];
    staff s[10];
    int n, ch;
    int i = 0;
    do{
        cout<<"1. Accept doctor details.\n2. Display doctor details.\n3. Accept nurse details.\n4. Display nurse details.\n5. Accept staff details.\n6. Display staff details.\n7. Exit( enter 0)"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch){
            case 1 :
            d[i].accept();
            i++;
            break;
            
            case 2 :
            d[i].dispaly();
            i++;
            break;
            
            case 3 :
            n[i].accept();
            i++;
            break;
            
            case 4 :
            n[i].display();
             i++;
            break;
            
            case 5 :
            s[i].accept();
             i++;
            break;
            
            case 6 :
            s[i].display();
             i++;
            break;
            
            case 7 :
            cout<<"Exiting..."<<endl;
            break;
            
            default :
            cout<<"Invalid input."<<endl;
            break;
            
        }
    }while(ch!=0);
return 0;
}


















