<h1 align=center>CS 271: <em>Fundamentals of Unix and C Programming</em></h1>

<h2 align=center>Pace University Seidenberg School of Computer Science & Information Systems</h2>

<h3 align=center>Spring 2024</h3>

### Sections

1. [**Course Description**](#course-description)
2. [**Instructor**](#instructor)
3. [**Course Material and Schedule**](#course-material-and-schedule)
    - [**Unix**](#unix)
    - [**C Language**](#c-language)
4. [**Final Grade Breakdown**](#final-grade-breakdown)
    - [**Homework Assignments**](#homework-assignments)
    - [**Midterm and Final Exams**](#midterm-and-final-exam)
    - [**ChatGPT and Other Online AI Tools**](#chatgpt-and-other-online-ai-tools)
5. [**University Resources and Policies**](#university-resources-and-policies)
    - [**Procedure for Students Who Wish to Obtain Reasonable Accommodations for a Course**](#procedure-for-students-who-wish-to-obtain-reasonable-accommodations-for-a-course)
    - [**Technological Resources**](#technological-resources)
    - [**Appropriate Use Policy for Information Technology**](#appropriate-use-policy-for-information-technology)
    - [**Sex-Based Misconduct Policy and Procedure**](#sex-based-misconduct-policy-and-procedure)
    - [**Self-Care**](#self-care)

### Course Description

Introduction to fundamental concepts and mechanisms of Unix and C programming. UNIX topics include Unix shells, shell variables, file system, and common Unix commands and programming with shell script. C language topics include structs, pointer arithmetic, call-by-value versus call-by- reference, strings, I/O basics, macros and conditional compilation, and program structure. Working with Ubuntu on the secure cloud services platform Amazon Web Services (AWS). Getting familiar with Git and Github to be able to use these tools on team projects.

### Learning Outcomes

Having completed this wonderful course, you should be able to:

- Understand the major differences between Windows and UNIX, and work comfortably in either environment.
- Use common UNIX commands to traverse the file system, create and delete files and directories, edit files, change file and directory accessibility, create links, and create and manage user accounts.
- Create simple UNIX commands using pipes and command substitution.
- Compose simple shell scripts to control system processes.
- Understand the main differences between C and Java.
- Develop efficient C programs using the basic data types and statements, functions, prototypes, structs, arrays and pointers.

### Instructor

[**Sebastián Romero Cruz**](https://github.com/sebastianromerocruz)  _(They / Them)_

I like reading novels, listening and playing music, and watching slice-of-life anime. Nice to meet you.

| **E-Mail**                                                | **Office Hours**                                    |
|-----------------------------------------------------------|-----------------------------------------------------|
| [**sromerocruz@pace.edu**](mailto:sromerocruz@pace.edu)   | [**calendly**](https://calendly.com/profromerocruz) |

### Course Material and Schedule

CS 271 _Fundamentals of Unix and C Programming_ is a two-credit course and requires **two instructional hours per week**. These will be administered in the following way:

- **Weekly Lecture Videos**: These will be your main source of the course material, and will be released on a weekly basis through [**YouTube**](https://www.youtube.com/@Prof.RomeroCruz-ks2mx/playlists) (keep in mind that the videos themselves will be unlisted, so you will need the actual links in order to access them).

- **Lectures Notes**: In addition to these videos, I will also post text versions of the material on this repository. You will, thus, get access to all of the code that I write throughout.

You can find both of these below (scheduling is subject to small changes throughout the semester, but we don't anticipate any major changes):

#### Unix

1. **Week 1**: _Setting Up, Unix Intro, `gcc` Intro, Hello Worlding_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmH9_pBgqlTrJ3fz_-fAWjfk)
    - [**Notes**](lectures/week-1/)
2. **Week 2**: _`gcc` Usage, Unix/C History, Intro to Shell Scripting_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmErZiEIzuI8TvQHBaT5xCX-)
    - [**Notes**](lectures/week-2/)
3. **Week 3**: _Basic Commands, Manual Pages, Standard I/O, Command Piping_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmHytyEgelNx5C95oEt7pbOS)
    - [**Notes**](lectures/week-3/)
4. **Week 4**: _File Systems, File Names, Directories, Permissions, Inodes_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmHcKU7VpSZFc9XP6jK-4Cjr)
    - [**Notes**](lectures/week-4/)
5. **Week 5**: _Shells, Environments, Shell Programming I_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmFR7ZIu2IDEBJT4e8xy7VLA)
    - [**Notes**](lectures/week-5/)
6. **Week 6**: _Filters, `grep`, `egrep`, Regular Expressions, `sed`, Shell Programming II_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmHcFglEJE-fwKqyLG7MQQ7z)
    - [**Notes**](lectures/week-6/)
7. **Week 7**: _Midterm 1_

#### C Language
8. **Week 8**: _Introduction to C, `char`, Strings, `int`, `float`, Standard Library_
    - [**Videos**](https://www.youtube.com/playlist?list=PLtSG79UwxwmGxA2JzVNdgtxLxGHarHE7B)
    - [**Notes**](lectures/week-8/)
9. **Week 9**: _Operators, Assignments, Loops, Conditionals_
    - [**Videos**](https://youtube.com/playlist?list=PLtSG79UwxwmHNOenTrOlTPynZy0_jZjL6&si=iShb0Uh__tmZfzwZ)
    - [**Notes**](lectures/week-9/)
11. **Week 11**: _Functions, Parameter Passing, Pointers_
    - [**Videos**](https://youtube.com/playlist?list=PLtSG79UwxwmHRr75pdktSLvheqtoIw8fu&si=lsXCXlMW1vcKrLZA)
    - [**Notes**](lectures/week-11/)
12. **Week 12**: _`struct`, `enum`, Arrays, Array/Pointer Duality_
    <!-- - [**Videos**]()
    - [**Notes**]() -->
13. **Week 13**: _Dynamic Storage, `malloc`, `calloc`, `free`, Memory Leaks_
    <!-- - [**Videos**]()
    - [**Notes**]() -->
14. **Week 15**: _External References, Linkage Editing, Static Variables_
    <!-- - [**Videos**]()
    - [**Notes**]() -->
15. **Week 16**: _Final Exam_

While this material will mostly be managed here on GitHub, it will also be appropriately linked on [**Classes**](), where your grades will also be posted. Speaking of...

### Final Grade Breakdown

Your performance on this course will be assessed the following way:

| **Course Work**      | **Percent of Final Grade** |
|----------------------|----------------------------|
| Homework Assignments | 66.6%                      |
| Midterm Exam         | 16.7%                      |
| Final Exam           | 16.7%                      |

Depending on how your overall score on these, your final grade will be calculated through the following percentages:

|                  |        |         |         |         |         |         |         |         |          |
|------------------|--------|---------|---------|---------|---------|---------|---------|---------|----------|
| **Rounded %**    | 0 - 59 | 60 - 69 | 70 - 76 | 77 - 79 | 80 - 82 | 83 - 86 | 87 - 89 | 90 - 93 | 94 - 100 |
| **Letter Grade** | F      | D       | C       | C+      | B-      | B       | B+      | A-      | A        |

#### Homework Assignments

Homework assignments will be released **every two weeks** and will be based on the material covered the two weeks prior. This means that you will have about 6 assignments this semester, each accounting for 11.1% of your grade. You work must be submitted through [**Classes**](), and absolutely no unexcused late submissions will be accepted. Any potential extension must be approved by me at least 12 hours in advance.

#### Midterm and Final Exam

Both exams will be administered through Classes as a "quiz" (i.e. you will be able to find them in the `Quizzes` section of Classes). Both exams will be available for you to take **for exactly one week**. Any topic covered in my lecture videos and notes up until that point is fair game. Note, however, that once you begin the exam, you will only have **two hours** to finish it, so make sure that you prepare appropriately (i.e. start at least two hours before the end time, make sure you have good wifi, full battery, etc.). Both exams will have two sections:

1. **Multiple Choice / True or False** (70 pts)
2. **Scripting / Programming** (30 pts)

The exams are **closed book**–your browser will be locked the moment you begin. Classes keeps track of all sorts of activity once you begin the exam, like how long it takes you to answer a question, whether you've switched tabs and for how long, etc.. I can't have eyes everywhere, but please understand that if I see anything glaringly suspicious, **you are liable to get a zero on the entire exam**.

#### ChatGPT and Other Online AI Tools

As this class is being held asynchronously, it is all too easy to fall into the temptation of simply having an AI tool like ChatGPT do all your work for you, and virtually impossible for me to stop you from doing so. However, I would like to give you a fair warning that all of my assignments and exams are run through ChatGPT and other similar tools (such as Copilot) prior to release. When I grade your assignments, the **first thing I will do is compare your answer to the AI generated ones**. If I find that your solution bears too close a similarity to any of these AI-generate solutions, **you will receive a 0 for the assignment**. 

And don't try doing something silly like changing variable names or adding whitespace–that's the programming equivalent of changing your font size to make an essay look longer. Manage your time well, and do your own work. Your future programmer self will thank you for it.

### Academic Integrity Code

Students in this course are required to adhere to Pace University's Academic Integrity Code. The Academic Integrity Code supports honesty and ethical conduct in the educational process. It educates students about what constitutes academic misconduct, helps to deter cheating and plagiarism, and provides a procedure for handling cases of academic misconduct. Students are expected to be familiar with the Code, which can be found under "University Policies" in the [**Student Handbook**](https://www.pace.edu/student-handbook).

### University Resources and Policies

#### Procedure for Students Who Wish to Obtain Reasonable Accommodations for a Course

The University's commitment to equal educational opportunities for students with disabilities includes providing reasonable accommodations for the needs of students with disabilities. To request a reasonable accommodation for a qualified disability a student with a disability must self-identify and register with Student Accessibility Services for his or her campus. No one, including faculty, is authorized to evaluate the need for or grant a request for an accommodation except Student Accessibility Services. Moreover, no one, including faculty, is authorized to contact Student Accessibility Services on behalf of a student. For further information, please see the [**Resources for Students with Disabilities**](https://www.pace.edu/student-accessibility-services) page.

#### Technological Resources

- List of all [**Pace Information Technology Services**](https://www.pace.edu/its).
- For assistance with a technological concern (Classes, Internet, Computer, etc.), contact the Pace Helpdesk at 914-773-3648 or create a [**help desk ticket**](https://helpdesk.pace.edu/TDClient/213/Portal/Home/).

#### Appropriate Use Policy for Information Technology

Pace endorses the following statement on software and intellectual rights distributed by EDUCAUSE, the non-profit consortium of colleges and universities, committed to the use and management of information technology in higher education. The statement reads:

> _Respect for intellectual labor and creativity is vital to academic discourse and enterprise. This principle applies to work of all authors and publishers in all media. It encompasses respect for the right to acknowledgment, right to privacy and right to determine the form, manner and terms of publication and distribution._
>
> Because electronic information is volatile and easily reproduced, respect for the work and personal expression of others is especially critical in computer environments. Violations of authorial integrity, including plagiarism, invasion of privacy, unauthorized access and trade secret and copyright violations, may be grounds for sanctions against members of the academic community.

[**Pace’s appropriate use policy**](https://www.pace.edu/its/about-its/it-policies/it-appropriate-use-policy) applies to recordings of classroom instruction and digital artifacts created by faculty and students.

#### Sex-Based Misconduct Policy and Procedure

Pace University is committed to providing a safe environment for every member of its community and to ensuring that no student, faculty or staff member is excluded from participation in or denied the benefits of any University program or ac:vity on the basis of sex. Accordingly, the University prohibits the following forms of Sex-Based Misconduct: sexual assault, sexual harassment, gender-based harassment, da:ng violence, domes:c violence, sexual exploitation and stalking.

Instructors are a non-confidential resource and have an obligation to report any information about sexual assault with Ms. Lisa Miles, Executive Director of Institutional Equity and Title IX Coordinator (163 Williams Street, Room 1017, 212-346-1310, [**amiles@pace.edu**](mailto:amiles@pace.edu)). The Title IX/Affirmative Action Office is responsible for investigating violations of the sexual misconduct policy. For more information about the Pace University sexual misconduct policy, see the [**Sex-Based Misconduct Policy and Procedure**](https://www.pace.edu/sites/default/files/2022-04/sexual-assault-guide.pdf) (PDF).

Members of the University community who believe that they have been subjected to Sex-Based Misconduct are encouraged to report such incidents to the University and, where applicable, to local law enforcement. **Confidential** resources include the **University Counseling Centers, Offices of Sexual and Interpersonal Wellness** and **University Healthcare**. Contact information for those offices may be found in the self-care section below.

#### Self-Care

Your academic success in this course and throughout your college career depends heavily on your personal health and well-being. Stress is a common part of the college experience, and it often can be compounded by unexpected life changes outside the classroom. The Pace Community strongly encourages you to take care of yourself throughout the term, before the demands of midterms and finals reach their peak. Please feel free to talk with me about any difficulty you may be having that may impact your performance in this course as soon as it occurs and before it becomes unmanageable. Please know there are a number of other support services on campus that stand ready to assist you. I strongly encourage you to contact them when needed.

| Department                                  | Pleasantville | New York City |
|---------------------------------------------|---------------|---------------|
| Counseling Center                           | 914-773-3710  | 212-346-1526  |
| Dean for Students Office                    | 914-773-3351  | 212-346-1306  |
| Health Care Unit                            | 914-773-3760  | 212-346-1600  |
| Residential Life                            | 914-923-2791  | 212-346-1295  |
| Student Development and Campus Activities   | 914-773-3861  | 212-346-1590  |
| Office of Multicultural Affairs & Diversity | 914-773-3775  | 212-346-1563  |
| Sexual Assault Prevention & Education       | 914-597-8783  | 212-346-1931  |

| Academic Advisement                         |               |               |
|---------------------------------------------|---------------|---------------|
| Advising Center For Exploring Majors        | 914-773-3847  | 212-346-1798  |
| College of Health Professions               | 914-773-3961  | 914-773-3552  |
| Dyson College                               | 914-773-3781  | 212-346-1518  |
| International Student / Scholars            | 914-773-3425  | 212-346-1368  |
| Lubin School of Business                    | 914-773-3531  | 212-618-6550  |
| Pforzheimer Honors College                  | 914-773-3941  | 212-346-1697  |
| Seidenberg School                           | 914-773-3254  | 212-346-1864  |
| Studying Abroad                             | 914-773-3447  | 212-346-1368  |