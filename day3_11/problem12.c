

#include<stdio.h>
int main()
{
int x = 3;
printf("%d\n", (x = 0) ? x + 1 : x - 1);
}
// output:-1
//  break it carefully — this is a common confusion in C!

// ---

// ### Code:

// ```c
// #include<stdio.h>
// int main()
// {
//     int x = 3;
//     printf("%d\n", (x = 0) ? x + 1 : x - 1);
// }
// ```

// ---

// ### Step 1️⃣

// `int x = 3;`
// → variable `x` has value `3`.

// ---

// ### Step 2️⃣

// Inside the `printf`, we have:

// ```
// (x = 0) ? x + 1 : x - 1
// ```

// 👉 **Notice**: here you used **`=` (assignment)**, not **`==` (comparison)**.

// So this line **sets** `x` to `0`, not checks it.

// After `x = 0`,
// the **value of the expression `(x = 0)`** is also `0`.

// ---

// ### Step 3️⃣

// Now, in C:

// * `0` means **false**
// * non-zero means **true**

// So the condition `(x = 0)` is **false**,
// and the program runs the **false part** → `x - 1`.

// ---

// ### Step 4️⃣

// `x` is now `0`,
// so `x - 1 = 0 - 1 = -1`

// ---

// ### ✅ Final Output:

// ```
// -1
// ```

// ---

// 🧠 **Key point:**

// * `x = 0` → assigns 0 to x (makes condition false)
// * `x == 0` → checks if x is 0 (true/false check)

// 👉 So use **`==`** when comparing, not **`=`**.

