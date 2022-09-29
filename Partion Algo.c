// Partion Algo

// procedure_partion(A,p,r)
// {
//     x=A[r]
//     i=p-1
//     for(j=p to r-1)
//     {
//         if(A[j]<=x)
//         {
//             i=i+1
//             exchange(A[i],A[j])
//         }
//     }
//     exchange(A[i+1],A[r])
//     return i+1
// }

// QuickSort(A,p,r)
// {
//     if(p<r)
//     {
//         q=procedure_partion(A,p,r)
//         QuickSort(A,p,q-1)
//         QuickSort(A,q+1,r)
//     }
// }