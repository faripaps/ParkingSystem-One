#include <stdio.h>
#include <stdlib.h>

void menu();
void viewmd();
void createmd();
void editmd();
void deletemd();
void searchmd();
void close();
int main()
{
    menu();
    return 0;
}
void menu(){
    printf("\n\n\t +++++++++++++++++++++++++++++++++++++++++++++++++++\t \n");
    printf("\t 1: View Status\n");
    printf("\t 2: Create \n");
    printf("\t 3: Edit \n");
    printf("\t 4: Delete \n");
    printf("\t 5: Search \n");
    printf("\t 6: Close  \n");
    printf("\t +++++++++++++++++++++++++++++++++++++++++++++++++++\t\n\n");
    printf("Choose your option: \n");
    int x;
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        viewmd();
        break;
    case 2:
        createmd();
        break;
    case 3:
        editmd();
        break;
    case 4:
        deletemd();
        break;
    case 5:
        searchmd();
        break;
    case 6:
        close();
        break;
    default:
        printf("invalid option! \n");
    }
}
void viewmd(){
    printf("View Vehicle Status \n");
        FILE * fp;
        char c;
        printf("Data Entered:\n");
        //reading
        fp = fopen("Parked.txt", "r");
        while ((c = getc(fp)) != EOF) {
            printf("%c", c);
        }
        fclose(fp);
}
void createmd(){
    printf("Create Parking \n");
        FILE *fp;
        fp = fopen("Parked.txt", "w");
        fprintf(fp, "\n Parking details \n");
        printf("\n Succcess \n");
        fclose(fp);
}
void editmd(){
        printf("Edit Ticket \n");
        FILE *fp;
        fp = fopen("Parked.txt", "a");
        fprintf(fp, "\n Parking details \n");
        fprintf(fp,"\n REGNO: AAB8744 \n");
        fprintf(fp,"\n TICKETNO: A09445 \n");
        fprintf(fp,"\n TIME IN: 1239hrs \n");
        fprintf(fp,"\n BAY NO: 10\n");
        printf("\n Succcess \n");
        fclose(fp);
}
void deletemd(){
    printf("Delete Ticket \n");
}
void searchmd(){
    printf("Search \n");
}
void close(){
    printf("Do you want to close this program? \n");
    int x;
    printf("1 = yes & 0 = no! \n");
    scanf("%d",&x);
    switch(x)
    {
    case 0:
        menu();
        break;
    case 1:
        exit(1);
        break;
    default:
        printf("invalid option! \n");
    }
}
