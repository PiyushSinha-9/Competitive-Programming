// In Notes

void primeFact(int N){
    for(int i=2;i*i<=N;i++){
        if(N%i==0){
            int cnt = 0;
            while(N%i==0){
                cnt+=1;
                N/=i;
            }
            cout<<i<<" ^ "<<cnt<<endl;
        }
        if(N>1){        // Condition For Prime Number 
            cout<<N<<"^"<<1<<endl;
        }
    }
}