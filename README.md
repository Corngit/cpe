# CPE
Just share my code.

**CPE is our graduation requirements**

### 2026.02.06
After a long six months, I’ve finally finished all 49 problems, working on them on and off. Along the way, I developed the habit of practicing problems regularly, and it turned out to be quite enjoyable. 

I hope this experience will be helpful to me in the future.
## Here is a brief summary of the assumptions behind three basic types of problem inputs.
### Reading a fixed number of inputs (n cases)
```c
int main(){
    int n;
    scanf("%d", &n);
    while(n--){

    }
    return 0;
}
```

### Reading until end-of-file (EOF)
```c
int main(){
    int x;
    while(scanf("%d", &x)!=EOF){

    }
    return 0;
}
```
### Reading until a terminating zero is encountered
```c
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n=0){
            break;
        }
    }
    return 0;
}
```