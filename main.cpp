#include <iostream>

using namespace std;

int main()
{
    // Initialize variables to keep track of totals and category counts
    int infant=1, child=2, teenager=3, adult=4;
    int n, entr_fee, ticket_no, total_ppl=0, total_ticsale=0;
    int infcount=0, childcount=0, teencount=0, adultcount=0;

    // Get the entrance ticket number and person code from the user
    Again:    cout << "Enter ur tick number or -ve number to quit: " << endl;
        cin>>ticket_no;
        //Check the ticket number and If ticket number is negative, countinue
        while(ticket_no>=0){

    Loop:   cout << "Enter 1 for infant \n\t 2 for child \n\t 3 for teenager \n\t 4 for adult" << endl;
        cin>>n;
        // Get the entrance ticket number and person code from the user
        if (n>4){
                    cout<<"You enter the wrong Number"<<endl;
                    goto Loop;
                }

        while(true){

            // Get the entrance ticket number and person code from the user
    Money:
            cout<<"Enter your fee  10 birr for infant \n\t 5 birr for child \n\t 20 birr for teenager and adult "<<endl;
            cin>>entr_fee;

                // Check if the person code is valid,Loop for input of age category code
                // and compute the entrance fee also count each category
                switch(n)
                {
                case 1:

                    if ((n==1) && (entr_fee!=10)){
                        cout<<"You enter the wrong price."<<endl;
                        goto Money;
                    }
                    infcount ++;
                    total_ticsale +=entr_fee;
                    goto Again;
                    break;

                case 2:

                    if ((n==2) && (entr_fee!=5)){
                        cout<<"You enter the wrong price."<<endl;
                        goto Money;
                    }
                    childcount ++;
                    total_ticsale +=entr_fee;
                    goto Again;
                    break;

                case 3:

                    if ((n==3) && (entr_fee!=20)){
                        cout<<"You enter the wrong price."<<endl;
                        goto Money;
                    }
                    teencount ++;
                    total_ticsale +=entr_fee;
                    goto Again;
                    break;

                case 4:

                    if ((n==4) && (entr_fee!=20)){
                        cout<<"You enter the wrong price."<<endl;
                        goto Loop;
                    }
                    adultcount ++;
                    total_ticsale +=entr_fee;
                    goto Again;
                    break;

                    }


            }
        //Check the ticket number and If ticket number is negative, exit
        if (ticket_no<0){
            break;}
        }

        //Calculate and output the total number of people, total number of people in each age category and the total ticket sales
        total_ppl=infcount+childcount+teencount+adultcount;
        cout<<"Total number of ppl: "<<total_ppl<<"\n"<<"Total number of infat: "<<infcount<<"\n"<<"Total number of child: "<<childcount<<"\n"<<"Total number of teen: "<<teencount<<"\n"<<"Total number of adult: "<<adultcount<<endl;
        cout<<"Total ticket sale: "<<total_ticsale<<endl;


    return 0;
}
