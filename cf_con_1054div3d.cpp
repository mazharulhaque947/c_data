
// Codeforces Round 1054 (Div. 3) D A and B   #### link >>  https://codeforces.com/contest/2149/problem/D
//wanted to make clean code >>> also wanted to use version control .....

#include<bits/stdc++.h>

using namespace std;

void mai()
{
    long long a[100],b[100],i,j,k,l,m,n,t,o,p,s,r,v,u,x,q,g,d,mm,ss,mi,w,oo,ooo;
    char c[101];
    //cin>>t;
    t=1;
    while(t--)
    {
        cin>>n;
        cin>>c;
        l=k=0;

        for(i=0;i<n;i++){ if(c[i]=='a'){a[k]=i; k++;} else{b[l]=i; //cout<<b[l]<<" ";
         l++;} }

        // base case <3 ans is 0
        if(n<=3||k==0||l==0){cout<<0<<"\n";}

        // have to see total legbth of a or b which is is smaller

        else{

        // 1st case if total legnth of a is smaller or same as b ? this part sends all b out from group of a
            ss=0;
            if(k>0){ss=a[k-1]-a[0];}
            mm=0;
            if(l>0){mm=b[l-1]-b[0];}
//cout<<ss<<"  "<<mm<<"\n";
            if(ss==mm){

                // ist

                    // if all a are togather then ans = 0;
                    ooo=-1;

                    if(a[k-1]-a[0]+1==k){  ooo=1; }

                  // or we have to let b exit from the edge
                else{
              // this part finds first b in group  of a   (value of r )
              // r= ^^ positio
               // s = position of first a
               //u = position of last a
               // r = position of first b in group of a;
               // v = position of last b in group of a

              s=a[0];
              u=a[k-1];
              ss=0;
              mm=l-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
                //cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(b[mi]<s){  ss=mi; }
                else{  mm=mi; }




              }

              for(i=ss;i<=mm;i++){  r=i; if(b[i]>a[0]){break;} }

              //cout<<s<<" "<<u<<" "<<r<<"\n";

               // this part finds last  a in group  of b   (  value of v )
              ss=0;
              mm=l-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
               // cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(b[mi]>u){  mm=mi; }
                else{  ss=mi; }




              }


               for(i=mm;i>=ss;i--){v=i; if(b[i]<u){break;} }
              //cout<<s<<" "<<u<<" "<<r<<" "<<v<<"\n";

             // this part finds shortest path for the b at the edge
              d=o=0;
              w=u-s+1-k;
              while(d<w){
                // optimal path for left most b
                if(u-b[v]<=b[v]-s){ q=u-b[v]; p=1; }
                else{  q=b[v]-s; p=0; }
                // optimal path for right most b
                if(b[r]-s<=u-b[r]){x=b[r]-s; g=1; }
                else{ x=u-b[r]; g=0;  }

                //     let  b pass and update the positions
                if(q<=x){     o+=q; v--; if( p==1 ){u--;}else{ s++; } }
                else{   o+=x; r++; if(g==1){ s++; }else{u--;} }
                //cout<<"o"<<o<<"\n";
                d++;
              }


            }
              // second


                if(b[l-1]-b[0]+1==l){  ooo=1; }
                // or we have to let b exit from the edge
                else{
                // this part finds first a in group  of b   (value of r )
              // r= ^^ positio
               // s = position of first b
               //u = position of last b
               // r = position of first a in group of b;
               // v = position of last a in group of b

              s=b[0];
              u=b[l-1];
              ss=0;
              mm=k-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
                //cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(a[mi]<s){  ss=mi; }
                else{  mm=mi; }




              }

              for(i=ss;i<=mm;i++){  r=i; if(a[i]>b[0]){break;} }

             // cout<<s<<" "<<u<<" "<<r<<"  \n";
                // this part finds last  b in group  of a   (  value of v )
              ss=0;
              mm=k-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
                //cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(a[mi]>u){  mm=mi; }
                else{  ss=mi; }




              }


               for(i=mm;i>=ss;i--){v=i; if(a[i]<u){break;} }
            //  cout<<s<<" "<<u<<" "<<r<<" "<<v<<"final before  \n";

                 // this part finds shortest path for the a at the edge
              d=oo=0;
              w=u-s+1-l;
              while(d<w){
                // optimal path for left most a
                if(u-a[v]<=a[v]-s){ q=u-a[v]; p=1; }
                else{  q=a[v]-s; p=0; }
                // optimal path for right most a
                if(a[r]-s<=u-a[r]){x=a[r]-s; g=1; }
                else{ x=u-a[r]; g=0;  }

                //     let a  pass and update the positions
                if(q<=x){     oo+=q; v--; if( p==1 ){u--;}else{ s++; } }
                else{   oo+=x; r++; if(g==1){ s++; }else{u--;} }
                //cout<<"oo"<<oo<<"\n";
                d++;
              }


                }
                if(ooo==1){  cout<<0<<"\n"; }
                else {if(o>oo){o=oo;}  cout<<o<<"\n"; }


            }

            else{
                    // if all a are togather then ans = 0;
                    ooo=-1;
                    if(a[k-1]-a[0]+1==k){ ooo=1;  }

                  // or we have to let b exit from the edge
                else{
              // this part finds first b in group  of a   (value of r )
              // r= ^^ positio
               // s = position of first a
               //u = position of last a
               // r = position of first b in group of a;
               // v = position of last b in group of a

              s=a[0];
              u=a[k-1];
              ss=0;
              mm=l-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
                //cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(b[mi]<s){  ss=mi; }
                else{  mm=mi; }




              }

              for(i=ss;i<=mm;i++){  r=i; if(b[i]>a[0]){break;} }

              //cout<<s<<" "<<u<<" "<<r<<"\n";

               // this part finds last  a in group  of b   (  value of v )
              ss=0;
              mm=l-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
               // cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(b[mi]>u){  mm=mi; }
                else{  ss=mi; }




              }


               for(i=mm;i>=ss;i--){v=i; if(b[i]<u){break;} }
              //cout<<s<<" "<<u<<" "<<r<<" "<<v<<"\n";

             // this part finds shortest path for the b at the edge
              d=o=0;
              w=u-s+1-k;
              while(d<w){
                // optimal path for left most b
                if(u-b[v]<=b[v]-s){ q=u-b[v]; p=1; }
                else{  q=b[v]-s; p=0; }
                // optimal path for right most b
                if(b[r]-s<=u-b[r]){x=b[r]-s; g=1; }
                else{ x=u-b[r]; g=0;  }

                //     let  b pass and update the positions
                if(q<=x){     o+=q; v--; if( p==1 ){u--;}else{ s++; } }
                else{   o+=x; r++; if(g==1){ s++; }else{u--;} }

                d++;
              }


            }


            // 2nd case if total legnth of a is smaller this part let all b out from group of a


                      // if all b are togather then ans = 0;
                if(b[l-1]-b[0]+1==l){  ooo=1; }
                // or we have to let b exit from the edge
                else{
                // this part finds first a in group  of b   (value of r )
              // r= ^^ positio
               // s = position of first b
               //u = position of last b
               // r = position of first a in group of b;
               // v = position of last a in group of b

              s=b[0];
              u=b[l-1];
              ss=0;
              mm=k-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
                //cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(a[mi]<s){  ss=mi; }
                else{  mm=mi; }




              }

              for(i=ss;i<=mm;i++){  r=i; if(a[i]>b[0]){break;} }

             // cout<<s<<" "<<u<<" "<<r<<"  \n";
                // this part finds last  b in group  of a   (  value of v )
              ss=0;
              mm=k-1;
              while(mm-ss>2){

                mi=ss+(mm-ss)/2;
                //cout<<mi<<" "<<ss<<" "<<mm<<"   in\n";
                if(a[mi]>u){  mm=mi; }
                else{  ss=mi; }




              }


               for(i=mm;i>=ss;i--){v=i; if(a[i]<u){break;} }
            //  cout<<s<<" "<<u<<" "<<r<<" "<<v<<"final before  \n";

                 // this part finds shortest path for the a at the edge
              d=oo=0;
              w=u-s+1-l;
              while(d<w){
                // optimal path for left most a
                if(u-a[v]<=a[v]-s){ q=u-a[v]; p=1; }
                else{  q=a[v]-s; p=0; }
                // optimal path for right most a
                if(a[r]-s<=u-a[r]){x=a[r]-s; g=1; }
                else{ x=u-a[r]; g=0;  }

                //     let a  pass and update the positions
                if(q<=x){     oo+=q; v--; if( p==1 ){u--;}else{ s++; } }
                else{   oo+=x; r++; if(g==1){ s++; }else{u--;} }

                d++;
              }


                }

                if(ooo==1){cout<<"0\n";}
                else{ if(o>oo){o=oo;} cout<<o<<"\n";}


        }

    }


}
}

int main()
{

    int i,j,k,n;

    cin>>k;



    for(i=0;i<k;i++){ mai(); }



return 0;
}
