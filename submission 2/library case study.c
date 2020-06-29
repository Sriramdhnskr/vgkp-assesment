#include <stdio.h>
void addBook();
int bookid(int);
int s=-1;
int main();
struct book{
    int id;
    char title[50];
    char author[30];
    char publisher[200];
    float price;
    int page;
    int year;
}b[30];

void addBook(){
    int n;
    printf("\nEnter a Unique Book ID: ");
	scanf("%d",&n);
	if(bookid(n)==0){
	    s++;
	    b[s].id=n;
    	printf("\nEnter the Book details:");
    	printf("\nTitle: ");
    	scanf("%s",b[s].title);
    	printf("\nAuthor: ");
    	scanf("%s",b[s].author);
    	printf("\nPublisher: ");
    	scanf("%s",b[s].publisher);
    	printf("\nPrice: ");
    	scanf("%f",&b[s].price);
    	printf("\nPages: ");
    	scanf("%d",&b[s].page);
    	printf("\nYear: ");
    	scanf("%d",&b[s].year);
	}
	else
	    addBook();
	printf("Book Added Successfully\n");
	main();
}

int bookid(int n){
    for(int i=0;i<=s;i++)
        if(n==b[i].id)
            return 1;
    return 0;
}
int find_book()
{
    scanf("%d",&keyid);
    for(int i=0;i<=s;i++)
    {
    if(b[i]==keyid)
    {
        printf("Book found at index: %d",i+1);
    }
    }
    return 0;
}
int min_max()
{
    int min=1,max=-1;
    for(int i=0;i<=s;i++)
    {
    if(b[i].price>max)
    {
        printf("maximum price : %d",max);
    }
    if(b[i].price<max)
    {
        printf("minimum price : %d",min);
    }
    }
    return 0;
}
void display(){
    int o,c=0,a;
    char ch[20];
    printf("\n 1.Display all records\n 2.Display by unique id\n 3.Display by title matching\n 4.Menu Your Choice:");
    scanf("%d",&o);
    switch(o){
    case 1: for(int i=0;i<=s;i++){
            printf("\nID        TITLE        AUTHOR  PUBLISHER  PRICE PAGE YEAR");
            printf("\n%d  %s  %s  %s  %f  %d %d",b[s].id,b[i].title,b[s].author,b[s].publisher,b[s].price,b[s].page,b[s].year);
            }
            break;
    case 2: printf("\nEnter unique book id: ");
            scanf("%d",&a);
            for(int i=0;i<=s;i++){
                if(a==b[i].id){
                    c=1;
                    printf("\nID        TITLE        AUTHOR  PUBLISHER  PRICE PAGE YEAR");
                    printf("\n%d  %s  %s  %s  %f  %d %d",b[s].id,b[i].title,b[s].author,b[s].publisher,b[s].price,b[s].page,b[s].year);
                }
            }
            if(c!=1)
            printf("\nNo Books found with given ID!!");
            break;
    case 3: printf("\nEnter Book Title: ");
            scanf("%s",ch);
            for(int i=0;i<=s;i++){
                if(strcmp(ch,b[i].title)==0){
                    c=1;
                    printf("\nAUTHOR - PUBLISHER - PRICE - PAGE - YEAR");
                    printf("\n%d  %s  %s  %s  %f  %d %d",b[s].id,b[i].title,b[s].author,b[s].publisher,b[s].price,b[s].page,b[s].year);
                }
            }
            if(c!=1)
            printf("\nNo Books found with given title!!");
            break;
    default: printf("invalid");
             display();
    }
    main();
}
int main()
{
    int a;
    printf("\nENTER YOUR CHOICE:\n 1.Add book\n 2.Display Books\n 3.Book Price\n 4.Find a book.\n 5.min_max of books");
    scanf("%d",&a);
    switch(a){
        case 1: addBook();
        break;
        case 2: display();
        break;
        case 3: find_book();
        break;
        case 4: min_max();
        break;
        default:
        a=1;
    }
    return 0;
}
