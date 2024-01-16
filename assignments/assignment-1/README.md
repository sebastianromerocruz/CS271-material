<h2 align=center>Homework 1</h2>

<h1 align=center>Intro to Unix, C, and Shell Scripting</h1>

### Problems

1. [**You Shall Not Pass**](#problem-1-you-shallpass-actually) (_0 pts_)
2. [**File Surfing**](#problem-2-file-surfing) (_3.4 pts_)
3. [**Hello, You!**](#problem-3-hello-you) (_3.3 pts_)
4. [**It Just Comes Automatic**](#problem-4-it-just-comes-automatic-33-pts) (_3.3 pts_)

- [**How To Submit**](#how-to-submit)

### Problem 1: _You Shall...Pass, Actually (0 pts)_

Read the [**linked article**](https://codefather.tech/blog/chmod-755-command/) about the command:

```bash
chmod 755
```

This is a simple reading assignment, so _you don't have to submit anything_. Just please be aware that questions based on the article will show up on the midterm exam.

### Problem 2: _File Surfing (3.4 pts)_

The Terminal command `mkdir` stands for "make directory" and, as the name implies, it will create a brand new directory / folder inside the current directory. It takes the name of the new directory as an argument:

```bash
mkdir new-folder
```

Your job is to use your Terminal and the commands **`cd`**, **`mkdir`**, and **`touch`** to create the following folder and file structure **in your Desktop**:

```
hw1
├── code
│   ├── hello_me.c
│   └── run_me.sh
└── screenshots
```

That is, _using only your Terminal and the above commands_, you should have the following:

![assignment-1](assets/problem-1-1.png)

There is no need to write any code in neither `hello_me.c` nor `run_me.sh` yet. 

Once you are done, **take a screenshot of your Terminal showing the commands that you used to accomplish this task** and place it inside the `screenshots` subfolder (you can drag-and-drop; no need to use the Terminal for that). Your screenshot must look like the ones from [**lecture**](https://github.com/sebastianromerocruz/CS271-material/blob/main/lectures/week-1/assets/terminal-py.png), or very similar. 

They don't need to be perfect, either. Feel free to leave any mistakes that you made. As long as I see the commands necessary to form the structure above, you're all good.

### Problem 3: _Hello, You! (3.3 pts)_

Inside of `hello_me.c`, write a C program that will output the following:

```
Hello! My name is Sebastián.
A computer science professor.
I am currently listening to Venus by Shocking Blue.
```

You can use our [**"Hello, World!" C program from class**](https://github.com/sebastianromerocruz/CS271-material/tree/main/lectures/week-1#copy-and-paste-the-c-hello-world-equivalent) as reference. The text must be in three separate lines and, of course, you need to replace `Sebastián`, `professor`, and `Venus by Shocking Blue` with your own answers. You can call your executable file whatever you wish.

Next, while inside of the `code` folder (the directory where `hello_me.c` should be in), use your Terminal, `gcc`, and its appropriate usage to compile and run `hello_me.c`. **Take a screenshot of the `gcc` command and the executable's output on your Terminal**, and place it inside of the `screenshots` folder. 

This problem will be graded based both on the contents of `hello_me.c` and this screenshot, so don't forget!

### Problem 4: _It Just Comes Automatic (3.3 pts)_

Remember that, inside of shell scripts, you can include several Terminal commands so that when you run that file, all of those commands run automatically.

Inside `run_me.sh` write bash code that:

1. Prints `STARTING INTRODUCTION...`
2. Runs a command to compile `hello_me.c` and create and executable out of it (you can call this executable whatever you wish).
3. Runs a command to run the executable created in step 2.
4. Prints `INTRODUCTION FINISHED`

Finally, making sure you are inside of the `code` directory, use the appropriate 2 commands to convert `run_me.sh` into an executable file and to run it. **Take a screenshot of these command and the executable's output on your Terminal**, and place it inside of the `screenshots` folder.

This problem will also be graded based both on the contents of `hello_me.c` and this screenshot, so don't forget!

### How To Submit

Once you are all done, please **zip your `hw1` folder** (on [**MacOS**](https://youtu.be/62tw3wZvQxs?si=_LjMuhre4-EHXQNv&t=24) and [**Ubuntu**](https://youtu.be/WzuF43YVfzY?si=6RIuosW7zj4UtMoS)) and submit that zip file in the **`Assignments`** section in [**Classes**](https://classes.pace.edu/d2l/home/398827). Failure to submit the homework as a zip file may result in a 2-point deduction.

Your final folder structure, thus, should look something like this:

```
hw1
├── code
│   ├── HelloMe
│   ├── hello_me.c
│   └── run_me.sh
└── screenshots
    ├── problem-2.png
    ├── problem-3.png
    └── problem-4.png
```