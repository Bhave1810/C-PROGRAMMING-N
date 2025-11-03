
// 20) What will be the output for the following C code?
#include<stdio.h>
int main()
{
int x, y, z;
x = 9 > 8 > 7;
y = 9 > 8 > 0;
z = 9 > 8 > 1;
printf("%d %d %d", x, y, z);
return 0;
}

// output:0 1 0
// ---

// ### Code:

// ```c
// #include<stdio.h>
// int main()
// {
//     int x, y, z;
//     x = 9 > 8 > 7;
//     y = 9 > 8 > 0;
//     z = 9 > 8 > 1;
//     printf("%d %d %d", x, y, z);
//     return 0;
// }
// ```

// ---

// ### ⚙ Step-by-step

// In C, **relational operators** like `>` are evaluated **from left to right**,
// and the result of each comparison is **either 1 (true)** or **0 (false)**.

// ---

// ### 1️⃣ For `x = 9 > 8 > 7`

// Let’s evaluate step by step:

// * First: `9 > 8` → ✅ true → gives **1**
// * Now expression becomes: `1 > 7`
// * Check that: `1 > 7` → ❌ false → gives **0**

// ✅ So `x = 0`

// ---

// ### 2️⃣ For `y = 9 > 8 > 0`

// * `9 > 8` → ✅ true → gives **1**
// * Now: `1 > 0` → ✅ true → gives **1**

// ✅ So `y = 1`

// ---

// ### 3️⃣ For `z = 9 > 8 > 1`

// * `9 > 8` → ✅ true → gives **1**
// * Now: `1 > 1` → ❌ false → gives **0**

// ✅ So `z = 0`

// ---

// ### ✅ Final Output:

// ```
// x=0  y=1  z=0
// ```

// ---

// 🧠 **Key point:**
// In C, comparisons don’t chain like in math.
// Each `>` works one by one, and the first result (0 or 1) is used in the next comparison.

// ---

// Would you like me to show what happens if you used parentheses like `(9 > 8) > 7` or `9 > (8 > 7)` to see the difference?
