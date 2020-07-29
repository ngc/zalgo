<br/>
<p align="center">
  <h3 align="center" style="font-size: 400%;">Ẑ̸͈̬͋Ả̷͈̜̘̃ͅL̵̛̰͝͝G̷̥̙̔Ȯ̶̙̳͒</h3>

  <p align="center">
    A zalgo text generator for the command line.
</p>

<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
* [Usage](#usage)
* [License](#license)


<!-- ABOUT THE PROJECT -->
## About Ẑ̸͈̬͋Ả̷͈̜̘̃ͅL̵̛̰͝͝G̷̥̙̔Ȯ̶̙̳͒
a̷̸ ̴͎͏͇̮̹̬̜͎͡z̡̧͉͜͏̳̙̻͢͝aͫ͂ͤ̐̒̌͊̀͌̈́l͑ͤͨ̓ͩ́̐̇̚̚g̶̛̩̬̼̟͔̘͢͠o̩͏̥̫̩̟̝̮̕ͅ ̷̵̧̧̢͙̰̠̠͇t̶̛̛̤̥̪̭̟̻́e̵̴x̠̟҉̵̧̛̼̣̮̰t̸̡͔͈̭͓̭̼͢͜ ̼͓͓̟̳̥̮͘͢ͅg̨̻̮̱͖͔̥͢͜͝è̶̡̦̝̫̦͟͏̕n̴̵e̍̌̑̐͛̎̈͌ͨ͂r̄̽̂̊ͧ͒̌ͦ̽̚a̷̴t̷̷o̴̸r̃̇̏ͮͣͭ̓ͩ̀͋ ̷̶f̅͛̏̃̎̄͊̒ͮͣǒ̏ͮ̌ͨ̏ͩͫͦ̚r̷̶ ̶͔͇̺͉̀͘͢͟͜ṯ̨̨̼̻̬͢͡͞͏h̄ͬͥͮͪͩ͋̎ͧ̚ẻͧ̓̏̇͗ͧ͌͌ͭ ̴̴̢̧̥̲̖̲͜͝c̷̴oͧͬͫ̈́ͫͪ̌̍̈́͌m̶̸m̷̵a̷̡̛̻̭̦͙̪͔͘n̷̸dͦ̋̊̓ͪͩͫ͂̈́̈ ̵̸l̸̸i̦͙҉̵̧̢̭̀̕͜n̄̉̽ͭ̏̏̑̃̌̏ę͔͇͎̦̬͡͏̫͜

<sub>a zalgo text generator for the command line<sub>

\
From [KnowYourMeme](https://knowyourmeme.com/memes/zalgo):
>Zalgo is an Internet legend about an ominous entity believed to cause insanity, death and destruction of the world, similar to the creature Cthulhu created by H.P. Lovecraft in the 1920s. Zalgo is often associated with scrambled text on webpages and photos of people whose eyes and mouth have been covered in black.

>On forums and image boards, scrambled text began being associated with Zalgo with phrases like "he comes" and "he waits behind the wall."

This strange text format is created by abusing a feature in unicode which implements characters that can be stacked on or under each other called [combining characters](https://en.wikipedia.org/wiki/Combining_character). These characters are usually used for digitally representing different languages and writing components of languages such as Hiragana, but they can be used on latin characters to create this interesting effect.  

This implementation of Zalgo is made for easy interfacing with other programs and the command line as it completely lacks a UI and takes directly from stdin and writes directly to stdout. You can read more about the usage of this project in the [usage section](#usage).

<!-- GETTING STARTED -->
## Getting Started

To get a local build up and running follow these simple steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* g++

Ubuntu
```sh
sudo apt install g++
```

### Installation
 
1. Clone the repo
```sh
git clone https://github.com/thaniel-c/zalgo.git
```
2. Compile
```sh
cd zalgo
```
```sh
g++ -o zalgo main.cpp
```

<!-- USAGE EXAMPLES -->
## Usage
Since this program is made to be a command line tool, there are many different ways you can use it through the [UNIX pipeline](https://en.wikipedia.org/wiki/Pipeline_(Unix)).

Basic Usage:

1. Echo
```sh
echo HE COMES | ./zalgo
``` 
Outputs H̤̊̈̊E͌͋͘͠ C̎̕O͕̫̜̞͎̭̭̭̠͍M̈́̎̕E̛̫̎͠S̛̓.

2. File piping
```sh 
cat textfile.txt | ./zalgo > zalgotextfile.txt
```
Converts the contents of a file into Zalgo text which is then written to a new text file.

3. In C++\
Since this program was written in C++, I've seperated the Zalgo implementation into its own header file which you can use to easily implement Zalgo text into your programs. 
For more detail see `zalgo.h`.

Additional Usage:

1. Arguments\
With and without piping you can use arguments to define the magnitude at which the Zalgo text is applied. 
```sh
echo HE COMES | ./zalgo 1000x1000x1000
```
The format is OVERLAIDxBELOWxABOVE, as regex it is `\d{1,}x\d{1,}x\d{1,}`.

\
\
2. Fun\
Anything on your computer that either takes input or has an stdoutput can be used with Zalgo. 
```sh
echo HE COMES | ./zalgo | cowsay
```
```
 __________
< Hͭ̓̓̇͗̎È C̀Ȏ͛͌̈́͐̅M̤̝̫̩͎̭̖͟͢͟E̊S̨̡̨͈̭̜͈͈͓̣ >
 ----------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
```

or 

```sh 
echo HE COMES | cowsay | ./zalgo
```
```
 __͞__͞__̨̝͇͔͇̝̫͓̘̘_̓͋_̓͋_ͭ̓̓̇͗̎_̨̝͇͔͇̝̫͓̘̘
< H̤E C̀OMES >
 --̡̡͈̬̣̝̫̤̤͕----ͭ̏͛̇͑̈́̇-̤̤̀̀--̧̧̡̠͓̪̗̠͢͜-̧̧̡̠͓̪̗̠͢͜
        \   ^_̨̝͇͔͇̝̫͓̘̘_̨̝͇͔͇̝̫͓̘̘^
         \̓  (̭͍̖̬̮̤͙̦̜̥oo̧̬͕̫̤̫̬͜͢͟)̤̤̕\_̨̝͇͔͇̝̫͓̘̘__͞__͞_̓͋_ͭ̓̓̇͗̎
            (̐̐͂̆̚_̨̝͇͔͇̝̫͓̘̘_̉)̇̓\       )̡͓̪͎͍͉̙͎̗̠\/\
                ||-̆̇-̧͍͎̤̣̘͉͇̬͟--̣̀w̢͙͙͍̪̫̪̮͉͟ |ͭ̓̓̇͗̎
                |̑̎̽̓̐͗|     |̢̗͎̬̮͍͕̥̬͜|̢̗͎̬̮͍͕̥̬͜
```

<!-- LICENSE -->
## License

Distributed under the GNU GPL. See `LICENSE` for more information.

## Notable Issues
Since this program is entirely dependent on unicode, the visual representation of the Zalgo text can vary heavily (outside of the scope of this program). For example, Zalgo text in GitHub's markdown code blocks above appear significantly vertically smaller than they usually are. 
In the GNOME terminal, upper combining characters aren't shown at all. This can vary across terminal emulators. To my knowledge Discord actively filters out the effect of Zalgo text as of recently. 
