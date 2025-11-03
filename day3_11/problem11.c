

#include<stdio.h>
int main()
{
	int x=6,y=x++;

	(x>y)?printf("X is greater"):(x==y)?printf("Both are equal"):printf("Y is greater");
	
    
    return 0;
}

// output : X is greater
// Sure 😄 Let’s break it step by step 👇

// ### Code:

// ```c
// #include<stdio.h>
// int main()
// {
// 	int x = 6, y = x++;

// 	(x > y) ? printf("X is greater") :
// 	(x == y) ? printf("Both are equal") :
// 	printf("Y is greater");
    
// 	return 0;
// }
// ```

// ---

// ### Step-by-step explanation:

// 1. **`int x = 6, y = x++;`**

//    * Here, `x++` is **post-increment**.
//    * Post-increment means:
//      👉 First, use the value of `x`,
//      👉 Then increase it by 1.

//    So:

//    * `y = x++` → `y = 6` (old value of x)
//    * After this line, `x` becomes `7`.

//    ✅ Now:

//    ```
//    x = 7
//    y = 6
//    ```

// ---

// 2. **Ternary operator part:**

//    ```c
//    (x > y) ? printf("X is greater") :
//    (x == y) ? printf("Both are equal") :
//    printf("Y is greater");
//    ```

//    Let’s check the conditions:

//    * `x > y` → `7 > 6` → **true**
//    * So it prints **“X is greater”**
//    * The other parts won’t run because the first condition is already true.

// ---

// ### 🧠 Output:

// ```
// X is greater
