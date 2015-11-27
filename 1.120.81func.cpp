#include<stdio.h>
#include<conio.h>
#include<math.h>

int a[]={1,0,0,0,0,0,0,1, 1,0,0,0,1,1,0,0, 1,0,0,1,0,1,1,0, 1,0,0,1,1,0,1,0, 0,1,0,1,0,1,1,0, 1,1,1,0,1,1,1,1, 0,0,0,1,1,0,1,0, 1,0,0,0,1,0,0,0, 0,0,0,0,1,0,1,1, 1,0,1,0,0,1,0,0, 1,0,0,0,1,0,0,0, 0,1,1,0,0,1,0,1, 0,0,0,0,0,1,0,1, 1,1,1,0,1,0,1,0, 1,1,0,1,1,1,0,0};

int b[120]={0};
int b1[120]={0};

int ooo,ooi,oio,oii,ioo,ioi,iio,iii=0;//occurances
float pooo,pooi,poio,poii,pioo,pioi,piio,piii;//probability
float hooo,hooi,hoio,hoii,hioo,hioi,hiio,hiii;//Entropy

int ooo1,ooi1,oio1,oii1,ioo1,ioi1,iio1,iii1=0;//2.occurances
float pooo1,pooi1,poio1,poii1,pioo1,pioi1,piio1,piii1;//probability
float hooo1,hooi1,hoio1,hoii1,hioo1,hioi1,hiio1,hiii1;//Entropy

int i,j,k;
int ch;//for function choice

int n=120;//no of bits4

void entropy(int a[120])
{
     
     for(i=0;i<n;)
     {
                       if(a[i]==0)
                       {
                                  if(a[i+1]==0)
                                  {
                                               if(a[i+2]==0)
                                                            ooo++;
                                               else
                                                            ooi++;
                                  }
                                  else
                                  {
                                      if(a[i+2]==0)
                                                   oio++;
                                      else
                                                   oii++;
                                  }
                       }
                       else
                       {
                           if(a[i+1]==0)
                           {
                                        if(a[i+2]==0)
                                                     ioo++;
                                        else
                                                     ioi++;
                           }
                           else
                           {
                               if(a[i+2]==0)
                                            iio++;
                               else
                                   iii++;
                           }
                       }
    i=i+3;
    }
    
    printf("%d %d %d %d %d %d %d %d\n",ooo,ooi,oio,oii,ioo,ioi,iio,iii);
    printf("%d\n",(ooo+ooi+oio+oii+ioo+ioi+iio+iii)*3);
    
    //probability of cases
    pooo=float(ooo)/n;
    pooi=float(ooi)/n;
    poio=float(oio)/n;
    poii=float(oii)/n;
    pioo=float(ioo)/n;
    pioi=float(ioi)/n;
    piio=float(iio)/n;
    piii=float(iii)/n;
    
    //entropy of cases
    hooo = pooo*(log10(pooo)/log10(2));
    hooi = pooi*(log10(pooi)/log10(2));
    hoio = poio*(log10(poio)/log10(2));
    hoii = poii*(log10(poii)/log10(2));
    hioo = pioo*(log10(pioo)/log10(2));
    hioi = pioi*(log10(pioi)/log10(2));
    hiio = piio*(log10(piio)/log10(2));
    hiii = piii*(log10(piii)/log10(2));
    
    printf("\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n",-hooo,-hooi,-hoio,-hoii,-hioo,-hioi,-hiio,-hiii);
    printf("---------------\n");
    printf(" %f\n\n",-(hooo+hooi+hoio+hoii+hioo+hioi+hiio+hiii));
}

void entropy1(int c[120])
{
     /*
     ooo1,ooi1,oio1,oii1,ioo1,ioi1,iio1,iii1=0;//2.occurances
     pooo1,pooi1,poio1,poii1,pioo1,pioi1,piio1,piii1=0;//probability
     hooo1,hooi1,hoio1,hoii1,hioo1,hioi1,hiio1,hiii1=0;//Entropy
       */   
     for(i=0;i<n;)
                   {
                                if(c[i]==0)
                                {
                                           if(c[i+1]==0)
                                           {
                                                        if(c[i+2]==0)
                                                                     ooo1++;
                                                        else
                                                                     ooi1++;
                                           }
                                           else
                                           {
                                               if(c[i+2]==0)
                                                            oio1++;
                                               else
                                                            oii1++;
                                           }
                                }
                                else
                                {
                                           if(c[i+1]==0)
                                           {
                                                        if(c[i+2]==0)
                                                                     ioo1++;
                                                        else
                                                                     ioi1++;
                                           }
                                           else
                                           {
                                               if(c[i+2]==0)
                                                            iio1++;
                                               else
                                                   iii1++;
                                           }
                                }
                                i=i+3;
                   }
    
                   printf("%d %d %d %d %d %d %d %d\n",ooo1,ooi1,oio1,oii1,ioo1,ioi1,iio1,iii1);
                   printf("%d\n",(ooo1+ooi1+oio1+oii1+ioo1+ioi1+iio1+iii1)*3);
    
                   //probability of cases
                   pooo1=float(ooo1)/n;
                   pooi1=float(ooi1)/n;
                   poio1=float(oio1)/n;
                   poii1=float(oii1)/n;
                   pioo1=float(ioo1)/n;
                   pioi1=float(ioi1)/n;
                   piio1=float(iio1)/n;
                   piii1=float(iii1)/n;
                   
                   //entropy of cases
                   hooo1 = pooo1*(log10(pooo1)/log10(2));
                   hooi1 = pooi1*(log10(pooi1)/log10(2));
                   hoio1 = poio1*(log10(poio1)/log10(2));
                   hoii1 = poii1*(log10(poii1)/log10(2));
                   hioo1 = pioo1*(log10(pioo1)/log10(2));
                   hioi1 = pioi1*(log10(pioi1)/log10(2));
                   hiio1 = piio1*(log10(piio1)/log10(2));
                   hiii1 = piii1*(log10(piii1)/log10(2));
                   
                   /*
                   printf(" %f\n",  iii1);
                   printf(" %f\n", piii);
                   printf(" %f\n", hiii);
                   */
                   if(ooo1==0)
                               hooo1=-0;
                   if(ooi1==0)
                               hooi1=-0;
                   if(oio1==0)
                               hoio1=-0;
                   if(oii1==0)
                               hoii1=-0;
                   if(ioo1==0)
                               hioo1=-0;
                   if(ioi1==0)
                               hioi1=-0;
                   if(iio1==0)
                               hiio1=-0;
                   if(iii1==0)
                               hiii1=-0;
    
                   printf("\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n %.6f\n",-hooo1,-hooi1,-hoio1,-hoii1,-hioo1,-hioi1,-hiio1,-hiii1);
                   printf("---------------\n");
                   printf(" %f\n\n",-(hooo1+hooi1+hoio1+hoii1+hioo1+hioi1+hiio1+hiii1));     
}

int main()
{
    //printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(a)/sizeof(a[0]));
    entropy(a);
    
    //label:
          /*
          ooo1,ooi1,oio1,oii1,ioo1,ioi1,iio1,iii1=0;//2.occurances
          pooo1,pooi1,poio1,poii1,pioo1,pioi1,piio1,piii1=0;//probability
          hooo1,hooi1,hoio1,hoii1,hioo1,hioi1,hiio1,hiii1=0;//Entropy
          */
          
    /*
    int cont=1;
    while(cont!=0)
    {
                  */
    printf("Functions\n");
    
    printf("    1. invert first 60 MSBs\n");
    printf("    2. invert last 60 MSBs\n");
    printf("    3. invert alternate MSBs\n");
    
    printf("    4. invert first 60 (MSB-1)s\n");
    printf("    5. invert last 60 (MSB-1)s\n");
    printf("    6. invert alternate (MSB-1)s\n");
    
    printf("    7. invert first 60 (MSB-2)s\n");
    printf("    8. invert last 60 (MSB-2)s\n");
    printf("    9. invert alternate (MSB-2)s\n");
    
    printf("10-16. 1 with 3 to 9\n");
    printf("17-23. 2 with 3 to 9\n");
    printf("24-31. 3 with 1,2,4 to 9\n");
    
    printf("32-38. 4 with 1,2,3,6 to 9\n");
    printf("39-45. 5 with 1,2,3,6 to 9\n");
    printf("46-53. 6 with 1 to 5,7,8,9\n");
    
    printf("54-60. 7 with 1 to 6,9\n");
    printf("61-67. 8 with 1 to 6,9\n");
    printf("68-75. 9 with 1 to 8\n");
    printf("\n");
    scanf("%d",&ch);
    switch(ch)
    {
              case 1:
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   entropy1(b);
                   break;
                   
              case 2:
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b);
                   break;
                   
              case 3:
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b);
                   break;
                  
             case 4:
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   entropy1(b);
                   break;
                   
              case 5:
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b);
                   break;
                   
              case 6:
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b);
                   break;
                   
              case 7:
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   entropy1(b);
                   break;
                   
              case 8:
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b);
                   break;
                   
              case 9:
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b);
                   break;
                   
              case 10:
                   for(i=0;i<=int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  if(a[i+3]==0)
                                             b[i+3]=1;
                                  else
                                             b[i+3]=0;
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b);
                   break;
                   /*
                   // 1 + 3
                   // 1.invert first 60 MSBs
                   for(i=0;i<=int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   */
                   
              case 11:
                   // 1 + 4
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 12:
                   // 1 + 5
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 13:
                   // 1 + 6
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 14:
                   // 1 + 7
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 15:
                   // 1 + 8
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 16:
                   // 1 + 9
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 17:
                   // 2 + 3
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 18:
                   // 2 + 4
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 19:
                   // 2 + 5
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 20:
                   // 2 + 6
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 21:
                   // 2 + 7
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 22:
                   // 2 + 8
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 23:
                   // 2 + 9
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 24:
                   // 3 + 1
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 25:
                   // 3 + 2
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 26:
                   // 3 + 4
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 27:
                   // 3 + 5
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 28:
                   // 3 + 6
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 29:
                   // 3 + 7
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 30:
                   // 3 + 8
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 31:
                   // 3 + 9
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 32:
                   // 4 + 1
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 33:
                   // 4 + 2
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 34:
                   // 4 + 3
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
               
              case 35:
                   // 4 + 6
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 36:
                   // 4 + 7
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 37:
                   // 4 + 8
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 38:
                   // 4 + 9
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 39:
                   // 5 + 1
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 40:
                   // 5 + 2
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 41:
                   // 5 + 3
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
               
              case 42:
                   // 5 + 6
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 43:
                   // 5 + 7
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 44:
                   // 5 + 8
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 45:
                   // 5 + 9
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 46:
                   // 6 + 1
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 47:
                   // 6 + 2
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 48:
                   // 6 + 3
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 49:                   
                   // 6 + 4
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 50:
                   // 6 + 5
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 51:
                   // 6 + 7
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 52:
                   // 6 + 8
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 53:
                   // 6 + 9
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 54:
                   // 7 + 1
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 55:
                   // 7 + 2
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 56:
                   // 7 + 3
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 57:
                   // 7 + 4
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 58:
                   // 7 + 5
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 59:
                   // 7 + 6
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 60:
                   // 7 + 9
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 61:
                   // 8 + 1
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 62:
                   // 8 + 2
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 63:
                   // 8 + 3
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
              
              case 64:
                   // 8 + 4
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 65:
                   // 8 + 5
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 66:
                   // 8 + 6
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 67:
                   // 8 + 9
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 68:
                   // 9 + 1
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 69:
                   // 9 + 2
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 70:
                   // 9 + 3
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 71:                
                   // 9 + 4
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 72:
                   // 9 + 5
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 73:
                   // 9 + 6
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 74:
                   // 9 + 7
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 75:
                   // 9 + 8
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
//                 3 Functions bunch started ***************************************************************************************                 
              
              case 76:
                   // 1 + 3 +4
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b2[i]=b1[i];     
                                  if(b1[i+1]==0)
                                             b2[i+1]=1;
                                  else
                                             b2[i+1]=0;
                                  b2[i+2]=b1[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b2[i]=b1[i];
                   entropy1(b2);
                   break;
                   
              case 77:
                   // 1 + 3 + 5
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b2[i]=b1[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b2[i]=b1[i];     
                                  if(b1[i+1]==0)
                                             b2[i+1]=1;
                                  else
                                             b2[i+1]=0;
                                  b2[i+2]=b1[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b2);
                   break;
                   
              case 78:
                   // 1 + 3 + 6
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b2[i]=b1[i];     
                                  if(b1[i+1]==0)
                                             b2[i+1]=1;
                                  else
                                             b2[i+1]=0;
                                  b2[i+2]=b1[i+2];
                                  b2[i+3]=b1[i+3];
                                  b2[i+4]=b1[i+4];
                                  b2[i+5]=b1[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b2);
                   break;
                   
              case 79:
                   // 1 + 3 + 7
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b2[i]=b1[i];
                                  b2[i+1]=b1[i+1];     
                                  if(b1[i+2]==0)
                                             b2[i+2]=1;
                                  else
                                             b2[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b2[i]=b1[i];
                   entropy1(b2);
                   break;
                   
              case 80:
                   // 1 + 3 + 8
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b2[i]=b1[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b2[i]=b1[i];
                                  b2[i+1]=b1[i+1];     
                                  if(b1[i+2]==0)
                                             b2[i+2]=1;
                                  else
                                             b2[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b2);
                   break;
                   
              case 81:
                   // 1 + 3 + 9
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b2[i]=b1[i];
                                  b2[i+1]=b1[i+1];     
                                  if(b1[i+2]==0)
                                             b2[i+2]=1;
                                  else
                                             b2[i+2]=0;
                                  i=i+3;
                                  b2[i+3]=b1[i+3];
                                  b2[i+4]=b1[i+4];
                                  b2[i+5]=b1[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b2);
                   break;
                   
                   
                   
                   
                   
                   //yaha tak
                   
                   
                   
                   
                   
              case 17:
                   // 2 + 3
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 18:
                   // 2 + 4
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 19:
                   // 2 + 5
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 20:
                   // 2 + 6
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 21:
                   // 2 + 7
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 22:
                   // 2 + 8
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 23:
                   // 2 + 9
                   // 2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 24:
                   // 3 + 1
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 25:
                   // 3 + 2
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 26:
                   // 3 + 4
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 27:
                   // 3 + 5
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 28:
                   // 3 + 6
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 29:
                   // 3 + 7
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 30:
                   // 3 + 8
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 31:
                   // 3 + 9
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(a[i]==0)
                                             b[i]=1;
                                  else
                                             b[i]=0;
                                  b[i+1]=a[i+1];
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 32:
                   // 4 + 1
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 33:
                   // 4 + 2
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 34:
                   // 4 + 3
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
               
              case 35:
                   // 4 + 6
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 36:
                   // 4 + 7
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 37:
                   // 4 + 8
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 38:
                   // 4 + 9
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 39:
                   // 5 + 1
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 40:
                   // 5 + 2
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 41:
                   // 5 + 3
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
               
              case 42:
                   // 5 + 6
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 43:
                   // 5 + 7
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 44:
                   // 5 + 8
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 45:
                   // 5 + 9
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  i=i+3;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 46:
                   // 6 + 1
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 47:
                   // 6 + 2
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 48:
                   // 6 + 3
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 49:                   
                   // 6 + 4
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 50:
                   // 6 + 5
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 51:
                   // 6 + 7
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 52:
                   // 6 + 8
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 53:
                   // 6 + 9
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];     
                                  if(a[i+1]==0)
                                             b[i+1]=1;
                                  else
                                             b[i+1]=0;
                                  b[i+2]=a[i+2];
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 54:
                   // 7 + 1
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 55:
                   // 7 + 2
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 56:
                   // 7 + 3
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 57:
                   // 7 + 4
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 58:
                   // 7 + 5
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 59:
                   // 7 + 6
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 60:
                   // 7 + 9
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b[i]=a[i];
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 61:
                   // 8 + 1
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 62:
                   // 8 + 2
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
              
              case 63:
                   // 8 + 3
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
              
              case 64:
                   // 8 + 4
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 65:
                   // 8 + 5
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 66:
                   // 8 + 6
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 67:
                   // 8 + 9
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b[i]=a[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;                          
                   }
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 68:
                   // 9 + 1
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 1.invert first 60 MSBs
                   for(i=0;i<int(n/2);)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 69:
                   // 9 + 2
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   //2.invert last 60 MSBs
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 70:
                   // 9 + 3
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 3.invert alternate MSBs
                   for(i=0;i<n;)
                   {
                                  if(b[i]==0)
                                             b1[i]=1;
                                  else
                                             b1[i]=0;
                                  b1[i+1]=b[i+1];
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 71:                
                   // 9 + 4
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 4.invert first 60 (MSB-1)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 72:
                   // 9 + 5
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 5.invert last 60 (MSB-1)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 73:
                   // 9 + 6
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 6.invert alternate (MSB-1)s
                   for(i=0;i<n;)
                   {
                                  b1[i]=b[i];     
                                  if(b[i+1]==0)
                                             b1[i+1]=1;
                                  else
                                             b1[i+1]=0;
                                  b1[i+2]=b[i+2];
                                  b1[i+3]=b[i+3];
                                  b1[i+4]=b[i+4];
                                  b1[i+5]=b[i+5];
                                  i=i+6;                          
                   }
                   entropy1(b1);
                   break;
                   
              case 74:
                   // 9 + 7
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 7.invert first 60 (MSB-2)s
                   for(i=0;i<int(n/2);)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   for(i=int(n/2);i<n;i++)
                                     b1[i]=b[i];
                   entropy1(b1);
                   break;
                   
              case 75:
                   // 9 + 8
                   // 9.invert alternate (MSB-2)s
                   for(i=0;i<n;)
                   {
                                  b[i]=a[i];
                                  b[i+1]=a[i+1];     
                                  if(a[i+2]==0)
                                             b[i+2]=1;
                                  else
                                             b[i+2]=0;
                                  i=i+3;
                                  b[i+3]=a[i+3];
                                  b[i+4]=a[i+4];
                                  b[i+5]=a[i+5];
                                  i=i+6;                          
                   }
                   // 8.invert last 60 (MSB-2)s
                   for(i=0;i<int(n/2);i++)
                                     b1[i]=b[i];
                   for(i=int(n/2);i<n;)
                   {
                                  b1[i]=b[i];
                                  b1[i+1]=b[i+1];     
                                  if(b[i+2]==0)
                                             b1[i+2]=1;
                                  else
                                             b1[i+2]=0;
                                  i=i+3;                          
                   }
                   entropy1(b1);
                   break;

             default:
                     printf("Enter valid argument\n");
    
    }
    /*
    printf("Press 0 to exit\n");
    scanf("%d",&cont);
    }
    */
    
    //goto label;                                                   
    getch();
    return 0;
    
    
}
