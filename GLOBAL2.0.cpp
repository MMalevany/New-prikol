#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<time.h>
main() {
	const int maxSize=50;
	const int maxSizeRow=10,maxSizeCol=15;
	int x1,pos,n,size,max,min,i,j,x,fl=0,x2,fg=0,x3,x4,x5,x6,sum,schet=0,id,save,k=0,p,y,gg=0,m,t,gh,q=0;
	float res;
	int a[maxSizeRow][maxSizeCol],sizeRow,sizeCol;
	int g[maxSizeRow][maxSizeCol],c[maxSize];
	srand(time(0));
	fflush(stdin);
	setlocale(LC_ALL,"Rus");
	do      
	{
		printf("1.���������� �������\n");
		printf("2.�����\n");
		printf("3.�����\n");
		printf("4.������� ��������������\n");
		printf("5.������������ ��������\n");
		printf("6.����������� ��������\n");
		printf("7.����������\n");
		printf("8.��������\n");
		printf("9.�����\n");
		scanf("%d",&x);
		switch(x)
		{
		case 1: 
			printf("1.���� � ����������\n");
			printf("2.��������� ��������\n");
			scanf("%d",&x1);
			k=1;
			switch(x1)
			{
				case 1:	
				printf("������� ���������� �����: \n");
				scanf("%d",&sizeRow);
				while(sizeRow<1 || sizeRow>maxSizeRow)
				{
					printf("������������ ����\n");
					scanf("%d",&sizeRow);
				}
				printf("������� ���������� ��������: \n"); 	
				scanf("%d",&sizeCol);
				while(sizeCol<1 || sizeCol>maxSizeCol)
				{
					printf("������������ ����\n");
					scanf("%d",&sizeCol);
				}
				printf("������� �������: \n");
				for(i=0; i<sizeRow; i++)
				{
					for(j=0; j<sizeCol; j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				break;
				case 2:
				int g,b;
				printf("������� �������� �������:\n");
				printf("��������� ��������: ");
				scanf("%d",&g);
				printf("�������� ��������: ");
				scanf("%d",&b);
				while(g>b)
				{
					printf("������������ ����!\n");
					printf("���������� �����:\n");
					scanf("%d",&g);
					scanf("%d",&b);
				}
				printf("������� ���������� �����: \n");
				scanf("%d",&sizeRow);
				while(sizeRow<1 || sizeRow>maxSizeRow)
				{
					printf("������������ ����\n");
					scanf("%d",&sizeRow);
				}
				printf("������� ���������� ��������: \n");
				scanf("%d",&sizeCol);
				while(sizeCol<1 || sizeCol>maxSizeCol)
				{
					printf("������������ ����\n");
					scanf("%d",&sizeCol);
				}
				for(i=0; i<sizeRow; i++)
				{
					for(j=0; j<sizeCol; j++)
					{
						a[i][j]=rand()%(b-g+1)+g;
					}
				}																								
				break;
				default:
					printf("�� ������ ����\n");
				break;
			}
		break;
		case 2: 
			if(k==1)
			{
				printf("������� : \n");
				for(i=0; i<sizeRow; i++)
				{
					for(j=0; j<sizeCol; j++)
					{						
						printf("%4d",a[i][j]);						
					}
					printf("\n");
				}
			}
			else 
			{
				printf("������� ����� , ������� ��������� �\n");
			}
		break;
		case 3:
			if(k==1)
			{
				printf("1.���� �������\n");
				printf("2.��������� ������\n");
				printf("3.���������� �������\n");
				scanf("%d",&x3);
					switch(x3)
					{
						case 1:
							sum=0;
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									sum+=a[i][j];
								}
							}
							printf("����� ��������� �������: %d\n",sum);
						break;
						case 2:
							int str;
							sum=0;
							printf("������� ������: \n");
							scanf("%d",&str);
							while(str<1 || str>sizeRow)
							{
								printf("������������ ����\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								sum+=a[str-1][j];
							}
							printf("����� %d ������: %d\n",str,sum);
						break;
						case 3:
								int col;
								sum=0;
								printf("������� ������� : \n");
								scanf("%d",&col);
								while(col<1 || col>sizeCol)
								{
									printf("������������ ����\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									sum+=a[i][col-1];
								}
								printf("����� %d �������: %d\n",col,sum);
						break;
						default:
								printf("�� ������ ����\n");
						break;	
					}
			}
			else
			{
				printf("������� ����� , ������� ��������� �\n");
			}
		break;
		case 4:
			if(k==1)
			{
				printf("1.���� �������\n");
				printf("2.��������� ������\n");
				printf("3.���������� �������\n");
				scanf("%d",&x4);
					switch(x4)
					{
						case 1:
							res=0;
							sum=0;
							schet=0;
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									sum+=a[i][j];
									schet++;
								}
							}
							res=float(sum)/schet;
							printf("������� �������������� ��������� �������: %.2f\n",res);
						break;
						case 2:
							int str;
							sum=0;
							res=0;
							schet=0;
							printf("������� ������: \n");
							scanf("%d",&str);
							while(str<1 || str>sizeRow)
							{
								printf("������������ ����\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								sum+=a[str-1][j];
								schet++;
							}
							res=float(sum)/schet;
							printf("������� �������������� %d ������: %.2f\n",str,res);
						break;
						case 3:
								int col;
								sum=0;
								res=0;
								schet=0;
								printf("������� ������� : \n");
								scanf("%d",&col);
								while(col<1 || col>sizeCol)
								{
									printf("������������ ����\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									sum+=a[i][col-1];
									schet++;
								}
								res=float(sum)/schet;
								printf("������� �������������� %d �������: %.2f\n",col,res);
						break;
						default:
								printf("�� ������ ����\n");
						break;	
					}
			}
			else
			{
				printf("������� ����� , ������� ��������� �\n");
			}
		break;	
		case 5:
			if(k==1)
			{
				printf("1.���� �������\n");
				printf("2.��������� ������\n");
				printf("3.���������� �������\n");
				scanf("%d",&x5);
					switch(x5)
					{
						case 1:
							max=a[0][0];
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									if(a[i][j]>max)
									{
										max=a[i][j];
									}
								}
							}
							printf("������������ ������� �������: %d\n",max);
						break;
						case 2:
							int str;
							max=a[0][0];
							printf("������� ������: \n");
							scanf("%d",&str);
							while(str<1 || str>sizeRow)
							{
								printf("������������ ����\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								if(a[str-1][j]>max)
								{
									max=a[str-1][j];
								}
							}
							printf("������������ ������� %d ������: %d\n",str,max);
						break;
						case 3:
								int col;
								max=a[0][0];
								printf("������� ������� : \n");
								scanf("%d",&col);
								while(col<1 || col>sizeCol)
								{
									printf("������������ ����\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									if(a[i][col-1]>max)
									{
										max=a[i][col-1];	
									}									
								}
								printf("������������ ������� %d �������: %d\n",col,max);
						break;
						default:
								printf("�� ������ ����\n");
						break;	
					}
			}
			else
			{
				printf("������� ����� , ������� ��������� �\n");
			}
		break;
		case 6:
			if(k==1)
			{
				printf("1.���� �������\n");
				printf("2.��������� ������\n");
				printf("3.���������� �������\n");
				scanf("%d",&x5);
					switch(x5)
					{
						case 1:
							min=a[0][0];
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									if(a[i][j]<min)
									{
										min=a[i][j];
									}
								}
							}
							printf("����������� ������� �������: %d\n",min);
						break;
						case 2:
							int str;
							printf("������� ������: \n");
							scanf("%d",&str);
							min=a[str-1][0];
							while(str<1 || str>sizeRow)
							{
								printf("������������ ����\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								if(a[str-1][j]<min)
								{
									min=a[str-1][j];
								}
							}
							printf("����������� ������� %d ������: %d\n",str,min);
						break;
						case 3:
								int col;
								printf("������� ������� : \n");
								scanf("%d",&col);
								min=a[0][col-1];
								while(col<1 || col>sizeCol)
								{
									printf("������������ ����\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									if(a[i][col-1]<min)
									{
										min=a[i][col-1];	
									}									
								}
								printf("����������� ������� %d �������: %d\n",col,min);
						break;
						default:
								printf("�� ������ ����\n");
						break;	
					}
			}
			else
			{
				printf("������� ����� , ������� ��������� �\n");
			} 
		break;
		case 7:
			if(k==1)
			{
				printf("1.�����\n");
				printf("2.��������\n");
				printf("3.���� �������\n");
				scanf("%d",&x6);
					switch(x6)
					{
						case 1:
							printf("1.�� �����������\n");
							printf("2.�� ��������\n");
							scanf("%d",&x1);
							switch(x1)
							{
								case 1:
									id=0;
									for(i=0; i<sizeRow; i++)
									{
										for(p=0; p<sizeCol-1; p++)
										{
											for(j=0; j<sizeCol-1; j++)
											{
												if(a[id][j]>a[id][j+1]) 
												{
													save=a[id][j];
													a[id][j]=a[id][j+1];
													a[id][j+1]=save;
												}	
											}	
										}
										id++;
									}
								break;
								case 2:
									id=0;
									for(i=0; i<sizeRow; i++)
									{
										for(p=0; p<sizeCol-1; p++)
										{
											for(j=0; j<sizeCol-1; j++)
											{
												if(a[id][j]<a[id][j+1]) 
												{
													save=a[id][j];
													a[id][j]=a[id][j+1];
													a[id][j+1]=save;
												}	
											}	
										}
										id++;
									}
								break;
								default:
									printf("�� ������ ����\n");
								break;	
							}
						break;
						case 2:
							printf("1.�� �����������\n");
							printf("2.�� ��������\n");
							scanf("%d",&x1);
							switch(x1)
							{
								case 1:
									id=0;
									for(j=0; j<sizeCol; j++)
									{
										for(p=0; p<sizeRow-1; p++)
										{
											for(i=0; i<sizeRow-1; i++)
											{
												if(a[i][id]>a[i+1][id]) 
												{
													save=a[i][id];
													a[i][id]=a[i+1][id];
													a[i+1][id]=save;
												}	
											}	
										}
										id++;
									}
								break;
								case 2:
									id=0;
									save=0;
									k=0;
									for(j=0; j<sizeCol; j++)
									{
										for(p=0; p<sizeRow-1; p++)
										{
											for(i=0; i<sizeRow-1; i++)
											{
												if(a[i][id]<a[i+1][id]) 
												{
													save=a[i][id];
													a[i][id]=a[i+1][id];
													a[i+1][id]=save;
												}	
											}	
										}
										id++;
									}
								break;
								default:
									printf("�� ������ ����\n");
								break;	
							}
						break;
						case 3:
							printf("1.�� �����������\n");
							printf("2.�� ��������\n");
							scanf("%d",&x1);
							switch(x1)
							{
								case 1:
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												c[q]=a[i][j];
												q++;
											}
										}
										///////////////////////////////////////////////����������� ������� C 	
										for(j=0; j<q-1; j++)
										{
											for(i=0; i<q-1; i++)
											{
												if(c[i]>c[i+1])
												{
													gh=c[i];
													c[i]=c[i+1];
													c[i+1]=gh;	
												}
											}
										}
										/////////////////////////////////////// ������� � 2-������ ����� 
										q=0;
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												g[i][j]=c[q];
												q++;	
											}
										}
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												a[i][j]=g[i][j];	
											}
										}
								break;
								case 2:
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												c[q]=a[i][j];
												q++;
											}
										}
										///////////////////////////////////////////////����������� ������� C 	
										for(j=0; j<q-1; j++)
										{
											for(i=0; i<q-1; i++)
											{
												if(c[i]<c[i+1])
												{
													gh=c[i];
													c[i]=c[i+1];
													c[i+1]=gh;	
												}
											}
										}
										/////////////////////////////////////// ������� � 2-������ ����� 
										q=0;
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												g[i][j]=c[q];
												q++;	
											}
										}
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												a[i][j]=g[i][j];	
											}
										}	
								break;
								default:
									printf("�� ������ ����\n");
								break;	
							}
						break;
						default:
								printf("�� ������ ����\n");
						break;	
					}
			}
			else
			{
				printf("������� ����� , ������� ��������� �\n");
			} 
		break;
		case 8:
			if(k==1)
			{
				printf("1.�� ������ ������\n");
				printf("2.�� ������ �������\n");
				scanf("%d",&x4);
					switch(x4)
					{
						case 1:
								printf("������� ������ ������� ����� �������: \n");
								scanf("%d",&y);
								y--;
								gg=0;
								for(i=0; i<sizeRow; i++)
								{
									if(i==y)
									{
										gg=1;	
									}
										for(j=0; j<sizeCol; j++)
										{
											if(gg==1)
											{
												a[i][j]=a[i+1][j];
											}	
										}	
								}
						sizeRow--;
						break;
						case 2:
								printf("������� ������� , ������� ����� �������: \n");
								scanf("%d",&y);
								for(j=0; j<sizeCol; j++)	
								{		
									if(j==(y-1))
									{
										for(m=0; m<sizeRow; m++)
										{
											for(t=y-1; t<sizeCol; t++)	
											{
												a[m][t]=a[m][t+1];
											}
										}
									}		
								}		
								sizeCol--;
						break;
						default:
							printf("�� ������ ����\n");
						break;
							
					}
			}
			else
			{
				printf("������� ����� , ������� ��������� �\n");
			}
		break;
		case 9:
			fl=1;
		break;
		default:
			printf("�� ������ ����\n");
		break;	
		}
	printf("������� ����� �������\n");
	getch();
	system("cls");	
	}while(fl==0);
	printf("�������� ��� :)");
	return 0;
}


