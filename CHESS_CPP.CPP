#include <iostream.h>
#include <conio.h>
char A[8][8],p;
int L[4],K[4];
void undo(int x,int y,int z,int w)
{
	A[x][y]=A[z][w];
	A[z][w]=p;
}
int check(int c,int a=L[0],int b=L[1],int a1=L[2],int b1=L[3])
{
	int i,j;
	if(c==1)
	{
		i=a-1;
		while(i>=0)
		{		
			if(A[i][b]==' ');
			else if(i==(a-1) && A[i][b]=='k')
			{	cout<<"W4k";return 1;}
			else if(A[i][b]=='r' || A[i][b]=='q')
			{	cout<<"W4rq";return 1;}
			else
				break;
			i--;
		}
		i=a+1;
		while(i<8)
		{		
			if(A[i][b]==' ');
			else if(i==(a+1) && A[i][b]=='k')
			{	cout<<"W6k";return 1;}
			else if(A[i][b]=='r' || A[i][b]=='q')
			{	cout<<"W6rq";return 1;}
			else
				break;
			i++;
		}
		i=b-1;
		while(i>=0)
		{		
			if(A[a][i]==' ');
			else if(i==(b-1) && A[a][i]=='k')
			{	cout<<"W2k";return 1;}
			else if(A[a][i]=='r' || A[a][i]=='q')
			{	cout<<"W2rq";return 1;}
			else
				break;
			i--;
		}
		i=b+1;
		while(i>=0)
		{		
			if(A[a][i]==' ');
			else if(i==(b-1) && A[a][i]=='k')
			{	cout<<"W8k";return 1;}
			else if(A[a][i]=='r' || A[a][i]=='q')
			{	cout<<"W8qr";return 1;}
			else
				break;
			i++;
		}
		i=a-1;
		j=b-1;
		while(i>=0 && j>=0)
		{
			if(A[i][j]==' ');
			else if(i==(a-1) && ( A[i][j]=='k' || A[i][j]=='p'))
			{	cout<<"W1kp";return 1;}
			else if(A[i][j]=='b' || A[i][j]=='q')
			{	cout<<"W1qb";return 1;}
			else
				break;
			i--;
			j--;
		}
		i=a-1;
		j=b+1;
		while(i>=0 && j<8)
		{
			if(A[i][j]==' ');
			else if(i==(a-1) && ( A[i][j]=='k' || A[i][j]=='p'))
			{	cout<<"W3kp";return 1;}
			else if(A[i][j]=='b' || A[i][j]=='q')
			{	cout<<"W3bq";return 1;}
			else
				break;
			i--;
			j++;
		}
		i=a+1;
		j=b+1;
		while(i<8 && j<8)
		{
			if(A[i][j]==' ');
			else if(i==(a+1) && A[i][j]=='k')
			{	cout<<"W9kp";return 1;}
			else if(A[i][j]=='b' || A[i][j]=='q')
			{	cout<<"W9bq";return 1;}
			else
				break;
			i++;
			j++;
		}
		i=a+1;
		j=b-1;
		while(i<8 && j>=0)
		{
			if(A[i][j]==' ');
			else if(i==(a+1) && A[i][j]=='k')
			{	cout<<"W7kp";return 1;}
			else if(A[i][j]=='b' || A[i][j]=='q')
			{	cout<<"W7qb";return 1;}
			else
				break;
			i++;
			j--;
		}
		if((a+1<8&&b+2<8&&A[a+1][b+2]=='n')||(a+1<8&&b-2>=0&&A[a+1][b-2]=='n')||(a-1>=0&&b+2<8&&A[a-1][b+2]=='n')||(a-1>-1&&b-2>-1&&A[a-1][b-2]=='n')||(a+2<8&&b+1<8&&A[a+2][b+1]=='n')||(a+2<8&&b-1>-1&&A[a+2][b-1]=='n')||(a-2>-1&&b-1>-1&&A[a-2][b-1]=='n')||(a-2>-1&&b+1<8&&A[a-2][b+1]=='n'))	
		{	cout<<"Wn";return 1;}
	}
	else
	{
		i=a1-1;
		while(i>=0)
		{		
			if(A[i][b1]==' ');
			else if(i==(a1-1) && A[i][b]=='K')
			{	cout<<"B4k";return 1;}
			else if(A[i][b1]=='R' || A[i][b1]=='Q')
			{	cout<<"B4qr";return 1;}
			else
				break;
			i--;
		}
		i=a1+1;
		while(i<8)
		{		
			if(A[i][b1]==' ');
			else if(i==(a1+1) && A[i][b1]=='K')
			{	cout<<"B6k";return 1;}
			else if(A[i][b1]=='R' || A[i][b1]=='Q')
			{	cout<<"B6qr";return 1;}
			else
				break;
			i++;
		}
		i=b1-1;
		while(i>=0)
		{		
			if(A[a1][i]==' ');
			else if(i==(b1-1) && A[a1][i]=='K')
			{	cout<<"B2k";return 1;}
			else if(A[a1][i]=='R' || A[a1][i]=='Q')
			{	cout<<"B2qr";return 1;}
			else
				break;
			i--;
		}
		i=b1+1;
		while(i>=0)
		{		
			if(A[a1][i]==' ');
			else if(i==(b1-1) && A[a1][i]=='K')
			{	cout<<"B8k";return 1;}
			else if(A[a1][i]=='R' || A[a1][i]=='Q')
			{	cout<<"B8qr";return 1;}
			else
				break;
			i++;
		}
		i=a1-1;
		j=b1-1;
		while(i>=0 && j>=0)
		{
			if(A[i][j]==' ');
			else if(i==(a1-1) && A[i][j]=='K')
			{	cout<<"B1kp";return 1;}
			else if(A[i][j]=='B' || A[i][j]=='Q')
			{	cout<<"B1qb";return 1;}
			else
				break;
			i--;
			j--;
		}
		i=a1-1;
		j=b1+1;
		while(i>=0 && j<8)
		{
			if(A[i][j]==' ');
			else if(i==(a1-1) && A[i][j]=='K')
			{	cout<<"3kp";return 1;}
			else if(A[i][j]=='B' || A[i][j]=='Q')
			{	cout<<"B3qb";return 1;}
			else
				break;
			i--;
			j++;
		}
		i=a1+1;
		j=b1+1;
		while(i<8 && j<8)
		{
			if(A[i][j]==' ');
			else if(i==(a1+1) && (A[i][j]=='K' || A[i][j]=='P'))
			{	cout<<"B9kp";return 1;}
			else if(A[i][j]=='B' || A[i][j]=='Q')
			{	cout<<"B9qb";return 1;}
			else
				break;
			i++;
			j++;
		}
		i=a1+1;
		j=b1-1;
		while(i<8 && j>=0)
		{
			if(A[i][j]==' ');
			else if(i==(a1+1) && (A[i][j]=='K' || A[i][j]=='P'))
			{	cout<<"B7kp";return 1;}
			else if(A[i][j]=='B' || A[i][j]=='Q')
			{	cout<<"B7qb";return 1;}
			else
				break;
			i++;
			j--;
		}
		if((a+1<8&&b+2<8&&A[a+1][b+2]=='N')||(a+1<8&&b-2>=0&&A[a+1][b-2]=='N')||(a-1>=0&&b+2<8&&A[a-1][b+2]=='N')||(a-1>-1&&b-2>-1&&A[a-1][b-2]=='N')||(a+2<8&&b+1<8&&A[a+2][b+1]=='N')||(a+2<8&&b-1>-1&&A[a+2][b-1]=='N')||(a-2>-1&&b-1>-1&&A[a-2][b-1]=='N')||(a-2>-1&&b+1<8&&A[a-2][b+1]=='N'))	
		{	cout<<"Bn";return 1;}
	}
	return 0;
}
int empty(int x,int y,int z,int w,int a,int b,int c)
{
	p=A[z][w];
	if(c==1)
	{
		switch (A[a][b])
		{
			case ' ':
			case 'k':
			case 'q':
			case 'r':
			case 'b':
			case 'n':
			case 'p':A[z][w]=A[x][y];A[x][y]=' ';break;
			default	:return 1;
		}
	}
	else
	{
		switch (A[a][b])
		{
			case ' ':
			case 'K':
			case 'Q':
			case 'R':
			case 'B':
			case 'N':
			case 'P':A[z][w]=A[x][y];A[x][y]=' ';break;
			default	:return 1;
		}
	}
	return 0;
}
int knight(int x,int y,int z,int w,int c=1)
{
	int a=1;
	if((z==(x+1) || z==(x-1))&&(w==(y+2) || w==(y-2)))
		a=empty(x,y,z,w,z,w,c);
	else if((w==(y+1) || w==(y-1))&&(z==(x+2) || z==(x-2)))
		a=empty(x,y,z,w,z,w,c);
	if(a==0 && check(c)==1)
	{
		cout<<"YOU WOULD BE IN CHECK. ";
		undo(x,y,z,w);
		getch();
		return 1;
	}
	return a;
}
int pawn(int x,int y,int z,int w,int c=1)
{
	char ch;
	int a=0;
	if(w==y)
	{
		if(c==1)
		{
			if(x==6)
			{
				if(z==5 && A[5][w]==' ')
					a=empty(x,y,z,w,z,w,c);
				else if(z==4)
					for(int i=5;i>3 && A[i][y]==' ';i--)
						a=empty(x,y,z,w,z,w,c);
				else
					return 1;
			}
			else if(z==0)
			{
				if(A[z][w]==' ')
				{
					p=' ';
					cout<<"enter the value to promote to (R,N,B,Q):";
					cin>>ch;
					A[0][y]=ch;
					A[x][y]=' ';
				}
				else
					a=1;
			}
			else if(z==x-1 && A[z][w]==' ')
			{
				a=empty(x,y,z,w,z,w,c);
			}
			else
				return 1;
		}
		else
		{
			if(x==1)
			{
				if(z==2&&A[2][w]==' ')
					a=empty(x,y,z,w,z,w,c);
				else if(z==3)
					for(int i=2;i<4 && A[i][y]==' ';i++)
						a=empty(x,y,z,w,i,y,c);
				else
					return 1;
			}
			else if(z==7)
			{
				if(A[z][w]==' ')
				{
					p=' ';
					cout<<"enter the value to promote to (r,n,b,q):";
					cin>>ch;
					A[7][y]=ch;
					A[x][y]=' ';
				}
				else
					a=1;
			}
			else if(z==x+1 &&A[z][w]==' ')
			{
				a=empty(x,y,z,w,z,w,c);
			}
			else
				return 1;
		}
	}
	else if(w==(y+1)||w==(y-1))
	{
		if(c==1)
		{
			if(z==x-1)
			{
				p=A[z][w];
				switch(A[z][w])
				{
					case 'p':
					case 'q':
					case 'k':
					case 'r':
					case 'n':
					case 'b':A[z][w]='P';A[x][y]=' ';break;
					default	:return 1;
				}
				if(z==0)
				{
					cout<<"enter the value to promote to (R,N,B,Q):";
					cin>>ch;
					A[z][w]=ch;
					A[x][y]=' ';
				}
			}
			else 
				a=1;
		}
		else
		{
			if(z==x+1)
			{
				p=A[z][w];
				switch(A[z][w])
				{
					case 'P':
					case 'Q':
					case 'K':
					case 'R':
					case 'N':
					case 'B':A[z][w]='p';A[x][y]=' ';break;
					default	:return 1;
				}
				if(z==7)
				{
					cout<<"enter the value to promote to (r,n,b,q):";
					cin>>ch;
					A[z][w]=ch;
					A[x][y]=' ';
				}
			}
			else 
				a=1;
		}
	}
	else
		return 1;
	if(check(c)==1)
	{
		cout<<"YOU WOULD BE IN CHECK. ";
		undo(x,y,z,w);
		getch();
		if(c==1)
			A[x][y]='P';
		else
			A[x][y]='p';
		return 1;
	}
	return a;
}
int rook(int x,int y,int z,int w,int c=1)
{
	int a=0;
	if(x==z)
	{
		if(y<w)
		{
			for(int i=(y+1);i<=w;i++)
			{
				if(i==w)
					a=empty(x,y,z,w,x,i,c);
				else if(A[x][i]!=' ')
				{
					a=1;
					break;
				}
			}
		}
		else
		{
			for(int i=(y-1);i>=w;i--)
			{
				if(i==w)
					a=empty(x,y,z,w,x,i,c);
				else if(A[x][i]!=' ')
				{
					a=1;
					break;
				}
			}
		}
	}
	else if(y==w)
	{
		if(x<z)
		{
			for(int i=(x+1);i<=z;i++)
			{
				if(i==z)
					a=empty(x,y,z,w,i,y,c);
				  else if(A[i][y]!=' ')
				 {
						a=1;
						break;
				}
			}
		}
		else
		{
			for(int i=(x-1);i>=z;i--)
			{
				if(i==z)
					a=empty(x,y,z,w,i,y,c);
				else if(A[i][y]!=' ')
				{
					a=1;
					break;
				}
			}
		}
	}
	else
		a=1;
	if(check(c)==1)
	{
		cout<<"YOU WOULD BE IN CHECK. ";
		undo(x,y,z,w);
		getch();
		return 1;
	}
	if(a==0)
	{
		if(c==1 && x==7 && y==7)
			K[1]=1;
		else if(c==1 && x==7 && y==0)
			K[0]=1;
		else if(c==0 && x==0 && y==7)
			K[3]=1;
		else if(c==0 && x==0 && y==0)
			K[2]=1;
		return 0;	
	}
		return 1;
}
int bishop(int x,int y,int z,int w,int c=1)
{
	int a=1;
	if(z<x && w<y)
	{
		for(int i=(y-1),j=(x-1);i>=w && j>=z;i--,j--)
		{	
			
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	else if(z>x && w<y)
	{
		for(int i=(y-1),j=(x+1);i>=w && j<=z;i--,j++)
		{	
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	else if(z<x && w>y)
	{
		for(int i=(y+1),j=(x-1);i<=w && j>=z;i++,j--)
		{	
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	else if(z>x && w>y)
	{
		for(int i=(y+1),j=(x+1);i<=w && j<=z;i++,j++)
		{	
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	if(check(c)==1)
	{
		cout<<"YOU WOULD BE IN CHECK. ";
		undo(x,y,z,w);
		getch();
		return 1;
	}
	return a;
}
int king(int x,int y,int z,int w,int c=1)
{
	int a=1;
	if(c==1&&x==7&&y==4&&z==7&&w==6&&A[7][5]==' '&&A[7][6]==' '&&K[1]==0)
	{
		if(check(c,7,4)==1 || check(c,7,5)==1 || check(c,7,6)==1)
		{
			cout<<"YOU WOULD BE IN CHECK. ";
			getch();
			return 1;
		}
		A[7][4]=A[7][7]=' ';
		A[7][5]='R';
		A[7][6]='K';
		K[0]=K[1]=1;
		a=0;
	}
	else if(c==1&&x==7&&y==4&&z==7&&w==2&&A[7][3]==' '&&A[7][2]==' '&&A[7][1]==' '&&K[0]==0)
	{
		if(check(c,7,4)==1 || check(c,7,3)==0 || check(c,7,2)==0)
		{
			cout<<"YOU WOULD BE IN CHECK. ";
			getch();
			return 1;
		}

		A[7][4]=A[7][0]=' ';
		A[7][3]='R';
		A[7][2]='K';
		K[1]=K[0]=1;
		a=0;
	}
	else if(x==0&&y==4&&z==0&&w==6&&A[0][5]==' '&&A[0][6]==' '&&K[3]==0)
	{
		if(check(c,0,4)==1 || check(c,0,5)==1 || check(c,0,6)==1)
		{
			cout<<"YOU WOULD BE IN CHECK. ";
			getch();
			return 1;
		}
		A[0][4]=A[0][7]=' ';
		A[0][5]='r';
		A[0][6]='k';
		K[2]=K[3]=1;
		a=0;
	}
	else if(x==0&&y==4&&z==0&&w==2&&A[0][3]==' '&&A[0][2]==' '&&A[0][1]==' '&&K[2]==0)
	{
		if(check(c,0,4)==1 || check(c,0,3)==1 || check(c,0,2)==1)
		{
			cout<<"YOU WOULD BE IN CHECK. ";
			getch();
			return 1;
		}
		A[0][4]=A[0][0]=' ';
		A[0][3]='r';
		A[0][2]='k';
		K[2]=K[3]=1;
		a=0;
	}
	if((w==y || w==(y-1)|| w==(y+1)) && (z==x || z==(x+1) || z==(x-1)))
	{
		a=empty(x,y,z,w,z,w,c);
		if(a==0 && c==1)
		{
			L[0]=z;
			L[1]=w;
		}
		else if(a==0)
		{
			L[2]=z;
			L[3]=w;
		}
		if(check(c)==1 && a==0)
		{
			cout<<"YOU WOULD BE IN CHECK. ";
			undo(x,y,z,w);
			getch();
			if(c==1)
			{
				L[0]=x;
				L[1]=y;
			}
			else 
			{
				L[2]=x;
				L[3]=y;
			}
			return 1;
		}
		if(a==0 && c==1 && K[0]!=0 && K[1]!=0)
			K[0]=K[1]=1;
		else if(a==0 && K[2]!=0 && K[3]!=0)
			K[2]=K[3]=1;
	}
	if(a==0 && c==1)
	{
		L[0]=z;
		L[1]=w;
	}
	else if(a==0)
	{
		L[2]=z;
		L[3]=w;
	}
	return a;
}
int queen(int x,int y,int z,int w,int c=1)
{
	int a=1;
	if(x==z)
	{
		if(y<w)
		{
			for(int i=(y+1);i<=w;i++)
			{
				if(i==w)
					a=empty(x,y,z,w,x,i,c);
				else if(A[x][i]!=' ')
				{
					a=1;
					break;
				}
			}
		}
		else
		{
			for(int i=(y-1);i>=w;i--)
			{
				if(i==w)
					a=empty(x,y,z,w,x,i,c);
				else if(A[x][i]!=' ')
				{
					a=1;
					break;
				}
			}
		}
	}
	else if(y==w)
	{
		if(x<z)
		{
			for(int i=(x+1);i<=z;i++)
			{
				if(i==z)
					a=empty(x,y,z,w,i,y,c);
				  else if(A[i][y]!=' ')
				 {
						a=1;
						break;
				}
			}
		}
		else
		{
			for(int i=(x-1);i>=z;i--)
			{
				if(i==z)
					a=empty(x,y,z,w,i,y,c);
				else if(A[i][y]!=' ')
				{
					a=1;
					break;
				}
			}
		}
	}
	else if(z<x && w<y)
	{
		for(int i=(y-1),j=(x-1);i>=w && j>=z;i--,j--)
		{	
			
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	else if(z>x && w<y)
	{
		for(int i=(y-1),j=(x+1);i>=w && j<=z;i--,j++)
		{	
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	else if(z<x && w>y)
	{
		for(int i=(y+1),j=(x-1);i<=w && j>=z;i++,j--)
		{	
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	else if(z>x && w>y)
	{
		for(int i=(y+1),j=(x+1);i<=w && j<=z;i++,j++)
		{	
			if(i==w&&j==z)
				a=empty(x,y,z,w,j,i,c);

			else if(A[j][i]!=' ')
			{
				return a;
			}
		}
	}
	if(check(c)==1)
	{
		cout<<"YOU WOULD BE IN CHECK. ";
		undo(x,y,z,w);
		getch();
		return 1;
	}
	return a;
}
void board()
{
	clrscr();
cout<<L[0]<<L[1]<<L[2]<<L[3]<<K[0]<<K[1]<<K[2]<<K[3]<<endl;
	cout<<"     A   B   C   D   E   F   G   H\n";
	for(int i=0;i<8;++i)
	{
		cout<<"   +---+---+---+---+---+---+---+---+"<<endl;
		cout<<" "<<(8-i)<<" ";
		for(int j=0;j<8;j++)
		{
			cout<<"| "<<A[i][j]<<" ";
		}
		cout<<"|\n";
	}
	cout<<"   +---+---+---+---+---+---+---+---+"<<endl<<"ENTER 000 TO QUIT"<<endl<<endl;
}
int task(int a)
{
	int c,x,y,z,w;
	char m[5];
	if(a==1)
		cout<<"(White):";
	else
		cout<<"(black):";
	do
	{
		c=0;
		do
		{
			cin>>m;
			if(m[2]=='0')
				return 1;
			switch (m[0])
			{
				case 'A':y=0;break;
				case 'B':y=1;break;
				case 'C':y=2;break;
				case 'D':y=3;break;
				case 'E':y=4;break;
				case 'F':y=5;break;
				case 'G':y=6;break;
				case 'H':y=7;break;
				default	:y=-1;break;
			}
			switch (m[1])
			{
				case '1':x=7;break;
				case '2':x=6;break;
				case '3':x=5;break;
				case '4':x=4;break;
				case '5':x=3;break;
				case '6':x=2;break;
				case '7':x=1;break;
				case '8':x=0;break;
				default	:y=-1;break;
			}
			switch (m[3])
			{
				case 'A':w=0;break;
				case 'B':w=1;break;
				case 'C':w=2;break;
				case 'D':w=3;break;
				case 'E':w=4;break;
				case 'F':w=5;break;
				case 'G':w=6;break;
				case 'H':w=7;break;
				default	:y=-1;break;
			}
			switch (m[4])
			{
				case '1':z=7;break;
				case '2':z=6;break;
				case '3':z=5;break;
				case '4':z=4;break;
				case '5':z=3;break;
				case '6':z=2;break;
				case '7':z=1;break;
				case '8':z=0;break;
				default	:y=-1;break;
			}
			if(A[x][y]==' ' || (m[0]==m[3] && m[1]==m[4]))
				y=-1;
			if(y==-1)
			{
				board();
				cout<<"INCORRECT RE-ENTER YOUR MOVE:";
			}
		}while(y==-1);
		if(a==1)
		{
			switch (A[x][y])
			{
				case 'P':c=pawn(x,y,z,w);break;
				case 'R':c=rook(x,y,z,w);break;
				case 'B':c=bishop(x,y,z,w);break;
				case 'N':c=knight(x,y,z,w);break;
				case 'K':c=king(x,y,z,w);break;
				case 'Q':c=queen(x,y,z,w);break;
				default :c=1;
			}
		}
		else
		{
			switch (A[x][y])
			{
				case 'p':c=pawn(x,y,z,w,0);break;
				case 'r':c=rook(x,y,z,w,0);break;
				case 'b':c=bishop(x,y,z,w,0);break;
				case 'n':c=knight(x,y,z,w,0);break;
				case 'k':c=king(x,y,z,w,0);break;
				case 'q':c=queen(x,y,z,w,0);break;
				default :c=1;
			}
		}
		if(c==1)
		{
			board();
			cout<<"INCORRECT RE-ENTER YOUR MOVE:";
		}
	}while(c==1);
	return 0;
}
void reset()
{
	L[0]=7;
	L[1]=L[3]=4;
	L[2]=0;
	K[1]=K[0]=K[2]=K[3]=0;
	A[0][0]=A[0][7]='r';
	A[0][1]=A[0][6]='n';
	A[0][2]=A[0][5]='b';
	A[0][3]='q';
	A[0][4]='k';
	for(int i=0;i<8;i++)
	{
		A[1][i]='p';
		A[6][i]='P';
	}
	A[7][0]=A[7][7]='R';
	A[7][1]=A[7][6]='N';
	A[7][2]=A[7][5]='B';
	A[7][3]='Q';
	A[7][4]='K';
	for(i=2;i<6;++i)
		for(int j=0;j<8;++j)
			A[i][j]=' ';
}
void move()
{
	int r=1,x;
	do
	{
		cout<<"Enter move";
		if (r%2==1)
			x=task(1);
		else
			x=task(0);
		r++;
		board();
	}while(x==0);
}
void main()
{
	char a;
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t    =====___*WELCOME*___=====\n";
	getch();
	do
	{
		reset();
		board();
		move();
		cout<<"Want to start a new game?(Y To Continue)";
		cin>>a;
	}while(a=='Y'||a=='y');
}

