//int count; //global var don't get destroy after completion of function so it retain value
// but global var is available to other files. not good practice. beter to use staic var
int increment()
{
    // this var get destroyed after completion and recreated when call again
    static int count;
    count = count + 1;
    return count;
}

/* 
static keyword restric access to the variable if you declare it globaly
and you would be able to retain its value if local to a function and if you 
don't initialized it it will be automaticaly initialized to zero. 
*/