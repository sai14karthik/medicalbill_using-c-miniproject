#include<stdio.h>
int main()
{
    int age,mobilenumber,HFNO,PINcode,CN,CVV,expirydate,OTP,upi,n;
    char apartmentname[50],street[50],landmark[50],state[50];
    char Name[20];
    float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43,n44,n45,n46,n47,n48,n49,n50,sum,s;

    printf("***  WELCOME TO APPOLO PHARMACY  ***\n");
    printf("Enter your Name : \n");
    scanf("%s",Name);
    printf("Enter your AGE\n");
    scanf("%d",&age);
    if(age>45)
    {

       printf("WELCOME %s",&Name);
    printf("\nPlease select your medication sheet which you required (if you want half sheet please type 0.5)");
    printf("\n1. Gabapentin                              100  mg                  41.33        enter number of sheet you want -: ");
    scanf("%f",&n1);
    printf("\n2. Hydrocodone/acetaminophen               650  mg                  9.00         enter number of sheet you want -: ");
    scanf("%f",&n2);
    printf("\n3. Hydrochlorothiazide                     12.5 mg                  13.05        enter number of sheet you want -: ");
    scanf("%f",&n3);
    printf("\n4. Sertraline                              50   mg                  28.40        enter number of sheet you want -: ");
    scanf("%f",&n4);
    printf("\n5. Montelukast                             10   mg                  34.00        enter number of sheet you want -: ");
    scanf("%f",&n5);
    printf("\n6. Fluticasone                             200  mg                  290.00       enter number of sheet you want -: ");
    scanf("%f",&n6);
    printf("\n7. Amoxicillin                             100  mg                  10.00        enter number of sheet you want -: ");
    scanf("%f",&n7);
    printf("\n8.Pantoprazole                             40   mg                  45.00        enter number of sheet you want -: ");
    scanf("%f",&n8);
    printf("\n9.Escitalopram                             10   mg                  80.32        enter number of sheet you want -: ");
    scanf("%f",&n9);
    printf("\n10.Fluoxetine                              20   mg                  38.30        enter number of sheet you want -: ");
    scanf("%f",&n10);
    printf("\n11..Tramado                                l100  mg                 162.00       enter number of sheet you want -: ");
    scanf("%f",&n11);
    printf("\n12.Insulin glargine                        3.5  mg                  2000.00      enter number of sheet you want -: ");
    scanf("%f",&n12);
    printf("\n13.Bupropion                               150  mg                  73.00        enter number of sheet you want -: ");
    scanf("%f",&n13);
    printf("\n14.Ibuprofen                               100  mg                  20.00        enter number of sheet you want -: ");
    scanf("%f",&n14);
    printf("\n15.Rosuvastatin                            10   mg                  03.00        enter number of sheet you want -: ");
    scanf("%f",&n15);
    printf("\n16.Tamsulosin                              0.4   mg                 53.13        enter number of sheet you want -:");
    scanf("%d",&n16);
    printf("\n17.Carvedilol                              3.125 mg                 32.00        enter number of sheet you want -: ");
    scanf("%f",&n17);
    printf("\n18.Duloxetine                              20 mg                    68.50        enter number of sheet you want -: ");
    scanf("%f",&n18);
    printf("\n19.Alprazolam                              0.5 mg                   28.00        enter number of sheet you want -: ");
    scanf("%f",&n19);
    printf("\n20.Potassium                               100 mg                   100.00       enter number of sheet you want -: ");
    scanf("%f",&n20);
    printf("\n21.Clopidogrel                             75 mg                    39.05        enter number of sheet you want -: ");
    scanf("%f",&n21);
    printf("\n22.Aspirin                                 75 mg                    100.00       enter number of sheet you want -: ");
    scanf("%f",&n22);
    printf("\n23.Ranitidine                              10 mg                    10.00        enter number of sheet you want -: ");
    scanf("%f",&n23);
    printf("\n24.Atenolo                                 l50 mg                   25.40        enter number of sheet you want -: ");
    scanf("%f",&n24);
    printf("\n25.Glipizide                               05 mg                    05.00        enter number of sheet you want -: ");
    scanf("%f",&n25);
    printf("\n26. Methylphenidate                        10 mg                    127.00       enter number of sheet you want -: ");
    scanf("%f",&n26);
    printf("\n27.Azithromycin                            500 mg                   108.25       enter number of sheet you want -: ");
    scanf("%f",&n27);
    printf("\n28.Clonazepam                              0.25 mg                  19.50        enter number of sheet you want -: ");
    scanf("%f",&n28);
    printf("\n29. Allopurinol                            100 mg                   18.48        enter number of sheet you want -: ");
    scanf("%f",&n29);
    printf("\n30. Venlafaxine                            75 mg                    66.00        enter number of sheet you want -: ");
    scanf("%f",&n30);
    printf("\n31. Atorvastatin                           10 mg                    15.85        enter number of sheet you want -: ");
    scanf("%f",&n31);
    printf("\n32. Lisinopril                             05 mg                    36.00        enter number of sheet you want -: ");
    scanf("%f",&n32);
    printf("\n33.Amlodipine                              05 mg                    24.90        enter number of sheet you want -: ");
    scanf("%f",&n33);
    printf("\n34.Albuterol                               10 mg                    120.42       enter number of sheet you want -: ");
    scanf("%f",&n34);
    printf("\n35. Metoprolol                             50 mg                    28.44        enter number of sheet you want -: ");
    scanf("%f",&n35);
    printf("\n36.Omeprazole                              20 mg                    106.00       enter number of sheet you want -: ");
    scanf("%f",&n36);
    printf("\n37.Losartan                                50 mg                    48.21        enter number of sheet you want -: ");
    scanf("%f",&n37);
    printf("\n38.Diazepam                                05 mg                    22.10        enter number of sheet you want -: ");
    scanf("%f",&n38);
    printf("\n39. Cetrizine                              10 mg                    15.75        enter number of sheet you want -: ");
    scanf("%f",&n39);
    printf("\n40. Tramadol                               100 mg                   162.00       enter number of sheet you want -: ");
    scanf("%f",&n40);
    printf("\n41. Larpose                                1 mg                     18.00        enter number of sheet you want -: ");
    scanf("%f",&n41);
    printf("\n42. Diclofenac                             50 mg                    21.94        enter number of sheet you want -: ");
    scanf("%f",&n42);
    printf("\n43. Colchicine                             0.5 mg                   100.00       enter number of sheet you want -: ");
    scanf("%f",&n43);
    printf("\n44. Leflunomide                            20 mg                    198.58       enter number of sheet you want -: ");
    scanf("%f",&n44);
    printf("\n45. Prednisolone                           5 mg                     03.90        enter number of sheet you want -: ");
    scanf("%f",&n45);
    printf("\n46. Phenobarbital                          30 mg                    42.70        enter number of sheet you want -: ");
    scanf("%f",&n46);
    printf("\n47.Sodium Valproate                        100 mg                   16.25        enter number of sheet you want -: ");
    scanf("%f",&n47);
    printf("\n48.Albendazole                             400 mg                   100.00       enter number of sheet you want -: ");
    scanf("%f",&n48);
    printf("\n49.Chloroquine                             250 mg                   5.60         enter number of sheet you want -: ");
    scanf("%f",&n49);
    printf("\n50. Furosemide                             40 mg                    6.00         enter number of sheet you want -: ");
    scanf("%f",&n50);
    sum=((41*n1)+(9*n2)+(13*n3)+(29*n4)+(34*n5)+(290*n6)+(10*n7)+(45*n8)+(81*n9)+(39*n10)+(162*n11)+(2000*n12)+(73*n13)+(20*n14)+(3*n15)+(54*n16)+(32*n17)+(69*n18)+(28*n19)+(100*n20)+(39*n21)+(100*n22)+(10*n23)+(26*n24)+(5*n25)+(127*n26)+(109*n27)+(20*n28)+(19*n29)+(66*n30)+(16*n31)+(36*n32)+(25*n33)+(121*n34)+(25*n35)+(106*n36)+(48*n37)+(22*n38)+(16*n39)+(162*n40)+(18*n41)+(22*n42)+(100*n43)+(198*n44)+(4*n45)+(43*n46)+(17*n47)+(100*n48)+(6*n49)+(6*n50));
    s=(sum*0.8);
    printf("Your total bill with discount = %f",s);
    printf("\nENTER YOUR MOBILE NUMBER :");
        scanf("%d",&mobilenumber);
        printf("ENTER YOUR House.NO or FLAT.no");
        scanf("%d",&HFNO);
        printf("ENTER YOUR APARTMENT NAME INCASE IF YOU HAVE MENTIONED APARTMENT NO OR ELSE TYPE NO\n");
        scanf("%s",apartmentname);
        printf("Enter your street :\n");
        scanf("%s",street);
        printf("Enter your nearest land mark :\n");
        scanf("%s",landmark);
        printf("ENTER YOUR PIN CODE :");
        scanf("%d",&PINcode);
        printf("Enter your state :\n");
        scanf("%s",state);
        printf("Choose Your Billing method\n 1.Debit(or)Credit cards\n 2.UPI \n 3.Cash On Delivery\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            printf("Your total bill is %f",s);
            printf("\n please enter your Debit(or)Credit cards number : ");
            scanf("%d",&CN);
            printf("Enter CVV : ");
            scanf("%d",&CVV);
            printf("Enter expiry date : ");
            scanf("%d",&expirydate);
            printf("Enter OTP which sent to your phone number : ");
            scanf("%d",&OTP);
            printf("Your payment is done successfully ");
            break;

            case 2:
            printf("Your total bill is %f",s);
            printf("Enter your UPI id : ");
            scanf("%d",&upi);
            printf("Check your UPI for further transaction :) ");
            break;

            case 3:
            printf("Your total bill is %f\n",s);
            printf("%d\n",HFNO);
            printf("%s\n",apartmentname);
            printf("%s\n",street);
            printf("%s\n",landmark);
            printf("%d\n",PINcode);
            printf("%s\n",state);
            printf("TRANSCATION COMPLETED\n");
            printf("Thank u");
            break;

            default :
                printf("INVALID OPTION");
        }
    }
      else
     {
         printf("Hello %s\n",Name);
         printf("Sorry to say this :( .\nThis website is only for people who has age above 45.\nOur APPOLO store gives you very nice discount medicine which you required.\nMake sure that you may have APPOLO card such that you might get additional discount on medicine which order :).\nTHANKS FOR CHOOSING APPOLO WE HAVE 24/7 SERVICING STAFF FOR \n                      FOR ANY KIND OF MEDICINE PLEASE VIST APPOLO PHARMACY\n                     YOU WILL GET BEST DEALS WHEN COMPARE TO OTHER RETAILERS\n                                :)");
     }



    return 0;

}