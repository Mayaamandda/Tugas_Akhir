#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

    int *p_pilih = new int[100]; 
    int *p_jumlah = new int[100]; 
    int *p_sub_total = new int[100]; 
    int *p_harga = new int[100]; 
    string *p_obat = new string[100];
    double *p_diskon = new double [100];
    int total_bayar = 0;
    int i=0; 
    bool selesai=false; 
    
void maya(){


    cout<<"=================================================================================="<<endl;
    cout<<"===========================DAFTAR HARGA OBAT APOTEK MAYA=========================="<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"1. Paracetamol           Rp. 7000        diskon 5% untuk pembelian di atas 10 item"<<endl;
    cout<<"2. Ampicilin             Rp. 8000        diskon 3% untuk pembelian di atas 20 item"<<endl;
    cout<<"3. Antasidadoen          Rp. 12000       diskon 7% untuk pembelian di atas 5 item"<<endl;
    cout<<"4. CTM                   Rp. 3000        diskon 10% untuk pembelian di atas 15 item"<<endl;
    cout<<"5. Mefenamic Acid        Rp. 9000        diskon 4% untuk pembelian di atas 8 item"<<endl;
    cout<<"6. Omeprazole            Rp. 12500       diskon 6% untuk pembelian di atas 12 item"<<endl;
    cout<<"7. Cetrizine             Rp. 19000       diskon 8% untuk pembelian di atas 7 item"<<endl;
    cout<<"8. Imboost               Rp. 27000       diskon 15% untuk pembelian di atas 5 item"<<endl;
    cout<<"9. OBH Combi             Rp. 13000       diskon 2% untuk pembelian di atas 10 item"<<endl;
    cout<<"10. Contrexyn            Rp. 6500        diskon 3% untuk pembelian di atas 15 item"<<endl;
    cout<<"=================================================================================="<<endl<<endl;
    cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    cout<<"=================================================================================="<<endl;


    while(selesai==false){
        cout<<"Silakan pilih obat                           : ";
        cin>>*(p_pilih + i);

        if (*(p_pilih + i) <= 10){
            if (*(p_pilih + i) == 0){
                selesai=true;
            } else {
                switch (*(p_pilih + i)) {
                    case 1:
                        *(p_obat + i) = "Paracetamol       ";
                        *(p_harga + i) = 7000;
                        *(p_diskon + i) = 0.05;
                        break;
                    case 2:
                        *(p_obat + i) = "Ampicilin         ";
                        *(p_harga + i) = 8000;
                        *(p_diskon + i) = 0.03;
                        break;
                    case 3:
                        *(p_obat + i) = "Antasidadoen      ";
                        *(p_harga + i) = 12000;
                        *(p_diskon + i) = 0.07;
                        break;
                    case 4:
                        *(p_obat + i) = "ctm               ";
                        *(p_harga + i) = 3000;
                        *(p_diskon + i) = 0.1;
                        break;
                    case 5:
                        *(p_obat + i) = "Mefenamic Acid    ";
                        *(p_harga + i) = 9000;
                        *(p_diskon + i) = 0.04;
                        break;
                    case 6:
                        *(p_obat + i) = "Omeprazole        ";
                        *(p_harga + i) = 12500;
                        *(p_diskon + i) = 0.06;
                        break;
                    case 7:
                        *(p_obat + i) = "Cetrizine         ";
                        *(p_harga + i) = 19000;
                        *(p_diskon + i) = 0.08;
                        break;
                    case 8:
                        *(p_obat + i) = "Imboost           ";
                        *(p_harga + i) = 27000;
                        *(p_diskon + i) = 0.15;
                        break;
                    case 9:
                        *(p_obat + i) = "OBH Combi         ";
                        *(p_harga + i) = 13000;
                        *(p_diskon + i) = 0.02;
                        break;
                    case 10:
                        *(p_obat + i) = "Contrexyn        ";
                        *(p_harga + i) = 6500;
                        *(p_diskon + i) = 0.03;
                        break;
                    default:
                        cout<<"Maaf pilihan obat tidak tersedia"<<endl;
                        continue;
                }

            cout<<"Silakan masukkan jumlah pembelian            : ";
            cin>>*(p_jumlah + i);

                *(p_sub_total + i) = *(p_harga + i) * *(p_jumlah + i);

                if (*(p_pilih + i) == 1 && *(p_jumlah + i) > 10){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 2 && *(p_jumlah + i) > 20){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 3 && *(p_jumlah + i) > 5){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 4 && *(p_jumlah + i) > 15){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 5 && *(p_jumlah + i) > 8){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 6 && *(p_jumlah + i) > 12){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 7 && *(p_jumlah + i) > 7){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 8 && *(p_jumlah + i) > 5){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 9 && *(p_jumlah + i) > 10){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                } else if (*(p_pilih + i) == 10 && *(p_jumlah + i) > 15){
                    *(p_sub_total + i) = *(p_sub_total + i) - (*(p_sub_total + i) * *(p_diskon + i));
                }
                
                total_bayar += *(p_sub_total + i);
	    		i++;
			}
		} else {
            cout<<endl;
			cout<<"OBAT YANG DIPILIH TIDAK SESUAI!"<<endl;
			cout<<endl;
		}
    
	}
	
cout<<endl;
cout<<"=================================================================================="<<endl;
cout<<"                                  INVOICE PEMBAYARAN                              "<<endl;
cout<<"=================================================================================="<<endl;
cout<<"NO.\tOBAT\t\t\tJUMLAH\tHARGA\tTOTAL\tDISKON\tSUB-TOTAL"<<endl;
for(int j=0; j<i; j++){
    cout<<j+1<<"\t"<<*(p_obat+j)<<"\t"<<*(p_jumlah+j)<<"\t"<<*(p_harga+j)<<"\t"<<(*(p_jumlah+j) * *(p_harga+j))<<"\t"<<(100)**(p_diskon+j)<<"%\t"<<*(p_sub_total+j)<<endl;
}
cout<<"----------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t\tTOTAL BAYAR\t: "<<total_bayar<<endl;
cout<<"=================================================================================="<<endl<<endl;

ofstream myfile;
myfile.open("Invoice Penjualan.txt"); 
myfile<<"=================================================================================="<<endl;
myfile<<"                                  INVOICE PEMBAYARAN                              "<<endl;
myfile<<"=================================================================================="<<endl;
myfile<<"NO.\tOBAT\t\t\tJUMLAH\tHARGA\tTOTAL\tDISKON\tSUB-TOTAL"<<endl;
for(int j=0; j<i; j++){
    myfile<<j+1<<"\t"<<*(p_obat+j)<<"\t"<<*(p_jumlah+j)<<"\t"<<*(p_harga+j)<<"\t"<<(*(p_jumlah+j) * *(p_harga+j))<<"\t"<<(100)**(p_diskon+j)<<"%\t"<<*(p_sub_total+j)<<endl;
}
myfile<<"----------------------------------------------------------------------------------"<<endl;
myfile<<"\t\t\t\tTOTAL BAYAR\t: "<<total_bayar<<endl;
myfile<<"=================================================================================="<<endl<<endl;
myfile.close();


}

int main(){
    maya();
}
