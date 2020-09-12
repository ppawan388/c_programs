# include <stdbool.h>
# include <stdio.h>
#define N 15

void __Enter(int [], int);
int __Add(int [], int, int);
void __Print(int [], int);
int __Search(int [], int, int);
void __Remove(int [],int ,int);
void __Sort(int [], int);

int main(){
	int a[N], i;
	int choice, no, count;
	bool faith = false;
	
	printf("Enter the 5 numbers in the Array = ");
	__Enter(a,5);
	count = 5;
	printf("\n--------------which operation you want to perform--------------\n");
	
	while(!faith){
		printf("\n1 Add element\n2 Search the element\n3 Remove element from array\n4 Sort the Array\n5 Print all the element in the array\n6 Exit");
		printf("\n----------------------------------------------------------");
		printf("\nEnter your choice = ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(count < 15){
					printf("\nEnter the no = ");
					scanf("%d",&no);
					__Add(a,no,count);
				}else{
					printf("\nThe limit has been reached");
				}
				break;
		
			case 2:
				printf("\nEnter the no for search");
				scanf("%d",&no);
				i = __Search(a,no,count);
				if(i == -1){
					printf("\nThe entered no is not found in array");
				}else{
					printf("\nThe entered no %d found at location %d",no,i);
				}
				break;
			
			case 3:
				printf("\nEnter the no that you want to remove");
				scanf("%d",&no);
				__Remove(a,no,count);
				break;
			
			case 4:
				printf("The sorted array is = ");
				__Sort(a,count);
				break;
			
			case 5:
				__Print(a,count);
				break;
		
			case 6:
				printf("\nexitting...");
				faith = true;
				break;
			
			default:
				printf("Enter Valid Choice");
				break;
		}
	}
	
	return 0;
}

void __Enter(int a[], int n){
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

}

int __Add(int a[], int n, int count){
	int i ;
	i = __Search(a,n,count);
	if(i == -1){
		a[count] = n;
		count++;
		__Print(a,count);
		
	}else{
		printf("This no is already exist");
	}
	return a;
}

void __Print(int a[],int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int __Search(int a[], int n, int lmt){
	int i, j;
	
	for(i = 0; i < lmt; i++){
		if(a[i] == n){
			return i+1;
		}
	}
	return -1;
}

void __Remove(int a[], int no, int lmt){
	int i;
	
	for(i = 0; i < lmt; i++){
		if(a[i] == no){
			while(i<lmt){
				a[i] = a[i+1];
				i++;
			}
			lmt--;
		}
	}
	__Print(a,lmt);
}

void __Sort(int a[], int n){
	int i,j,temp;
	
	for(i = 1; i < n; i++){
		for(j = 0; j < n - 1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
}

