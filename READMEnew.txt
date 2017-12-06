

	**BEFORE READING THIS FILE MAKE SURE THAT YOU SET THE FONT OF THE ENTIRE TEXT TO "LUCIDA CONSOLE"**
				PLEASE DO READ THE ENTIRE FILE BEFORE DOING ANYTHING ELSE

KEY FEATURES-

-> two-player chess program 
-> need to write commands to move
-> detects every valid move and rejects every invalid move
-> features a function that can check whether the king is in check or not 

HOW TO RUN/USE-

	*suggesion- if possible please run the dosbox file as well the code would look good*

HOW TO ENTER MOVES & HOW TO QUIT GAME-
-> the cess board appears on the screen (dimention 8x8)
-> pieces are denoted by alphabets 
-> upper case alphabets represent White pieces and lower case alphabets represent Black pieces
-> each piece is denoted as follows-

		WHITE	BLACK
	KING	  K	  k
	QUEEN	  Q	  q
	ROOK	  R	  r
	BISHOP	  B	  b
	KNIGHT	  N	  n
	PAWN	  P	  p

-> the chessboard will look like this:
	    A   B   C   D   E   F   G   H
 	  +---+---+---+---+---+---+---+---+
 	8 | r | n | b | q | k | b | n | r |
 	  +---+---+---+---+---+---+---+---+
	7 | p | p | p | p | p | p | p | p |
 	  +---+---+---+---+---+---+---+---+
	6 |   |   |   |   |   |   |   |   |
	  +---+---+---+---+---+---+---+---+
	5 |   |   |   |   |   |   |   |   |
 	  +---+---+---+---+---+---+---+---+
 	4 |   |   |   |   |   |   |   |   |
 	  +---+---+---+---+---+---+---+---+
 	3 |   |   |   |   |   |   |   |   |
 	  +---+---+---+---+---+---+---+---+
 	2 | P | P | P | P | P | P | P | P |
 	  +---+---+---+---+---+---+---+---+
	1 | R | N | B | Q | K | B | N | R |
	  +---+---+---+---+---+---+---+---+ 
-> to move a piece you'll first have to enter the location of the piece you want to move and then the location where you
   want to place that piece. 
		->PROCEDURE:
			1) ENTER THE FILE THE PEICE BELONGS TO(A-H)
			2) ENTER THE RANK THE PIECE BELONGS TO(1-8)
			3) ENTER "-"(THIS REPRESENTS "TO")
			4) ENTER THE FILE WHERE YOU WANT TO PLACE THE PIECE(A-H)
			5) ENTER THE RANK WHERE YOU WANT TO PLACE THE PIECE(1-8)
			6) FINALLY PRESS THE "ENTER" KEY


	**NOTE THAT YOU HAVE TO ENTER THE VALUE OF FILE IN UPPER CASE ONLY**

 
	 for example:

     A   B   C   D  *E*  F   G   H		
   +---+---+---+---+---+---+---+---+
 8 | r | n | b | q | k | b | n | r |	suppose you are in this condition and you want to move your E pawn
   +---+---+---+---+---+---+---+---+	two steps forward.(E pawn is the pawn that is marked with "*" on 
 7 | p | p | p | p | p | p | p | p |	the white side)
   +---+---+---+---+---+---+---+---+	
 6 |   |   |   |   |   |   |   |   |	so first you locate the position of the piece as mentioned above
   +---+---+---+---+---+---+---+---+	
 5 |   |   |   |   |   |   |   |   |	the location is"E2" found it??(both "E" file and 2nd rank are marked
   +---+---+---+---+---+---+---+---+	using "*")
 4 |   |   |   |   |   |   |   |   |
   +---+---+---+---+---+---+---+---+	now you locate the position of the square where you want to place 
 3 |   |   |   |   |   |   |   |   |	this piece. in this case you want to place it 2 boxes ahead so the
   +---+---+---+---+---+---+---+---+	location is E file and 4th rank.
*2*| P | P | P | P |*P*| P | P | P |	
   +---+---+---+---+---+---+---+---+	how will you represent the location of this box...? 
 1 | R | N | B | Q | K | B | N | R |
   +---+---+---+---+---+---+---+---+	the correct way is "E4"

					**NOTE THAT EVERY TIME WE NAME A FILE IN UPPERCASE CHARACTER ONLY**

so now you are ready to move. just follow the steps mentioned above

so the correct way to enter this move is : E2-E4 (hit enter after typing this)

	**NOTE DONT FORGET THE "-" CHARACTER BETWEEN "E2" AND "E4" AND DONT ADD ANY BLANK SPACES(" ")**
	
	this screen will appear:
					 
     A   B   C   D   E   F   G   H
   +---+---+---+---+---+---+---+---+
 8 | r | n | b | q | k | b | n | r |	here note that the pawn has moved from the second rank to the
   +---+---+---+---+---+---+---+---+	forth rank
 7 | p | p | p | p | p | p | p | p |
   +---+---+---+---+---+---+---+---+	so now you are ready to move on your own.
 6 |   |   |   |   |   |   |   |   |
   +---+---+---+---+---+---+---+---+	now its blacks turn btw
 5 |   |   |   |   |   |   |   |   |
   +---+---+---+---+---+---+---+---+	also, if you enter an invalid move the program will inform you 
 4 |   |   |   |   | P |   |   |   |	that the move is invalid and will ask you to re-enter your move
   +---+---+---+---+---+---+---+---+
 3 |   |   |   |   |   |   |   |   |	the program also features a function that informs the player if
   +---+---+---+---+---+---+---+---+	he has made an invalid move as he would be in check after that move
 2 | P | P | P | P |   | P | P | P |
   +---+---+---+---+---+---+---+---+	now for some special moves like castling and pawn promotion 
 1 | R | N | B | Q | K | B | N | R |
   +---+---+---+---+---+---+---+---+ 	
				
	FOR CASTLING:
		 just enter the location of the king and the square where the king will be after castling

	for example:

     A   B   C   D   E   F   G   H
   +---+---+---+---+---+---+---+---+
 8 | r |   | b | q | k |   | n | r |	as you can see that in this possition white can castle 
   +---+---+---+---+---+---+---+---+	without breaking any rules.
 7 | p | p | p | p |   | p | p | p |
   +---+---+---+---+---+---+---+---+	So all he needs to do is enter the location of the king 
 6 |   |   | n |   |   |   |   |   |	and the square where the king will be after castling.
   +---+---+---+---+---+---+---+---+
 5 |   |   | b |   | p |   |   |   |	ie, E1-G1(and hit enter after this)
   +---+---+---+---+---+---+---+---+
 4 |   |   | B |   | P |   |   |   |
   +---+---+---+---+---+---+---+---+
 3 |   |   |   |   |   | N |   |   |
   +---+---+---+---+---+---+---+---+
 2 | P | P | P | P |   | P | P | P |
   +---+---+---+---+---+---+---+---+
 1 | R | N | B | Q | K |   |   | R |
   +---+---+---+---+---+---+---+---+ 

after this the castle would be done and this will appear on your screen:


     A   B   C   D   E   F   G   H
   +---+---+---+---+---+---+---+---+
 8 | r |   | b | q | k |   | n | r |
   +---+---+---+---+---+---+---+---+
 7 | p | p | p | p |   | p | p | p |
   +---+---+---+---+---+---+---+---+	so the castling is done
 6 |   |   | n |   |   |   |   |   |
   +---+---+---+---+---+---+---+---+
 5 |   |   | b |   | p |   |   |   |
   +---+---+---+---+---+---+---+---+
 4 |   |   | B |   | P |   |   |   |
   +---+---+---+---+---+---+---+---+
 3 |   |   |   |   |   | N |   |   |
   +---+---+---+---+---+---+---+---+
 2 | P | P | P | P |   | P | P | P |
   +---+---+---+---+---+---+---+---+
 1 | R | N | B | Q |   | R | K |   |
   +---+---+---+---+---+---+---+---+

	FOR PAWN PROMOTION:
		you just have to reach the highest rank(8th for white and 1st for black) with your pawn and 
		the program will ask you to enter a piece to which you want to promote(Q,R,N,B or q,r,n,b).
		you nreed to make sure that you enter the correct keyword in the correct case (upper for white
		and lower for black).

	SO THATS IT!!
	
		you are ready to play the game.

	oh and yes one more thing, to exit the game in between (as every one does after playing for 10 mins and getting
	bored) just enter "000" ie "zero zero zero"(in numerals and w/o blank spaces ofcource) to QUIT the game. 
	
THANKYOU  :D

VIMARSH TREHAN. 
stellhawk1@gmail.com
9910177556 












