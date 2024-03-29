## Intro

 <img src="./imgs/jumps.jpg" width="1000" />

##  Get_Next_Line 
###	Because read a line on a  fd sucks


The objectif of this project is to make you code a function that 
**returns a line ending with a newline, read from a file descriptor.**
This project will not only allow  to add a very convenient function to 
our collection,but it will also allow  to learn a highly interest contest to Alx program (If you want)
 
### How to use it 

```bash
    git clone https://github.com/Tednoob17/Get_Next_Line

```
**you there are several test files**



### Return value

| Value | Description         |
 |-----------|----------------------|
|  Read line| correct behavior |
|  NULL| nothing else to read or an error has occured |

### Functions Used

**External Functions**

| Function | Description         |
 |-----------|----------------------|
|  read() | A line has been read |
|  malloc() | EOF has been reached |
|  free() | An error happened |


## Compilation 💽

**JNL Mandatory Part**

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89    src/get_next_line.c include/get_next_line.h src/main.c src/get_next_line_utils.c 
```

**JNL with files**
```bash
./a.out tests/xextra_test_file.txt
```

**Output**
```bash
➜ j3kyll@42  ~/SCOP/Get_Next_Line git:(main) ✗ ./uuu tests/xextra_test_file.txt
[MUSIC PLAYING]

DAVID MALAN: This is CS50, Harvard University's introduction
for the intellectual enterprises of computer science
and the art of programming.
My name is David Malan, and I actually took this course
myself sophomore year some years ago.
But I almost didn't.
At the time, I was quite uneasy with the idea,
frankly, of taking a computer science course, let alone this course.
And so my freshman year, at least, I really
gravitated toward courses and departments
with which I was much more familiar.
Computer science was well beyond my comfort zone at the time,
and it was really these unfamiliar waters
that I wasn't quite ready to shop, even my first year.
But sophomore year, I finally got up the nerve to come through the door of CS50,
and only because the professor at the time let me take the course pass/fail.
I was that uneasy.
And if only I had known at the time what I now know,
which is that 2/3 of CS50 students have never
taken a computer science course before.
So if you are feeling similarly uneasy with the idea of trying something new,
or even if you have prior background but are
looking to fill in gaps in your knowledge,
or if you're particularly self-taught, realize
you are very much in good company.
And ultimately, what matters in this course
is not so much where you end up relative to your classmates,
but where you end up relative to yourself when you began, which is,
of course, today.
So what, then, is computer science?
And what was it that I was so uneasy with?
Well, I dare say we can describe computer science as this.
It's just the process of solving problems.
And what does it mean to solve a problem?
You've got some input.
And the goal is to get some output, the solution, to that particular problem.
And in between, really, is computer science.
And we'll see what's in this literal black box on the screen
as we begin to fill in some of those blanks.
But when we consider a problem to be solved,
we have to all agree from the get-go, especially if we're using machines,
how are we going to represent these inputs and outputs?
And so one of the first concepts we explore in computer science
is how you represent information itself.
And odds are you probably know coming into this course
that computers only speak what language, so to speak?
AUDIENCE: Binary.
DAVID MALAN: Yeah.
So binary.
And if you've never heard that term before, fine, as well.
But zeros and ones, somehow.
But how do we get to that point?
Well, even if you kind of know that computers speak binary,
whatever that means, but you haven't necessarily
thought about how that works, well, consider how most of us
learn how to count maybe first on our hands.
If I want to count the number of people in the room,
I might do 1, 2, 3, 4, 5, putting up one finger for every person in the room.
So that's what's known as unary notation.
[? U, ?] or uno, implying 1 because I'm just putting up a finger
or not to count people in the room.
Of course, I can only count so high on just one hand.
But thankfully, we have many symbols in our so-called human world of decimal.
Dec meaning 10, we have digits 0 through 9.
And from there, we can express any numbers with which we're all familiar.
But computers don't have that many digits.
They only have zeros and ones.
And yet somehow, they're able to store not only numbers,
but letters and images and videos and sounds and so much more.
So how does that work?
Well, let's take a quick look at just this to get everyone on the same page
as to how you can build the phones in our pockets, the laptops on our desk
today, using just zeros and ones.
Well, these are just symbols on the screen here.
What does this, of course, represent?
123, but why?
I mean, these literally are just symbols or glyphs
on the screen, sort of strokes of a pen that we all ascribe meaning to.
We just see this as 123.
But why is that?
Well, if you're like me, you probably learned way back
when to think of the rightmost digit as being in the ones place or the ones
column, the middle digit as being in the tens
place, and the leftmost digit as being in the hundreds place.
So how do we get from this pattern of 1, 2, 3 to the number 123?
Well, it's some quick mental math that we all just do instinctively.
It's 100 times 1, plus 10 times 2, plus 1 times 3.
That, of course, gives us 100 plus 20 plus three, or 123.
So all of us just kind of take that process for granted now.
But it turns out that there's a system at play
here, a system such that we can figure out any number in the same way.
So if we've got our ones place, tens place, and hundreds place, of course,
in the decimal world, this is the number 1,
this is the number 2, 3, 4, 5, 6, 7, 8, 9.
Something interesting happens, of course, after 9.
You sort of carry the 1.
And why then does 010, or if we ignore the leading zeros as being
insignificant, why does one 0 represent the number we all know obviously as 10?
Well, just because it's 10 times 1 plus 1 times 0.
So that's the system we've been using for years.
And it turns out that these columns, realize, are just powers of 10.
So 10 to the 0 is 1, 10 to the 1 is 10, and 10 to the 2 is 100.
That's how we got ones, tens, and hundreds place.
Now in the computer world, you don't have 10 digits, 0 through 9.
You have just two digits, 0 and 1.
So we can just make a little tweak to our mental model here,
so to speak, and just now use 2, powers of 2, instead of powers of 10.
So that means the right hand column is going to be 1,
the middle column is going to be 2, the left column is going to be 4,
and if we kept going, it'd be 8, 16, 32 instead of 1,000, 10,000, 100,000.
But the idea is exactly the same.
So I propose that computers only speak zeros and ones, of course.
But how do they represent larger numbers than 0 and 1?
Well, this is representing 0.
This is representing 1.
What pattern of symbols on the screen would represent the number
we humans know as 2?
Yeah.
So 010.
So you just spoke binary.
So even if you just generally knew that binary is spoken by computers,
it just means that a computer, to represent the number we know as 2,
somehow stores a pattern of symbols of 010.
How do they represent 3?
011, for the same reason.
It's 2 times 1, plus 1 times 1, gives us, of course, three.
And now, just as before when we meant 9 to 10, now we actually go from 3 to 4
by carrying the 1 now.
So in binary, bi meaning two, hence the 0 and 1, 100 is not 100, per se,
it is literally the number we know as 4.
And we can keep going on up.
This of course, now is 5.
This would be 6.
This would be 7.
And what happens if we want to represent eight?
Yeah.
So we kind of have to solve this somehow.
We need another digit.
And that's fine, right?
In math class, you would just add another place, another column, in order
to get back the value that you want.
So we need more zeros or ones, otherwise, now known as bit.
If you've ever heard of the phrase bit, it just means binary digit,
and a 0 or a 1 is just something we know as a bit.
And why is this germane to computers?
Well, as fancy as our Macs and PCs and phones are today,
consider, after all, that at the end of the day,
what do you have to do, typically, with your laptop, your desktop,
your phone these days?
What do you do at the very end of the day?
Yeah, so you charge it, right?
You plug it into some physical resource.
That is the only physical resource into these computers that we use today.
And that's kind of nice, because, of course,
the core can either be plugged in or not plugged in.
Or maybe we could call that a 1 or a 0, true or false, on or off,
which is to say if electricity is our only input
and there's either yes electricity or no electricity,
well, that actually maps quite nicely to the idea of binary
because we need just two symbols, 0 and 1, off and on, to represent that idea.
Of course with a single bit, you can't do all that much.
You can only count from 0 to 1, and that's it.
So computers tend to use larger numbers of bits to represent information.
And they do this ultimately physically.
So it turns out that with both plug-in the wall,
or even a light bulb or a switch thereof, you can represent a 0 or 1.
But if you want to represent more zeros and ones,
well, we just need, maybe, 8 bits at a time.
And if you've ever heard of the expression byte, a byte is just a term
describing eight bits, eight zeros and ones, a more useful measure instead.
So given that, I think it's time, perhaps,
to see if we can't solve the problem ourselves.
Perhaps we could get, say, two volunteers to come on?
OK.
Saw one hand here and one hand over here.
Come on down, if you want to meet me on the other end of the stage.
Come on over here.

Come on down.
What's your name?
PRIYANKA: Priyanka.
DAVID MALAN: Priyanka, nice to meet you.
David.
Come on over and if you want to wait right here.
And what's your name?
CALVIN: Calvin.
DAVID MALAN: Calvin?
CALVIN: Yeah.
DAVID MALAN: David.
Nice to meet you.
Come on over here where Priyanka is.
So Priyanka, you raised your hand first, so you get to choose.
Do you want to go first or second in this little challenge ahead?
PRIYANKA: Uh, I'll go first.
DAVID MALAN: OK.
So Priyanka is going to go first.
If you want to stand over there, Calvin.
So the challenge at head here is could you
go ahead and represent for us in binary, using each of these light bulbs
and, in turn, switches, as zeros and ones, say, the number 50?

So you might turn one light bulb on representing the 32s place.

Might turn a light bulb on representing the eighth place.
Our total count now is 32 plus not 8 plus 16,
I think, which is going to give us 32 plus 16, which is 48.
And so we get now a round of applause, if we could, for Priyanka.
Thanks very much.
Give us just a moment.
So each of these light bulbs, then, represents just a switch or a bit.
And inside of your computer, if you've ever heard the phrase transistor,
a transistor is just a tiny little switch in our computers.
So they have millions or billions of these switches
that they use physically to represent information and store values,
just like Priyanka did here.
So if a computer were to represent the number 50,
it would literally turn on three switches of sorts,
store a little bit of electricity here, here,
and here to represent the number 50, and it would leave off
all of the other switches.
The other five, in this case, if we're using eight bits or one byte.
Calvin you raised your hand second, and so we have one other challenge ahead.
Fortunately, these things are magnetic, so let's take things up a notch.
And if you would, Calvin--
[LAUGHTER]
--how about the number 13, if you will.
How would a computer represent the number 13
where each of these light bulbs from 1 to 128 represents a bit?

We had, of course, the ones place over here, the twos place, four, eight,
16, and so forth.
So we can ask the audience, should we turn on, for instance, this bulb here?
AUDIENCE: No.
DAVID MALAN: No.
Way too big.
How about this one?
CALVIN: No, too big.
DAVID MALAN: OK.
And you're in charge.
Ask the audience.
CALVIN: This one?
AUDIENCE: Yeah.
CALVIN: Yeah.
DAVID MALAN: OK.
So we have 1, 2, 4, 8.
CALVIN: 4.
DAVID MALAN: 4 gives us 8 plus 4 is 12.
And another round of applause, if we could.
Thank you.
You got the tougher job.
Thanks to you both.
So at the end of the day, while this is a very large physical incarnation
of the notion of binary, that's all that's going on inside of our computers
every day when they represent information.
But we only, thus far, have the ability to represent numbers, it seems.
So how then does a computer allow you to send text messages and emails
and compose documents and so forth?
We need to all agree how we're going to go about representing
characters or letters of an alphabet, be it English or something else, instead.
And any intuition for how, if a computer only
has millions or billions of switches that can be turned on and off, thereby
representing numbers, we could possibly go about representing something
other than numbers, like the letter A?
Say it again?
By a digit.
So we maybe just need to agree as a group, you know what?
Let's all agree that the letter A, in the context of a word processing
program or a text message or email, just needs to be represented by a number,
and we all need to agree what that number is.
So maybe super simply, let's just say A is 1, B is 2, C is 3 and so forth.
And you could imagine then having a computer
turn on lots of little transistors to represent A and B and C,
so long as the software on that computer, as we'll see,
knows that it's a word processing program and not,
say, a calculator or something that's meant to use numbers alone.
So it turns out that computers don't actually use the number 1 for A or 2
for B. It's a little bigger than that.
The world decided decades ago that the capital letter A is going
to be represented by the number 65.
65, which is to say, if you have a byte of information in the computer,
and this is the ones place, twos, four, eight, 16, 32, 64.
If a computer were to store the capital letter A using eight bits or switches,
it would just turn on those two, the 64s place and the ones place.
And so when you have actually received a message in a text message or an email
with a capital letter A, you have just received
a pattern of zeros and ones somehow, wirelessly or via wires,
representing that pattern.
Specifically, this pattern here, if we draw it not as light bulbs,
but as zeros and ones.
So it turns out there are certainly more numbers than just A's and B's and C's.
We have the whole alphabet plus punctuation, thanks to a system
called ASCII, the American Standard Code for Information Interchange, which
is just a fancy way of saying that there is a well-defined map that humans
around the world agreed on years ago that looks
a little something like this.
So A is 65, an I is 73, and dot dot dot to both ends.
So that is to say if you were to receive a message from a computer or from
a friend saying 72, 73, 33, or the pattern of zeros and ones representing
those digits , what message did you perhaps just receive?
72, 73, 33.
Yeah.
So, hi.
So quite literally, if you were to text a friend,
hi, they would receive a message that's essentially a pattern of zeros
and ones, 72, 73, then something.
It's actually not obvious from the chart what they are,
but it turns out 33 was the number humans gave years ago to represent
an exclamation point instead.
And so any of the other punctuation symbols you might see on your keyboard,
similarly have numbers that a computer would use, that all of us
agreed on years ago, to represent that value.
But of course, this is very American-centric at the moment.
And indeed, the acronym ASCII has American in it.
So it was biased early on to American English, for instance.
But there's so many more characters in the world,
of course, such as accented characters and other languages altogether.
And frankly, there's also these things these days,
which even though they look like pictures,
you access them via your keyboard because they are indeed
just symbols in an alphabet.
There are zeros and ones, patterns of zeros and ones,
that represent those characters, as well.
That's what's known as Unicode, and that's, like, a superset of ASCII.
Because ASCII, way back when, used only eight bits, which is not terribly many,
to represent characters.
Unicode uses 8 or 16 or 24 or even 32, which
means we have a way many more possible patterns of zeros and ones
with which to represent things like this.
So this is face with tears of joy.
As of 2019, it is the most popular emoji sent on iOS devices, at least.
Does anyone want to hazard a guess as to what
the decimal number is that represents a face with tears of joy?

Not 65.
Not 72.
Not 73.
800.
Higher than that.
10,000.
Higher than that.
It's 128,514.
That's how many emojis await us down the road
because the numbers are now getting this big.
Or equivalently, this pattern of zeros and ones.
So at the risk of taking all of the fun out of ever sending someone
an emoji, when you send that face with tears of joy,
you're literally just somehow having your phone send a friend's phone
this pattern of zeros and ones.
And Android or iOS are presenting it as that yellow picture.
But that yellow picture, of course, itself is an image.
And it's composed of lots of little dots.
And odds are coming into this class, you're
generally familiar with using images, certainly,
and seeing the little dots that compose an image.
Especially if they're of low quality, you can really see those dots.
And so in a face like the emoji, we have lots of yellow dots.
How does the computer represent each of those dots?
Well, according to a system called RGB.
Red, green, blue.
So again, decades ago, people in a room decided, you know what?
To represent colors, we still have to use just zeros and ones,
little switches, mechanically.
But let's just all agree what numbers represent what colors.
So we just need another system for that.
Now it turns out that RGB essentially composes any color of the rainbow
by mixing together some red, some green, some blue.
And by combining those colors one on top of the other,
you can get any color of the rainbow you want.
So this is to say to store any dot on the screen, one pixel,
so to speak, in an image that you might take as a photo or send to a friend,
you are actually storing three values.
One, two, three.
Three numbers, really, that, of course, at the end of the day,
are zeros and ones.
Those three numbers just tell the computer how much red, how much green,
and how much blue to use to represent some dot on a screen.
So suppose that coincidentally, a computer were storing the pattern 72,
73, 33, albeit with zeros and ones or light bulbs,
back-to-back-to-back like this.
Well, in the context of Photoshop or a browser or Apple photos or the like,
in the context of a graphical program, your computer
is going to interpret this same pattern of digits,
and in turn, bits, not as high, exclamation point,
but as some amount of red, some amount of green, some amount of blue.
And it turns out if you combine this much red, 72, this much green, 73,
followed by this much blue, 33, what you get when you combine all three of those
is a shade of yellow.
So for every single dot in that emoji, that
face with tears of joy, every dot in this image--
and we can see it if we really zoom in--
is stored using three values.
Some amount of red, some amount of green,
some amount of blue that we can bind give
you yellow or black or gray or anything else,
depending on how you encode those values.
Meanwhile, images or videos, things like this that you might see on the internet
these days in the form of memes or anything else,
are actually just images, but they're multiple images in the same file.
If you've ever seen what's called an animated GIF, which this happens
to be that happens to be looping, all our human eyes are seeing
is one image after another after another after another really
quickly, creating the illusion, therefore, of movement.
But this cat is not actually moving.
These are like five or 10 photographs of a cat in different positions
just being looped endlessly.
And that, too, is all a video is.
A video is just a sequence of images flying past your eyes so quickly,
we humans perceive it as actual movement.
And so that's almost everything we use to represent information today
in our computers.
We have zeros and ones from which we get binary
to which we then get decimal digits, but we
can use those digits to represent, say, characters on the screen or colors
on the screen and, in turn, now even the more interactive.
Now what about something like music in a computer?
Another type of information you might want to represent?
Well, if we had a piano on the stage here,
we could quantize the notes you're playing using just numbers, as well.
What note you're playing, maybe it's A, B, C, D, E, F or G or some variant
thereof.
Maybe how long you hold the key down for, and if you hit it really hard,
maybe how loud it is.
So you could imagine using three values, the note, the duration, and the volume
just to represent something like a piano song.
[PIANO PLAYING]
Might be one encoding of a song.
And I might use different values if I want to play it even louder and longer.
[PIANO PLAYING]
And so forth.
Which is to say that at the end of the day,
no matter what media we use to represent information,
it all reduces to zeros and ones.
So once we have the ability to represent inputs,
be it numbers or letters or colors or videos, now we can talk about outputs.
So how do we get from inputs to outputs?
That's what's inside this so-called black box,
and this is where computer science comes in.
An algorithm.
Anyone know what this term is?
What's an algorithm?
You sort of read about it all the time these days,
especially in the context of self-driving cars and Siri and Alexa
and so forth.
Yeah?
A set way to do something, yeah.
In the context of problem solving, an algorithm
is just step-by-step instructions for solving some problem.
So what might an algorithm be for a problem that we might want to solve?
Well, consider this.
This is an old school problem where you might
have lots and lots of names and lots of lots of numbers,
and those names are hopefully sorted alphabetically from A through Z
in a book like this.
And even though most of us don't really reach for this technology anymore,
consider that it's really the same as your iPhone or Android phone
or other device, which has all of your contacts top to bottom
and you can scroll through them from A to Z,
or you can search for them by typing into the little autocomplete box.
How is even your phone solving this problem?
Well let's consider a simple approach.
I'm going to look at the first page and look for someone on the phone book.
Suppose that person's name is Mike Smith, last name starting
with S. Let me go ahead and look down.
He's not here.
Let me turn the page.
Let me turn the page.
Let me turn the page.
This is an algorithm.
It's a step-by-step process for solving a problem, finding Mike Smith.
Is this algorithm correct, would you say?
Yeah.
I mean, it's pretty slow, it's pretty stupid, in that it's going to take,
my God, forever, like, hundreds of page turns to find Mike Smith.
But if he's there, I will find him according
to this step-by-step approach.
What if I speed things up a bit just because it's tedious, otherwise?
So I do two, four, six, eight, 10, 12, 14, 16 and so forth.
Is that algorithm faster?
Absolutely.
Literally twice as fast.
Is it correct?
AUDIENCE: No.
DAVID MALAN: No.
Why?
[INTERPOSING VOICES]
DAVID MALAN: Yeah, we might skip them.
I might get unlucky and eventually, I might get to the S's.
But darn it if Mike wasn't in between two pages as I turn them at once.
So it's not a fatal flaw.
That algorithm, I could fix by just saying
if you hit the T section or maybe Sn instead of Sm, just back
up one or so pages just to fix that bug or mistake, so to speak.
But it, at least, is twice as fast.
But if this phone book has 1,000 something pages,
it's still going to take me maybe 500 pairwise turns just to find Mike Smith.
That's a while just to look someone up.
But most of us, if you've used this technology,
instead, did what, back in the day?
Go roughly to the middle if there aren't little letters on the side off
which to cheat.
So roughly into the middle.
I'm in the M section.
Now the M's, of course, mean that Mike is not this way,
which would be the A's.
He's probably this way toward the Z's because S, of course,
is between the M and the Z.
So at this point, I can literally tear the problem in half,
throw half of the problem away very dramatically and unnecessarily,
making the point that we've now gone from 1,000 some odd pages to what?
500.
And I can do it again.
Ah, I went a little too far.
I'm now in the T section, so I can tear the problem in half again,
throw that half away, and now I'm down from 1,000 to 500 to 250 pages
only, after just two steps in this step-by-step process.
And if I repeat this again and again and again, hopefully, I'll
be left, ultimately, with, say, just one page on which
Mike Smith either is or is not.
And I can call him or quit.
So that algorithm would get me to the solution so much faster.
And we can appreciate this even if we just look at some of the numbers,
ultimately, as follows.
So if I start with, say, 1,024 pages total in the phone book,
and I'm looking for Mike Smith, and I divide and conquer this problem,
splitting the problem in half and in half and in half, I go to 512,
I go to 256, 128, 64, 32, 16, eight, four, two, and one.
After just 10 steps, I have found Mike Smith's page.
By contrast, that first algorithm where I just
did one page at a time, how many steps, maybe, might
it have taken me to find Mike Smith?
Yeah, like, 700, 800, roughly where the S's might be.
So in the worst case, 1,000 pages, if I look through the whole thing.
The second algorithm, maybe, 500 pages because I'm going twice at a time.
But my God, 10 steps with this algorithm here.
And odds are that would be the algorithm most of us in this room
would reach for by default, which is to say that a lot of problem solving
really, as we'll find, is just about harnessing your existing intuition
and comfort with ideas that now you just need to translate in such a way
that machines and other humans can understand.
So how might we just think about how much better that algorithm is?
Well, consider this first line here.
On this y-axis, or vertical axis, let me describe
this as the time to solve some problem.
And on the horizontal, or x-axis, the size of the problem.
So the number of pages in the phone book would get bigger as you go to the right
and the number of seconds or page turns required would go up along the y-axis
here.
So that first algorithm, depicted here in red,
suggests a one-to-one relationship between the number of pages in the book
and the number of seconds to find someone.
So you have this straight line.
A slope of 1 over 1, if you will.
And so if we consider the second algorithm,
the second algorithm is also going to be a straight line,
but that straight line is going to be lower on the graph.
Why?
Because for any size problem, it's going to take me half as much time
to search that phone book because, of course, I'm going two pages at a time.
So if we see this, for instance, if this dashed line
represents some number of pages in the phone book,
maybe 1,024, well, you can see that it might take this many seconds
or page turns to actually find Mike Smith with that second algorithm.
But in the first algorithm, that same number of pages
would take way more time to solve, literally twice
as much time in this case.
Well what about the third algorithm?
Well, even if your memory of what a logarithm is a little hazy,
it just describes a fundamentally different shape.
The green line describes that third and final algorithm
whereby you divided the problem not one page at a time or two pages at a time,
but 50% again and again and again.
You have it again and again and again.
And notice that as the number of pages in the phone book gets really large,
you barely make an impact on how much time it takes to solve that problem.
For instance, if Cambridge and Allston, two towns here in Massachusetts,
merge next year and their phone books become
one phone book that's twice as big, so not 1,000 pages each,
but 2000 pages total, how many more steps
might it take us to find Mike Smith in next year's phone book
if it's got 2000 pages instead of 1,000?
Just one more step.
But the first two algorithms, that's another 1,000 steps, maybe,
or another 500.
These are fundamentally big differences in efficiency, so to speak.
So let's translate this idea, this intuition,
into the first example of code.
There's a pseudo code.
And there's no one formal definition of this.
Pseudocode is code-like syntax that you write
in English or your own spoken language that represents your ideas,
but in a succinct way.
And so I might propose that this algorithm for finding Mike Smith
might be written in pseudocode English-like syntax as follows.
Step one, pick up phone book, which was indeed the first thing I did.
Step two, open to the middle of phone book, which is the next thing I did.
Step three might be look at the page to see if someone's there
and if Smith is on that page, what do I want to do?
Well, my code is going to look a little different now,
and I'm going to deliberately indent to make clear that there's
a dependency here of some sort.
I'm going to go ahead and step five and call Mike only if line four is true,
that he's on the page.
Else if Smith is earlier in the book, to the left, so to speak,
I'm going to go ahead and open to the middle of the left half of the book,
and then what am I probably going to want to do next?
AUDIENCE: [INAUDIBLE]
DAVID MALAN: So, yeah, this, ultimately.
How do I do this again and again?
Well, I already have some code, if you will, on line three that does that.
Look at page and then make a decision to go left or go right.
So I'll just say go back to line three after going
to the middle of the left half of the book
if Smith is indeed earlier in the book.
The other scenario, of course, is the opposite.
So else if Smith is later in book, let's open to the middle
of the right half of the book, and then let's go to line three.
Else, there's a fourth possible scenario or case.
What else might happen in this algorithm?
AUDIENCE: [INAUDIBLE]
DAVID MALAN: He's not there.
And so I probably want to anticipate that and just
say quit if, indeed, he's not on the page, to the left of the page,
or to the right of the page.
So there is one way of expressing this pseudocode albeit now
in just this English-like syntax.
But in this syntax alone, there's some commonalities,
some features we're going to see over the next several weeks
not only in pseudocode, but in a language called Scratch,
a language called C, a language called Python and more.
There are certain constructs in programming, procedural programming,
so to speak, that are going to be common among all of these languages.
Highlighted in yellow here are what, henceforth, today and onward,
we're just going to call functions.
These are verbs or actions that just tell the computer,
or in this case, the human, what to do.
So those are functions.
Now highlighted in yellow instead are what we're going to call conditions.
These are branches, sort of forks in the road so you can either do this
or you can do that or maybe this other thing as well.
But to make those decisions, you have to ask yourself a question.
And those questions, in computer science,
are called Boolean expressions, after a mathematician named Boole.
And a Boolean expression, highlighted now in yellow,
are just questions that have yes or no answers or, if you will, true or false
answers or, heck, now that we know binary, one or zero answers.
So even in code, we see a hint of why ones and zeros are helpful.
Lastly, there's this thing here.
Go back to line three.
We've used it in two places.
That refers to something we'll call a loop.
It's a cycle that does something again and again.
So beyond those four ideas, functions, conditions, Boolean expressions,
and loops, we're about to see a bunch of others, as well.
Variables, reminiscent of what you might recall from algebra,
but more powerful now in this context of programming.
Something called threads and events.
And we're going to do this by way of an actual programming language.
But it's not yet going to be this one.
Indeed, just a week from now will you actually understand what this means.
Odds are 2/3 of you have no idea what this actually is, and that's OK.
But it's a program written in a language called C--
more on that next time--
that quite simply says hello to the world.
But we're going to do it today in the context of a graphical language
from my MIT's Media Lab called Scratch.
This is a language via which you can program a computer by dragging
and dropping blocks or things that look like puzzle pieces that interlock
together so that you can tell the computer exactly what to do,
step-by-step.
And we'll see in this language today, and for the first problem set
or programming assignment, that you can express all of these ideas
from pseudocode in an actual language like Scratch.
So what lies ahead?
Well at scratch.MIT.edu, which I'm about to pull up myself,
is going to be where you spend time in the first problem set.
And it's going to look quite like this when you open it up.
On the left hand side of this website, this web-based programming environment
from MIT, you're going to see on the left hand side
a whole bunch of puzzle pieces, so to speak.
And they're categorized according to some different colors there
on the left.
In the middle, there's just going to be a big white canvas, initially,
onto which you can drag and drop those puzzle pieces
and lock them together to make the program do something.
What can you make it do?
Well, on the top right here is the so-called stage in Scratch.
By default, there's only one character, or sprite, on that stage.
Scratch himself, and he can move up, down, left, right
and do any number of other things if you tell
him what to do by dragging and dropping those puzzle pieces.
If you don't like that cat or you want many others,
you can also add multiple sprites, or characters,
by creating them in that area.
So let's actually do this now with some sample programs
such that we can actually begin programming using this environment.
I'm going to go ahead now and open up a browser here.
And in just a moment, you'll see on the screen scratch.MIT.edu itself.
So if I go ahead and create by simply clicking up there,
we'll see this editor, ultimately, that, by default, has this tutorial that I'm
going to go ahead and dismiss.
But now we see that same environment.
And you'll see that above Scratch here over at top right,
there's this green flag and this stop sign.
The green flag is what you can click as the human to make the program go.
The stop sign will make any program stop.
So it turns out among all of these categories here,
there's, for instance, some orange ones called Control.
There's some yellow ones called Events.
And we'll focus on this latter one first.
If I go ahead and drag from events this puzzle piece here,
this is how I can begin programming.
When the green flag is clicked, do the following.
What do I want to do?
Well, let's have this cat just say hello.
And from having used this program before,
I know that under Looks, I can go ahead and say something like, say hello.
And notice not only does the shape match the orange puzzle piece
or yellow puzzle piece, notice that it magnetically wants to snap together,
and if I let go, it will.
And I'm going to say perhaps one of the most canonical things
to say in your very first program, which is just, conventionally,
hello world, and leave it at that.
I'm going to now go ahead and click the green flag.
And voila, our very first program.
The same effect.
[APPLAUSE]
Thank you.

Thank you.
Very low bar so far, but we'll improve upon this next
because this cat is pretty inanimate and is just now saying hello.
What if we wanted him to do more than that and say not hello, but hello to me
or hello to you?
Well, it turns out we can do this a little differently, as well.
I'm going to go ahead and throw this away by just dragging it over
on the left.
And the puzzle piece just goes away.
And if I poke around a little further under these blue blocks,
for instance, Sensing, there's a bunch of puzzle pieces
related to Scratch's environment.
And one of those is this one here, ask, what's your name?
And wait.
But that what's your name expression is in a white box
that I can actually change.
So you can ask any questions you want, but I'll go ahead and use that default.
And now notice also over here in blue is Answer,
which is another circular shape which represents what we're
going to start calling a variable.
That variable is going to store whatever the human types in when
asked for his or her name.
So what do I want to do when I actually get the person's name?
Well, let me go back to Looks.
Let me go ahead and say hello.
And I'll go ahead and say hello and then another one, say hello again.
But instead of this, I want it to say my name.
But it would be incorrect to just type my name because then my name is always
going to be David no matter who plays this game or is asked the question.
So I don't want to do that.
If I go instead to Sensing and then drag and drop this puzzle piece,
notice this.
It wants to magnetically snap in there.
And it will grow to fit it.
So now I can say hello and then I can say name.
So let me go ahead and hit stop and play again.
What's your name?
I'll go ahead and type in David.
Enter.
And now David.
Huh, I feel like we forgot the hello.
This is my first bug.
Any thoughts as to why?
What did I do wrong?
Yeah?
AUDIENCE: [INAUDIBLE]
DAVID MALAN: Yeah.
I mean, I told the computer via this algorithm to do three things,
ask what's your name and wait, but then I just
say said hello, say answer in such rapid succession.
And my God, our Macs and PCs and phones these days
are so fast, they're going to do so many things so quickly that it
did say hello, it's just none of us really saw it
because my name immediately overrode it.
So I can fix this in a couple of ways.
Let me go ahead and go back to Looks for just a moment,
get rid of this puzzle piece, and maybe say hello for two seconds.
Then let me go ahead and say my name or the user's name for two seconds
as by dragging answer now into here.
So that was my first bug in code, so to speak.
Let me go ahead and play again, type in David, and now it's hello, David.
All right.
So better.
It's a little weird because you typically
don't greet someone by saying hello, David, two seconds later.
So what if we kind of combine this expressions
and say not hello world, but hello comma David?
Well, we can do this in a different way.
Let me go back over here and, for instance, get just one of those
say blocks like this.
I'm not going to worry about saying it for some number of seconds
because I'm only going to say one thing now.
But I somehow want to say hello comma and then the user's name.
Well, if I poke around further, and you would only
know this by having seen it before, it turns out
there's this puzzle piece down here called Join.
And it's a little weird that the default words are apple and banana,
but those are just placeholders.
If I go ahead and drag this over here, it grows to fill
and it overwrites what was there.
I can say hello comma and then instead of hello banana,
let me go back to Sensing, drag the user's answer,
and now we say hello comma so and so.
So let's try this now instead.
Green flag, type in my name, Enter.
Hello comma David.
So now the program isn't all that much more complicated,
but notice that we're starting to nest these verbs, these functions.
We're asking for a name and then we're saying the result
of joining the following two things.
So there's a few ideas to keep track of at a time.
But this is actually quite like what we were doing from the get-go earlier
as follows.
For instance, if we want to just say hello world with this puzzle piece
here, this actually maps perfectly to our fundamental definition
of what problem solving is.
The input to that puzzle piece is, of course, just hello world.
The function or algorithm that you want to execute, step-by-step instructions
for saying something, Scratch calls Say in purple, and the output you want,
of course, is Scratch saying hello world.
Now in the more sophisticated example, consider this.
We asked what's your name?
And then we waited.
Well, that picture would look like this instead.
The input to that question is, of course, what's your name?
The algorithm, or in this case, function,
via which we're solving that problem is to ask and wait, taking in that input.
And the output we get back is now answer.
And then lastly in that third example, where things got a little fancier
and you had to start dragging and dropping and nesting these puzzle
pieces, notice that this is the same idea.
The input now is two things, hello and answer.
Those go into a function called Join, the output
of which should be hello comma David.
But now we want to pass that output as the input to the Say block
so that the final result is hello, David right out of the cat's mouth.
So in this way, even with the simplest of puzzle pieces,
does everything fit into this same model of problem solving.
But let's now make things a little more interesting.
Rather than just talk and text with this cat, let's go ahead
and have it do some other things instead.
Let me go ahead under Sound, for instance,
and it looks like there's a block in pink here called Play Sound Meow
until done.
And now let me stop the old program and start the new.
[CAT MEOWING]
OK.
A little piercing, but adorable.
And if you want to hear it again--
[CAT MEOWING]
--I can click the green flag--
[CAT MEOWING]
--and I can click the green flag.
Of course, this is a pretty boring cat if it goes lifeless
after it said just one meow.
How would we get it to perpetuate that sound and just meow every few seconds?
What constructor idea might we want to use here?
AUDIENCE: [INAUDIBLE]
DAVID MALAN: Yeah, so some kind of loop.
So it turns out in Scratch, there's a few ways to do this.
But if I go down to Control, you'll see a couple of blocks here.
Repeat some number of times, by default, 10, or forever.
I'm going to go ahead and maybe do this forever.
[LAUGHTER]
And I'm going to drag and drop this now into here.
Notice I can move things around wherever I want.
And now I can reattach this up here.
And now play.
[CAT MEOWING REPEATEDLY]
It's a very agitated cat at the moment.
I can calm him down, perhaps, by dragging and dropping this.
And notice even if there's no room, it will grow to fill.
[CAT MEOWING SLOWED DOWN]
One second.
Now it's a happier cat, if you will.
But now that we have the ability to have the cat do something forever,
it doesn't have to just do the same thing again and again.
It can interact with me or its environment.
So instead of playing the sound here--
someone following along at home?
So instead of playing the sound here, let me go ahead and try this.
Let me go to Sensing and go ahead to--
what might I want to do here?
Let's go ahead and under Motion, rather, under here, point toward mouse pointer.
So point towards mouse pointer and then go ahead and move some number of steps.
And I'm going to have it move one step or dot or pixel at a time.
And here now we'll get this effect.
It looks as though now he'll kind of follow me, right?
And as I move my cursor, he is forever pointing
toward the cursor then moving one step.
Of course, he's a little slow.
And let me go ahead and stop.
If I make him take 10 steps at a time, or 10 dots or pixels on the screen,
now it seems a little harder to avoid.
And you can sort of--
he'll literally do as you move your cursor here.
All right.
So now that we have the ability to do something again and again, let's
have something count up.
For this one, let me go ahead and grab something from online.
So on CS50's website, we'll always make available the examples and source
code from each class.
And this time, I want to go ahead and get this sheep here.
So it turns out you don't have to just use a cat.
You can use a sheep if you prefer.
And let's see.
By looking at this code first, what is this sheep going to do?
When the green flag is clicked, there's this orange puzzle piece
called Counter to one.
What is that?
That's an example of--
what might we call this?
Yeah.
It's called a variable.
Now in algebra, we typically use x and y and z for variables.
In programming, when you want to store some value
in a placeholder like a variable, you typically
give it more descriptive words because x, y, and z don't really
tell the programmer or someone reading it what it's doing.
So we call this variable Counter and we set it equal to 1.
Now forever, the sheep is going to do what?
It's going to say the counter for one second,
it's going to then wait for one second, and then
it's going to change, or add 1 to, the counter as its final step.
So here we have, if you will, counting sheep
whereby it will now just perpetually count up from 1 to 2 to 3.
And probably, if we let this thing go, up to infinity.
So once we have the ability now to do variables,
what if we start to make our programs more interactive
and start to remember information?
Let me go ahead and into our examples from before,
and grab another example here now instead.
I'm going to go back to what's called a Studio in Scratch,
where all of these examples currently are.
And I'm going to go and open up an example called pet 0.
Computer scientists typically start counting from zero
because that's symbolic of all of the light bulbs being off.
And so here's a program now that if I hit
Play does not seem to do anything at first,
but notice as I move my cursor over--
[CAT MEOWING]
--I'm kind of petting the cat now, if you will.
So how is this working?
Well, he, too, is just forever listening or waiting for something to happen.
It's forever doing this if Touching Mouse Pointer then
Play Sound Meow until done.
So now the cat is being responsive to the user input not following my cursor,
but responding just if I'm actually hovering over him.
We can, of course, change this up a little bit in version two of this,
otherwise known as pet one because we started counting at 0.
What should I not do with this program?
[CAT MEOWING]
Maybe don't pet this cat.
Why?
Well, this time it is forever checking if I'm touching the mouse pointer.
And if so, it's going to apparently play a sound roar,
else it plays the sound Meow, which seems to be happening.
So here we go.
[CAT MEOWING]
[CAT ROARING]
So don't pet the cat.
And so that's just a condition asking a question, a so-called Boolean
expression if Touching Mouse Pointer.
Well, now let's do something a little fancier still.
Let me go ahead here and do this.
Let me go ahead and make this one from scratch, no pun intended.
And I'm going to go ahead and start with an event.
When the green flag is clicked, let me go ahead and grab some motion here.
Let me go ahead and grab Set Rotation Style to left right
just because this will make sure that he ultimately does as we intend.
I'm going to go to Control.
I'm going to do the following forever.
Suppose I want the cat to just bounce back and forth on the screen.
Well, the first thing I need to do is animate him and actually
make him start moving.
And the best way to do that, frankly, would just be to go to Motion
and move some number of steps, maybe 10 steps to go quickly or one step
to go slowly.
But I can ask a question every time the cat moves.
I can go and ask something like this.
If something is true, go ahead and maybe do something else.
So maybe bounce off the wall.
So how do I say if you're touching the edge, go ahead and bounce backwards?
Well, it turns out if you poke around, you'll see something like this.
If touching Not Mouse Pointer, but notice this edge,
I can use the little dropdown, change what the puzzle piece says.
I can now move this Boolean expression into place.
The condition will grow to fill.
And what do I want to now do?
Well, if he touches the edge, I'm going to go ahead and say
turn not 15 degrees, which is the default, but I'll do it 180 instead.
And now we have our own little animation where he's going back and forth
and back and forth.
Of course, this seems a little unrealistic
that he's just bouncing happily so, so there is a non-academic feature
we can now introduce.
For instance, you can turn on your computer's microphone and say ouch.
That is what Ouch looks like.
If I go ahead and save this, call this Ouch, go back now to my code.
Let's go ahead and into sound here and maybe play not the sound Meow,
but maybe the sound Ouch, such that now this cat--
[OUCH SOUND PLAYING REPEATEDLY]
OK.
So maybe a little more dynamic.
But it turns out he's really not walking or running.
He's really just--
[OUCH SOUND]
--sliding across the screen, right?
His legs are never actually moving.
Now, why is that?
Well, it turns out that the costume that this sprite is wearing,
that the cat is, it's just a picture.
It's an image composed of lots of little dots.
And you know what?
To animate a character and bring some life to it, so to speak,
all we really need is at least one more picture.
After all, that's all an animated GIF or a video is, multiple pictures.
So here's one, here's two.
Here's one, here's two.
And even though he's definitely making some leaps with each stride,
if you do this fast enough, it would seem
that the cat is actually making some motion
and walking instead of just sliding.
So how might I go ahead and do this?
Let me go ahead and open up this example, which I've made in advance.
This one's called bounce one.
And in bounce one here, I have the following second costume.
If I go ahead and click See Inside and click Play Now,
you'll notice now he's kind of moving.
It's a little jaggy because he's moving from one position to another really
quickly, but now it's the illusion of movement.
So if you've ever played a game or you've ever
created some animation yourself or even a film,
this really is what's been happening underneath the hood all this time.
But you don't have to have just one cat or one sprite in a program.
We can actually have multiple.
Let me go ahead and open up another animal here.
This one, a sea lion.
So in this sea lion here, if I See Inside and see its code,
there's a lot going on here.
So let's see what this thing does first.
If I go ahead and click the green flag--
[SEA LION BARKING]
--it's really, really annoying.
[SEA LION BARKING]
Now, why is that?
There's some loop in here, clearly, that's just doing the same thing again
and again and again.
How might, based on this code, I stop the sea lion from barking?
Yeah.
So that's the solution.
Let's go ahead and hit the space bar.
Why did that actually get him to stop barking?
Well, notice this.
There's two scripts in this program, which
is a little different from before.
Each of these represents a script or a program.
Notice here there's a variable called muted, and by default, it's false.
That is off.
So muted is false, or off, which means it's not muted,
which is why we hear it.
Then it does forever the following.
If the key space is pressed, go ahead and check the following question.
If muted is true, change muted to false, else change muted to true.
So this is a very common approach in programming
where if you have a variable, like something called muted that's
either true or false, 1 or 0, on or off, you
can change its value by just asking that question.
If muted is true, change it to false, else set it to true.
Meanwhile, if we scroll up, there's another script here
that was doing something again and again.
And I'll zoom in on this one.
When the green flag was clicked, the sea lion was also forever doing this.
If muted is false, that is, if it's not muted,
go ahead and play the sound sea lion and go ahead and say hi, hi, hi
for two seconds and then wait for one second.
And do that again and again and again.
So in programming, as in Scratch here, you can do multiple things at a time
sometimes with languages, such that they're both
running together in parallel, if you will, or looping again.
And they can somehow intercommunicate by using something like a variable.
Let's look at one final example involving two different sprites,
this one an old school game that you might recall growing up
called Marco Polo.
In this game of Marco Polo, one person yells out
Marco and one or more other people yell out Polo.
And the first of them is typically blindfolded,
so you're trying to find that person based only on his or her voice's
response.
So in this program here, if I go ahead and click the green flag,
notice that nothing happens yet until I hit the space bar.
And we'll see that the orange puppet says Marco and the blue puppet
says Polo.
But how does that work?
Well, here is the code for the orange puppet.
Forever, he is doing the following.
If the key space is pressed, that is the space bar, say Marco for two seconds,
but then one other feature.
And this is new.
It broadcasts what's called an event.
So it turns out that computers can't just
see what another program or sprite is doing,
but they can listen for something called an event.
It's sort of a secret message from one program to another.
So broadcast event is this other puzzle piece that can just say event.
And now notice if I click not on the orange puppet down here,
but on the blue, the blue puppet has even less code,
but it is not waiting for the green flag to be clicked.
Instead, it is waiting until it receives this so-called
an event, a sort of invisible message from one sprite to another.
And once he receives that event, it says Polo for two seconds.
All right.
So along the way, it turns out that there are better ways
to solve some of these problems.
And we can actually start to think now a little more in terms of design,
the design of the quality of your code.
I'm going to go ahead and do this.
Under events, I'm going to go ahead and grab when green flag is clicked,
and I'm going to go ahead and say something this time.
Let's go ahead and say cough for one second like this.
And then let me go ahead and wait for some number of seconds, like one.
And then you know what?
Let me go ahead and cough three times.
It's not uncommon when you're coughing, in the real world,
to cough three times.
So I'm going to right click or Control click,
I'm going to go ahead and duplicate, and just attach another one of those.
And I'm going to right click or Duplicate and give me one of these.
And now, of course, the cat is going to cough, cough, cough or meow,
and three times in a row.
Now this code is correct.
It does cough three times and it waits one second after each,
but it's not very good code.
It's not well-designed, as a computer scientist would say.
What could we do better with this code based on the ideas we've seen thus far?
AUDIENCE: [INAUDIBLE]
DAVID MALAN: Yeah.
So we can loop instead, right?
And Copy Paste is rarely the solution when
programming, be it in Scratch or in C or in Python or other languages.
So I'm actually going to throw all of this away.
Let me go ahead and just grab a repeat block,
change that default ten to three.
Let me grab these pairs of blocks and put them in here,
drag and drop this up here.
So now I'm going to go ahead and repeat three times, say cough for a second,
and then wait one second.
And now the program is just better designed.
It is no different from before, but it's a little easier
to maintain now for me or someone else because if I
want to change how long something's happening or what's being said,
I can change it now in one place instead of multiple.
But there's this other idea in computer science, this notion of abstraction.
Right now, this is a program that just so happens
to implement the notion of coughing.
But what if I want to use the same idea in multiple programs
and I want to give myself a custom puzzle piece that does not
come with Scratch called cough?
Well, there's this one other feature up here I can do like my blocks,
and I can make a block.
And I'm going to go ahead and call this cough.
And that puzzle piece, once I click OK, is going to give me this pink block
here.
I'm going to go ahead now, for instance, and move all of this
down to the custom puzzle piece.
And now notice because I've made a new block, I have this pink piece here.
I can now move this over here.
And frankly, out of sight, out of mind.
I can literally ignore those puzzle pieces
I created because now I have a new puzzle piece just
called cough that says what it does.
This is an abstraction in the sense that I
don't care how you implement coughing, I just care that your program can cough.
And so we have this notion of reusability
that starts to make our code no less sophisticated, but much,
much smaller and much less prone, potentially, to mistakes.
And I can take this one step further.
Let me go ahead and open up a different variant of this one altogether,
this one in cough three.
You can have these custom puzzle pieces even take arguments.
You can have this puzzle piece called cough
say, well, how many times do you want to cough, thereby taking an input.
Then you can repeat that number of times cough for a second and wait one second.
So if you want to now use this fancier puzzle piece up here,
notice this now looks even simpler.
Go ahead and cough three times.
And everything has been abstracted away.
If I scroll up and out of the way, you don't even
know or have to care how or why cough was implemented.
And so whereas we began this whole conversation
just looking for Mike Smith and trying to find an answer to a problem
correctly, we talked then about efficiency and finding that solution
not only for sure, but also quicker.
And now we've spoken a little bit to ideas
that lie ahead when it comes to the design of the quality of your code.
So where does that actually leave us?
Well, let me go ahead and open up a couple of final examples
here, one of them that I actually made back in my day.
And so this, when I actually started using Scratch for the first time,
it gave me this program here called Oscar Time.
And Oscar Time, reminiscent of an old song from Oscar the Grouch singing,
does this.
[SINGING]
There's this stage.
Notice the lamp post here and the trashcan.
And apparently, something falling from the sky
that looks like a piece of trash, but it's just a sprite.
It's what could have been a cat, but I changed the costume on the cat
to be a piece of trash.
But notice if I move my cursor and click and drag,
notice that this piece of trash follows the cursor just like Scratch followed
my cursor before on the screen.
And notice if I move it over to the trash can,
the trash can opens up, which is a Sensing question.
If touching trash can, then open up.
And open up probably just means change the costume
to show a different image instead of the original, thereby
a very simple idea of animation.
And now notice when I let go, if touching trash can and let go,
Oscar should come out of the trash can, count up to one, which is my score,
and then the game continues.
Now there's more trash falling.
Let me go ahead and do this.
And you'll see that these basic ideas of conditions and loops
and variables and Boolean expressions together
can compose a pretty interactive game.
This game took me eight or more hours to make,
and it's because I did not sit down and just make the whole thing at once.
I took baby steps, so to speak.
I first, frankly, did the easy part and I just found an image of Sesame Street,
put it on the stage, and boom.
At least version one, all it did was say Sesame Street.
And it's not interactive at all.
Then I added a sprite, which instead of being a cat,
I changed the costume to be the trash icon.
And I just figured out the code, the puzzle pieces,
to make that puzzle piece fall from the sky
and then stop when it's on the edge, just
like the cat was able to make a decision to bounce when it touched the edge.
And now things get a little crazy.
The song gets more sophisticated.
I added more and more sprites that just fall in lockstep with the music.
So this was quite a few hours of effort, but it boils down
to really the same principle, just as this other program here does, too.
And for this, rather than me play it, let
me invite one other volunteer to come on up who's got to be--
OK, I see your hand here.
What's your name?
MEGAN: Megan.
DAVID MALAN: Megan.
All right, Megan, we have a game for you called-- maybe
I mentioned this-- [? IB's ?] hardest game.
OK, come on up.
Nice to meet you.
This is a game by one of your former predecessors,
who their problems said zero, implemented this.
You'll see the instructions in just a moment on the screen.
We'll see if we can't inspire some folks to root for you here.
And after this, as is the tradition in CS50, we will adjourn for some cake.
So Megan, we have here for you, [? IB's ?] hardest game.
I'm going to go ahead and maximize the window.
I'm going to go ahead and click Begin and we'll see the instructions.
MEGAN: OK.
DAVID MALAN: Good luck.
MEGAN: Thanks.
[MUSIC -MC HAMMER, "U CAN'T TOUCH THIS"]
DAVID MALAN: Let's go ahead and raise the volume.
Here we go.
[MUSIC -MC HAMMER, "U CAN'T TOUCH THIS"]
(SINGING) Can't touch this.
DAVID MALAN: So you're going to move the arrow keys and navigate your way,
essentially-- oh, yep-- through a maze.
Notice Megan's not able to go beyond the black borders
because if touching edge, logic.
Now when you touch the other sprite, you advance to the next level.

Two sprites now.

Another Yale icon.
(SINGING) From the Oaktown and I'm known as such.
And this is a beat you can't touch.
I told you, homeboy.
DAVID MALAN: Nice.
OK.
[LAUGHTER]
(SINGING) Yeah, that's how we living and you know.
Can't touch this.
Look in my eyes, man.
DAVID MALAN: Nice.
(SINGING) Yo, let me but the funky lyrics.
Can't touch this.
[LAUGHTER]
DAVID MALAN: Nice.
[AUDIENCE GASPING]
[APPLAUSE]
(SINGING) Cold on a mission, so pull them on back.
Let them know that you're too much and this is a beat, uh, they can't touch.
Yo, I told you.
[LAUGHTER]

Why you standing there, man?
Can't touch this.
Yo, sounds the bells.
School is in, sucker.
Can't touch this.
DAVID MALAN: OK.
Good.
Nice.

[AUDIENCE GASPING]
[LAUGHTER]

(SINGING) Or a tape to learn what's it going to take?
And now he's going to burn the charts.
DAVID MALAN: Oh!
(SINGING) And you might as well quit.
That's word because you know--
DAVID MALAN: No!
That's OK.

Oh.
It's OK.

Nice.

Ah!

[INAUDIBLE]
Oh!
Couple more lives.
Nice.
Oh!
[AUDIENCE GASPING]
OK.
Yeah, you got it.
MEGAN: Yes.
Yep.
Oh my God.
DAVID MALAN: All right.
One more life-- two more lives!
Three more lives!
Come on.
(SINGING) Bring the bill.
School's back in.
Break it down.
DAVID MALAN: Yes!
[APPLAUSE]

MEGAN: Up, up, up.

(SINGING) Stop.
Hammer time.
DAVID MALAN: All right.
Last life.
Last life.
Go, go!
Here we go.

All right.
Nice, nice.
Yes, yes.
Ah!
All right.
A round of applause for Megan, if we could.
Check her out.
Here you go.
[APPLAUSE]
This, then, is CS50.
Welcome aboard.
Cake is now served.
(null)%                                                                                                                                                                  ➜ j3kyll@42  ~/SCOP/Jump_Next_Line git:(main) ✗ 

```

### Function 🐧
```c
int	*get_next_line(int fd);
```


## Points to understand in JNL

According to the JNL subject *Calling your function jump_next_line in a loop will then allow you to read the text
available on a file descriptor one line at a time until the EOF*

Call JNL from the main

```c

#include "../include/get_next_line.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}
    if (argc == 0){
        return (0);
    }
	return (0);
}


```

This next line will return an integer that will be used as a parameter for the **get_next_line** function.


```c
fd = open(argv[1], O_RDONLY);
```
**get_next_line** function will return an **integer** that will be taken to evaluate all the lines until the file ends.

### Return value
 | Value | Description         |
 |-----------|----------------------|
 |  1| A line has been read |
 |  0| EOF has been reached |
 |  -1| An error happened |


### VALGRIND
**What it is ?**
The Valgrind tool suite provides a number of debugging and profiling tools that help you make your programs faster and more correct. The most popular of these tools is called Memcheck. It can detect many memory-related errors that are common in C and C++ programs and that can lead to crashes and unpredictable behaviour.

**Installation**
```bash
sudo apt-get update -y
sudo apt-get install -y valgrind
```
**How to Use?**
```bash
gcc tests/main.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./a.out tests/files/part1_test01_with_lines
```


**:information_source:** [ know more about valgrind ](https://valgrind.org/docs/manual/quick-start.html)


### Betty 

```bash
        betty src/*.c  
```

    **And** 

```bash
        betty src/*.h  
```




