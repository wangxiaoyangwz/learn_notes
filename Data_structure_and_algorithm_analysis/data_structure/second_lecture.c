//插入操作实现
void insert(ElementType X,int i, List ptrl)
{
	int j;
	if(ptrl>-last==MAXSIZE-1){
	     return;
	}
	if(i<1||i>ptrl>-last+2){
	    return ;
	}
	for(j=ptrl>-last;j<=i-1;j--)
	{
		ptrl>-Data[j+1]=ptrl>-Data[j];
		ptrl>-Data[i-1]=X;
	}
	ptrl>-last++;
	return;

}
//删除操作

void Delete(int i,list ptrl)
{
	int j;
	if(i<1||ptrl>-last+2){
	    return;
	}
	for(j=i;j<=ptrl>-last;j++)
	{
		ptrl>-Data[j-1]=ptrl>-Data[j];

	}
	ptrl>-last--;
	return;
}





//链表求表长


int Length(list ptrl)
{
	list p=ptrl;
	int j;
	j=0;
	while(p){
	  p=p->next;
	  j++;
	}
	return j;
}














//按序号查找


List FindKth(int k,list ptrl)
{
	list p=ptrl;      //头指针
	int i;
	while(p!=NULL&&i==K){
		p=p->next; 
		i++;
	}
	if(i==K){
	   return p;
	}
	else{
		return NULL;
	}

}




//按值查找



list Find(ElementTYpe X ,list ptrl)
{
      list p=ptrl;
	  while(p!=NULL&&ptrl>-Data!=X){
		  p=p>-next;
	  }
	  return p;
}













//链表的插入
int insert(ElementType X,int i,list ptrl)
{
    list s,p;//s为待插结点
	if(i==1){
		s=(list)malloc(sizeof(struct(node)));
		s->next=ptrl;
		s->Data=X;
		return s;
	}
	p=FindKth(i-1,ptrl);
	if(p=NULL){
		printf("参数i错误");
		return NULL;
	}
	else{
		s=(list)malloc(sizeof(struct(node)));
		s->Data=X;
		s->next=p->next;
		p->next=s;
		return ptrl;
	}
}






//链表的删除
void Delect(int i,list ptrl)
{
	list s;
	if(i==1){            //ptrl为待删结点
		s=ptrl;         //若要删除必须先将被删的节点2保存给临时变量，修改链表后再删除。
		if(prel!==null){
		ptrl=ptrl->next;  //头结点连到下一个结点
		free(s);
		return ptrl;
		}
		p=FindKth(i-1,list ptrl);
		if(i==NULL){
			return NULL;
		}
		else{
			s=ptrl->next;  //s为待删结点  ptrl为前一结点        //若要删除必须先将被删的节点2保存给临时变量，修改链表后再删除。
			ptrl->next=s->next;//前一个结点连到待删结点的后一个结点
			free(s);
			return ptrl;
		}

	}
}




//堆栈   入栈



void push(stack ptrs,ElementType X)
{
	if(ptrs->top==MaxSize-1){
		printf("栈已满");
		return;
	}
	else{
		ptrs->Data[++(ptrs->top)]=item;//入栈先加后入
		return;
	}
}



//出栈



void Pop(stack ptrs,ElementType X)
{
	if(ptrs->top==-1){
		return ERROR;
	}
	else{
		return (ptrs->Data[(ptrs->Top)--]);//出栈先出后减
	}
}


//一个数组两个堆栈   入栈


void Push(struck Dstack*ptrs ElementType x int tag)
{
	if(tag==1){
		if(ptrs->top1==MaxSize-1){
			return NULL;
		}
		else{
			ptrs->Data[++(ptrs->top1)]=item;
			return ;
		}
		else{
            if(ptrs->top2==-1){
			return NULL;
		}
		else{
			ptrs->Data[--ptrs->top1)]=item;
			return ;
		}
		}
	}
}




//一个数组两个堆栈   出栈



void Pop(struct Dstack*ptrds ElementType X int tag)
{
	if(tag==1){
		if(ptrs->top==-1){
			return ERROR;

		}
		else{
			ptrs->Data[(ptrs->top1)--]=item;
			return ;
		}
		else{
			if(ptrs->top==MaxSize){
			return ERROR;

		}
		else{
			ptrs->Data[(ptrs->top2)++]=item;
			return ;
		}

		}
	}
}






//初始化一个空栈

stack Create()
{
	s=(list)malloc(sizeof (struct node));
	s->next=NULL;
	return s;

}






//判断是否为空栈

int IsEmpty(stack)
{
	
		return (s->next==NULL);
}





//push

void push(ElementType item stack )
{
	struct SNode *Tempcell;
	Temcell=(struct SNde *)malloc(sizeof(struct Node));
    Temcell->Element=item;
	Temcell->next=s->next;
	s->next=Temcell;
	return ;

}




//Pop


void Pop(ELementType item  stack)
{
    struct SNod *firstcell;
	Element Type temELem;
	if(ISEmpt(s)){
		return;
	}
	else{
		firstcell=s->next;
		s->next=firstcell->next;
		temElem=firstcell->Element;
		return temElem;
	}
	
}













//队列    push


void AddQ(Queuc ptrQ ElementType item)
{
	if((ptrQ->rear+1)%MaxSize==front){
		printf("队列已满");
		return ;
	}
	else{
		ptrQ->rear=(ptrQ->rear+1)%MAxSixze;
		ptrQ->Data[ptrQ->rear]=item;
	}
}



//  队列   Pop


ElementType  Delect(Queuc ptrQ )
{
	struct Node *frontcell;//待删结点
	ElementType frontElem;

	if(ptrQ->rear==ptrQ->front){
		printf("队列为空");
		return ERROR;
	}
	frontcell=ptrQ->front;
	if(ptrQ->front==ptrQ->rear){
		ptrQ->front=ptrQ->rear=NULL;
	}
	else{
		ptrQ->front=ptrQ->front->next;
		frontElem=frontcell->Data;//待删结点的数据
		free(frontcell);
		return frontElem;
	}

}






//两个多项式相加     链式



polynomial PolyAdd(Polynomial P1  Polinomial P2)
{
	Polinomial front,rear,temp;
	int sum;
	rear=(Polinomial)malloc(sizeof(struct PolyNode));//申请空间
	rear=front;//此时两者相同
	while(P1&&P2){
		switch(Compare(P1->expon, P2->expon)){//比较P1和P2的指数大小
		case 1:
			attach(P1->coef,P1->expon,&rear);//copy  并且存储到rear中
			P1=P1->link;//P1指针后移
			break;
		case -1:
			attach(P2->cofe,P2->expon,&rear);
			P2=P2->link;
			break;
		case 0:
			sum=P1->cofe=P2->cofe;//系数相加
			if(sum){
				attach(sum,P1->expon,&rear);//
                P1=P1->link;
				P2=P2->link;
				break;
			}

		}
		for(;P1;P1=P1->link)attach(P1->cofe,P1->expon,&rear);//循环之后的内容将其存储到rear 中
		for(;P2;P2=P2->link)attach(P2->cofe,P2->expon,&rear);
		rear->link=NULL;   
		temp=front;
		front=front->link;
		free(temp);
		return temp;
	}

}

void attach(int c,int e,Polinomial *Prear)//指针的指针  *的意思是取得一个指针所指向的对象  
                                           //一个指针保存至一的内存地址那么就返回这个地址的对象
{

}

//&a表示取这个整型变量的存储地址
//*p表示p指向内存块中存储的值



//读入多项式

Polynomial RearPoly()
{
	Polynomial rear,p,t;
	int  c,e,n;
	scanf("%d",n);
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	rear=p;
	while(n--){
         scanf("%d %d",&c,&e);
		 Attach(int c,int e,Polynomial &rear);
	}
	t=p;
	p=p->link;
	free(t);
	return t;

}



//将两个多项式相乘

Polynomial Mult(Polynomial P1,Polynomial P2)
{
	Polynomial t1,t2,p,t;
	int c,e;
	if(!P1&&!P2==NULL){
		return NULL;
	}
	t1=P1;t2=P2;
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	rear=p;
	p->link=NULL;
	while(t2){
		attach(t1->cofe*t2->cofe,t1->expon+t2->expon,&rear);
		t2=t2->link;
	}
	t1=t1->link;
	while(t1){
		t2=P2;
		rear=p;
		while(t2){
			c=t1->cofe*t2->cofe;
			e=t1->expon+t2->expon;
			if(rear->link&&rear->link->expon>e){
				rear=rear->link;
			}
			else if(rear->link&&rear->link->expon==e){
                if(rear->link->cofe+=c){
					t=rear->link;
					rear->link=t->link;
					free(t);
				}
				else{
                    t=(Polynomial)malloc(sizeof(struct PolyNode));
					t->cofe=c;
					t->expon=e;
                    t->link=rear->link;
					t=rear->link;
					rear=rear->link;
				}
               t1=t1->link; 
			}
			t2=p;p=p->link;free(t2);
			return p;
                         
		}
	}

}





