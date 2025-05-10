"addi %[fmul_cnt], %[fmul_cnt], 1\n\t"
"fmul.s f2, %[A_Re], %[B_Re]\n\t"      

"addi %[fmul_cnt], %[fmul_cnt], 1\n\t"
"fmul.s f3, %[A_Im], %[B_Im]\n\t"      

"addi %[fsub_cnt], %[fsub_cnt], 1\n\t"
"fsub.s f0, f2, f3\n\t"                

"addi %[fmul_cnt], %[fmul_cnt], 1\n\t"
"fmul.s f2, %[A_Re], %[B_Im]\n\t"      

"addi %[fmul_cnt], %[fmul_cnt], 1\n\t"
"fmul.s f3, %[A_Im], %[B_Re]\n\t"      

"addi %[fadd_cnt], %[fadd_cnt], 1\n\t"
"fadd.s f1, f2, f3\n\t"                
