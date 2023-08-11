#include <stdio.h>

void main()
{
    int empno, basic;
    int mob, da, hra, oth, pf, insu, it, g_salary, n_salary;
    printf("-------------------------------------------------------------\n");
    printf("                  EMPLOYEE SALARY DETAILS");
    printf("\n-------------------------------------------------------------");
    printf("\nEMPNO : ");
    scanf("%d", &empno);
    printf("BASIC : ");
    scanf("%d", &basic);
    printf("-------------------------------------------------------------");
    printf("\nEARNINGS           DEDUCTIONS ");
    printf("\n-------------------------------------------------------------");

    if (basic < 10000)
    {
        mob = basic * 0.05;
        da = basic * 0.08;
    }
    else if (10000 < basic < 15000)
    {
        mob = basic * 0.1;
        da = basic * 0.1;
    }
    else
    {
        mob = basic * 0.12;
        da = basic * 0.15;
    }

    if (basic < 8000)
    {
        hra = basic * 0.05;
    }
    else if (8000 < basic < 20000)
    {
        hra = basic * 0.1;
    }
    else
    {
        hra = basic * 0.12;
    }

    if (basic < 15000)
    {
        oth = basic * 0.02;
    }
    else if (15000 < basic < 25000)
    {
        oth = basic * 0.03;
    }
    else
    {
        oth = basic * 0.05;
    }

    int total1, total2;
    total1 = mob + da + hra + oth;
    g_salary = total1 + basic;

    if (g_salary < 8000)
    {
        pf = g_salary * 0.05;
        it = g_salary * 0.01;
    }
    else if (8000 < g_salary < 15000)
    {
        pf = g_salary * 0.07;
        it = g_salary * 0.02;
    }
    else
    {
        pf = g_salary * 0.1;
        it = g_salary * 0.03;
    }

    if (g_salary < 5000)
    {
        insu = g_salary * 0.02;
    }
    else if (5000 < g_salary < 15000)
    {
        insu = g_salary * 0.04;
    }
    else
    {
        insu = g_salary * 0.05;
    }
    total2 = pf + insu + it;

    n_salary = g_salary - total2;

    printf("\nMOB  : %d           PF   : %d", mob, pf);
    printf("\nDA   : %d           INSU : %d", da, insu);
    printf("\nHRA  : %d           IT   : %d", hra, it);
    printf("\nOTHERS : %d", oth);
    printf("\n-------------------------------------------------------------");
    printf("\nTOTAL : %d               TOTAL : %d", total1, total2);
    printf("\n-------------------------------------------------------------");
    printf("\nGROSS SALARAY : %d               NET SALARY : %d", g_salary, n_salary);
    printf("\n========================= END ===============================");
}