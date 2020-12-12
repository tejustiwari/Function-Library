#define debug1(x)           cout<<#x<<"="<<x<<endl;
#define debug2(x,y)         cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl;
#define debug3(x,y,z)       cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl;
#define debug4(x,y,z,w)     cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<" "<<#w <<"="<<w<<endl;
#define debugarray(arr,n)   for(int i=0;i<n;i++) {cout<<"i="<<i<<" arr[i]="<<arr[i]<<"\n";}
#define debugmatrix(a,n,m)  cout<<setw(5*m+8)<<"MATRIX\n\n";for(int i=0;i<n;i++){for(intj=0;j<m;j++){cout<<setw(10)<<a[i][j];}cout<<"\n
