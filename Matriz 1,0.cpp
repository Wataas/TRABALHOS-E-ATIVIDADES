   int soma=0;
    
    cout<<"preencha a matriz A"<< endl;
    
    for(li=0; li<3; li++) {
        for(c=0; c<5; c++) {
            cin>>maA[li][c];
        }
    }
    
    cout<<"preencha a matriz B"<< endl;
    
    for(li=0; li<3; li++) {
        for(c=0; c<5; c++) {
            cin>>maB[li][c];
        }
    }
    
    cout<<"matriz c"<< endl;
    
    for(li=0; li<3; li++) {
        for(c=0; c<5; c++) {
            
            maC[li][c] = maA[li][c] + maB[li][c];
        }
    }
    
     for(li=0; li<3; li++) {
        for(c=0; c<5; c++) {
            
            cout<<maC[li][c]<<" ";
        }
        cout<<endl;
     }
}
 
