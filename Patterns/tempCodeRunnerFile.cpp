void invertedPyramid(int n){

    for (int  row = 0; row < n; row++)
    {   
        // 1.> spaces
        for (int col = 0; col < row; col++)
        {
            cout<<" ";
        }
        // 2.> stars
         for (int col = 0; col < n-row; col++)
         {
            if (row==0 || row==n-1 || col==0|| col==n-row-1)
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
         }
            cout<<endl;
         
        
    }
    
}
