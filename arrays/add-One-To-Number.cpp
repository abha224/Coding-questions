// Problem link: https://www.interviewbit.com/problems/add-one-to-number/


vector<int> Solution::plusOne(vector<int> &a) {
    
     a.insert(a.begin(),0); //insert 0 in the begining of the vector to handle 9 , 99 ...cases
     int n=a.size();
     
     for(int i=n-1;i>=0;i--)
     {
        if(a[i]<9){
            a[i]++;
            break;
        }
        else
            a[i]=0;
     }
       
    while(a[0]==0 && a.size()>1) 
    a.erase(a.begin()); //remove that added 0 if not used 
    
    return a;
}

