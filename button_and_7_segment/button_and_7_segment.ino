int i,j,k;
int pina[8]={0,1,2,3,4,5,6};
int a[10][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},
  };
void setup() {
  for(i=0;i<7;i++)
{
  pinMode(pina[i],OUTPUT);
digitalWrite(pina[i],0);
 }
  
pinMode(8,INPUT);
}

void loop() {
  int a1=digitalRead(8);
  k==0;
  if(a1==1)
  {
    k++;
    int p=0;
  for(j=0;j<7;j++)
  {
    digitalWrite(pina[p],a[k][j]);
    p++;
  }
  delay(1000);
  }
  
  
 
}
