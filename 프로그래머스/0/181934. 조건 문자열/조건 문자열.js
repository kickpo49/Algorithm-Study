function solution(ineq, eq, n, m) {
    const op = eq === "=" ? ineq + eq : ineq;
    
    switch (op) {
        case ">=":
            return n >= m ? 1 : 0;
        case "<=":
            return n <= m ? 1 : 0;
        case ">":
            return n > m ? 1 : 0;
        case "<":
            return n < m ? 1 : 0;
        default:
            return 0;
    }
}