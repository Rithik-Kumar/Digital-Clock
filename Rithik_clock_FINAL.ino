//This code is self written by me (Rithik Kumar).

//unsigned int temp=0;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void display(int dec)
{
//This is the code given by gvv sharma sir. 
int a, b, c, d, e, f, g, A, B, C, D;
  
  A = dec%2;
  dec = dec/2;
  B=dec%2;
  dec = dec/2;
  C = dec%2;
  D = dec/2;
  
  a = A&&!B&&!C&&!D || !A&&!B&&C&&!D;
  b = A&&!B&&C&&!D || !A&&B&&C&&!D;
  c = !A&&B&&!C&&!D;
  d = A&&!B&&!C&&!D || !A&&!B&&C&&!D || A&&B&&C&&!D;
  e = A&&!B&&!C&&!D || A&&B&&!C&&!D || !A&&!B&&C&&!D || A&&!B&&C&&!D || A&&B&&C&&!D || A&&!B&&!C&&D;
  f = A&&!B&&!C&&!D || !A&&B&&!C&&!D || A&&B&&!C&&!D || A&&B&&C&&!D;
  g = A&&!B&&!C&&!D || !A&&!B&&!C&&!D || A&&B&&C&&!D;
  
  digitalWrite(2, !a);
  digitalWrite(3, !b);
  digitalWrite(4, !c);
  digitalWrite(5, !d);
  digitalWrite(6, !e);
  digitalWrite(7, !f);
  digitalWrite(8, !g);

}

//unsigned long elapsed=0;

void loop() 
{for(int ht=0;ht<6;ht++) 
 {for(int hu=0;hu<10;hu++)
  {for(int mt=0;mt<6;mt++)
   {for(int mu=0; mu<10; mu++)
    {for(int tenth=0; tenth<6; tenth++)
     {
       for(int unit=0; unit<10; unit++)
       {
        unsigned long ctime = millis();
         for (/*elapsed %= 1000*/ unsigned long elapsed=0 ; elapsed < 989/*speeeeed*/; elapsed = millis() - ctime)
         {
           showunit(unit);
           delay(2);
           showtenth(tenth);
           delay(2);
           showmu(mu);
           delay(2);
           showmt(mt);
           delay(2);
           showhu(hu);
           delay(2);
           showht(ht);
           delay(2);

         }
       }
     }
    }
   }
     
     if(ht==2&&hu==3)
     {ht=0;
      hu=-1;
     }
  }
 }

} 
 
void showunit(int x)
{ digitalWrite(9,0); 
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,1);
  digitalWrite(1,1);
  display(x);
}

void showtenth(int x)
{ digitalWrite(9,1); 
  digitalWrite(10,0);
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,1);
  digitalWrite(1,1);
  display(x);
}

void showmu(int x)
{ digitalWrite(9,1); 
  digitalWrite(10,1);
  digitalWrite(11,0);
  digitalWrite(12,1);
  digitalWrite(13,1);
  digitalWrite(1,1);
  display(x);
}

void showmt(int x)
{ digitalWrite(9,1); 
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,0);
  digitalWrite(13,1);
  digitalWrite(1,1);
  display(x);
}
 
void showhu(int x)
{ digitalWrite(9,1); 
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,0);
  digitalWrite(1,1);
  display(x);
}
 
void showht(int x)
{ digitalWrite(9,1); 
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,1);
  digitalWrite(1,0);
  display(x);
}
