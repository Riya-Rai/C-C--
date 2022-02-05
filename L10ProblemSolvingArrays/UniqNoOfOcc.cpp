

int number(int arr[], int size){

        for(int i=0; i<size; i++){

        int count=0;
        int num = arr[i];

        for(int j=0; j<size; j++){

            if(arr[j]==num){
                count++;
            }

        }

        return count;

    }
    

}

bool unique(int n){



}