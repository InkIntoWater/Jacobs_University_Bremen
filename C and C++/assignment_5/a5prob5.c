/* 
CH-230-A
a5_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/
#include<stdio.h>
//declaring a function to calculate the scalar product.
double scal_prod(double v[], double w[], int n){
    double product = 0;
    for(int idx = 0; idx < n; idx++){
        product = v[idx] * w[idx] + product;
    }
    return product;
}

//declaring a function to find the smallest value in v and its position.
void smallest_v(double v[], int n){    
    float smallest;
    smallest = v[0];
    int i; 
    int pos_sv = 0; 
    for( i = 0; i < n; i++)
    {
        if (smallest > v[i])
        {
            smallest = v[i]; 
            pos_sv = i; 
        }
    }
    printf("The smallest = %f\n",smallest);
    printf("Position of smallest = %d\n",pos_sv); 
}

//declaring a function to find the largest value in v and its position.
void largest_v(double v[], int n){    
    float largest;
    largest = v[0];
    int i; 
    int pos_lv = 0; 
    for( i = 1; i < n; i++)
    {
        if (largest < v[i])
        {
            largest = v[i]; 
            pos_lv = i; 
        }
    }
    printf("The largest = %f\n",largest);
    printf("Position of largest = %d\n",pos_lv); 
}

//declaring a function to find the smallest value in w and its position.
void smallest_w(double w[], int n){    
    float smallest;
    smallest = w[0];
    int i; 
    int pos_sw = 0; 
    for( i = 1; i < n; i++)
    {
        if (smallest > w[i])
        {
            smallest = w[i]; 
            pos_sw = i; 
        }
    }
    printf("The smallest = %f\n",smallest);
    printf("Position of smallest = %d\n",pos_sw); 
}

//declaring a function to find the largest value in w and its position.
void largest_w(double w[], int n){    
    float largest;
    largest = w[0];
    int i; 
    int pos_lw = 0; 
    for( i = 0; i < n; i++)
    {
        if (largest < w[i])
        {
            largest = w[i]; 
            pos_lw = i; 
        }
    }
    printf("The largest = %f\n",largest);
    printf("Position of largest = %d\n",pos_lw); 
}

int main(){
    int n;
    scanf("%d", &n);
    double v[n], w[n];
    for(int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }

    //calling the functions that were declared above.
    printf("Scalar product=%lf\n", scal_prod(v, w, n));
    smallest_v(v, n);
    largest_v(v, n);
    smallest_w(w, n);
    largest_w(w, n);
    return 0;
}