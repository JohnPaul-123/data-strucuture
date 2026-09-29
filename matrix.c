#include<stdio.h>
int main()
{
        int a[10][10],b[10][10],c[20][20],r1,c1,r2,c2;
	int k,i,j,ch;
	printf("Enter the size of 1st matrix row:");
	scanf("%d",&r1);
	printf("Enter the size of 1st matrix colomn:");
	scanf("%d",&c1);
	printf("Enter the Matrix Element of A: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the size of 2nd matrix row:");
	scanf("%d",&r2);
	printf("Enter the size of 2nd matrix colomn:");
	scanf("%d",&c2);
	printf("Enter elements of Matrix B:\n");
 	for(i = 0; i < r2; i++)
 	{
        	for(j = 0; j < c2; j++)
 		{
            		scanf("%d", &b[i][j]);	
            	}
        }
        do{
		printf("\n_________MATRIX MENU___________\n");
		printf("\n1.  Addition.....!");
		printf("\n2.  substraction.....!");
		printf("\n3.  Multiplication.....!");
		printf("\n4.  Transpose of A...!");
		printf("\n5.  Transpose of B...!");
		printf("6. Exit\n");
			
		printf("Enter your Choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				if(r1 == r2 && c1 == c2)
                		{
					printf("Addition of Matrix A and B is : \n");
           				for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
							printf("%d\t",c[i][j]);
						}
						printf("\n");
					}
				}
				else
                		{
                    			printf("Addition not possible.\n");
                 
                		}	
				break;
			case 2:
				if(r1 == r2 && c1 == c2)
                		{
					printf("Substraction of Matrix A and B is : \n");
           				for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{	
							c[i][j]=a[i][j]-b[i][j];
							printf("%d\t",c[i][j]);
						}
						printf("\n");
					}
				}
			  	else
                		{		
                    			printf("Subtraction not possible.\n");
                    			printf("Both matrices must have the same size.\n");
                		}
				break;	
			case 3:
				if(r2==c1)
				{
					printf("Multiplication of Matrix A and B is : \n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c2;j++)
						{
							c[i][j]=0;
							for(k = 0; k < c1; k++)
                            				{
                                				c[i][j] += a[i][k] * b[k][j];
                            				}
                            				printf("%d\t", c[i][j]);
                            			}
                            			printf("\n");
                            		}	
							
				}
                		else
                		{
                    			printf("Multiplication not possible.\n");
                    		}
               			break;
               		case 4:
               			printf("\nTranspose of Matrix A:\n");
				for(j = 0; j < c1; j++)
                		{
                    			for(i = 0; i < r1; i++)
                    			{
                        			printf("%d\t", a[i][j]);
                        		}	
                    			printf("\n");
                		}

		                break;
		       case 5:
                		printf("\nTranspose of Matrix B:\n");

		                for(j = 0; j < c2; j++)
                		{
                		    for(i = 0; i < r2; i++)
                		    {
                		        printf("%d\t", b[i][j]);
					}		
                    		printf("\n");
                		}
                		break;
                	case 6:
   				printf("\n6. Exit.....!");
   				break;
               		default:
               			printf("Invalid choice!\n");
               		}
             
               	}while(ch!=6);
               	
               	return 0;
}
