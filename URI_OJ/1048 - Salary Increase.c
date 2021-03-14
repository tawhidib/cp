int main(){
    double salary, increasePercentual, persentize, totalSalary;
    scanf("%lf", &salary);
    if( salary > 0 && salary <= 400){
        persentize = 15;
        increasePercentual = ((salary * 15)/100);
    }
    else if(salary > 400 && salary <= 800){
        persentize = 12;
        increasePercentual = ((salary * 12)/100);
    }
    else if(salary > 800 && salary <= 1200){
        persentize = 10;
        increasePercentual = ((salary * 10)/100);
    }
    else if(salary > 1200 && salary <= 2000){
        persentize = 7;
        increasePercentual = ((salary * 7)/100);
    }
    else{
        persentize = 4;
        increasePercentual = ((salary * 4)/100);
    }
    totalSalary = (salary + increasePercentual);
    printf("Novo salario: %.2lf\n", totalSalary);
    printf("Reajuste ganho: %.2lf\n", increasePercentual);
    printf("Em percentual: %.0lf %%\n", persentize);
    return 0;
}
