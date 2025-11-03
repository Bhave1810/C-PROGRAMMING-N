#include<stdio.h>
int main()
{
	int x=0;
	
	int y=(x>>5)?++x:x++;
	printf("x=%d,y=%d",x,y);
return 0;
}
// output:x=1,y=0

//  Code:



// ### Step 1️⃣  👉  `x = 0`

// ---

// ### Step 2️⃣  👉  `(x >> 5)`

// `>>` means **right shift**.
// When you do `x >> 5`, it shifts all bits of `x` to the right by 5 positions.

// But since `x = 0`,
// `0 >> 5` → still `0`.

// So `(x >> 5)` gives **0**, which means **false** in C.

// ---

// ### Step 3️⃣  👉  Ternary operator

// ```
// (condition) ? (if true) : (if false)
// ```

// So:

// ```
// (x >> 5) ? ++x : x++
// ```

// Since condition is **false**,
// the **false part** runs → `x++`.

// ---

// ### Step 4️⃣  👉  `x++`

// * `x++` is **post-increment** → it uses the current value first, then increases it.

// So:

// * The value returned (for assignment to `y`) = 0 (old value of x)
// * After that, `x` becomes `1`

// ✅ Now:

// ```
// x = 1
// y = 0
// ```

// ---

// ### Step 5️⃣  👉  Print

// ```
// printf("x=%d,y=%d", x, y);
// ```

// Output:

// ```
// x=1,y=0
// ```

// ---

// 🧠 **Quick summary:**

// | Step | Expression       | x before | y value | x after |
// | ---- | ---------------- | -------- | ------- | ------- |
// | 1    | (x >> 5) → false | 0        | —       | 0       |
// | 2    | y = x++          | 0        | 0       | 1       |

// ✅ **Final Output:** `x=1, y=0`

// ---

// Would you like me to explain how it would change if `x` was not 0 (like `x=40`)?
