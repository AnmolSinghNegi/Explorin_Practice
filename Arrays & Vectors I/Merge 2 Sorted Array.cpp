vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int>arr;
    int i=0,j=0;
    if(a[0]<b[0]){
        arr.push_back(a[0]);
        i++;
    }
    else{
        arr.push_back(b[0]);
        j++;
    }
    int k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            if(a[i]!=arr[k]){
               arr.push_back(a[i]);
               k++; 
            }
            i++;
        }
        else{
            if (b[j] != arr[k]) {
               arr.push_back(b[j]);
               k++;
            }
            j++;
        }
    }
     if(i<a.size()){
            for(;i<a.size();i++){
               if (a[i] != arr[k]) {
                 arr.push_back(a[i]);
                 k++;
               }
            }
        }
        else if(j<b.size()){
            for(;j<b.size();j++){
               if (b[j] != arr[k]) {
                 arr.push_back(b[j]);
                 k++;
               }
            }
        }
    return arr;
    
}