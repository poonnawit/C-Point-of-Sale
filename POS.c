//POINT OF SALE
//VERSION 1.00
//As a EGCO 111 project by :
//Benjarat  Likitroekvit    5913041
//Parawee   Poolpakdee      5913044
//Poonnawit Sukhowattanakit 5913045
//Pansang   Kaewarsa        5913051
//Students at Engineering Faculty, Mahidol University.
//Year 2016

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>

void num_segment(float);
int key_input(void);
void intro(void);
int start(void);
int sale(void);
int acc(void);
void money(float,char);
void stock(void);
float pro_reader(char procode[],float price,int qty);
void append(char subject[], const char insert[], int pos);

float cash = 0.00;

int main(void)
{
    int i,sa,ac;
    intro();
    do
    {
        i = start();
        switch(i)
        {
        case 1:
            do
            {
                sa = sale();
            }
            while(sa == 2);
            break;
        case 2:
            do
            {
                ac = acc();
                if(ac == 1)
                {
                    money(0.00,'i');
                }
                else if(ac == 2)
                {
                    system("cls");
                    stock();
                    getch();
                }
            }
            while(ac != 3);
            break;
        }
    }
    while(i != 3);
    return EXIT_SUCCESS;
}

void num_segment(float input)
{
    int line,i,j,u[7];
    input = input + 0.005;
    i = input / 0.01;
    u[0] = (i / 1000000) % 10;
    u[1] = (i / 100000) % 10;
    u[2] = (i / 10000) % 10;
    u[3] = (i / 1000) % 10;
    u[4] = (i / 100) % 10;
    u[5] = (i / 10) % 10;
    u[6] = i % 10;
    for(line=1; line<=7; line++)
    {
        j = 0;
        printf("%21s","");
        for(i=0; i<7; i++)
        {
            switch(u[i])
            {
            case 0:
                if(i > 3 || j == 1)
                    switch(line)
                    {
                    case 1:
                        printf(" \3\3\3\3 ");
                        break;
                    case 2:
                        printf("\3    \3");
                        break;
                    case 3:
                        printf("\3    \3");
                        break;
                    case 4:
                        printf("\3    \3");
                        break;
                    case 5:
                        printf("\3    \3");
                        break;
                    case 6:
                        printf("\3    \3");
                        break;
                    case 7:
                        printf(" \3\3\3\3 ");
                        break;
                    }
                else if(j == 0)
                    switch(line)
                    {
                    case 1:
                        printf("      ");
                        break;
                    case 2:
                        printf("      ");
                        break;
                    case 3:
                        printf("      ");
                        break;
                    case 4:
                        printf("      ");
                        break;
                    case 5:
                        printf("      ");
                        break;
                    case 6:
                        printf("      ");
                        break;
                    case 7:
                        printf("      ");
                        break;
                    }
                break;
            case 1:
                j = 1;
                switch(line)
                {
                case 1:
                    printf("    \3 ");
                    break;
                case 2:
                    printf("   \3\3 ");
                    break;
                case 3:
                    printf("    \3 ");
                    break;
                case 4:
                    printf("    \3 ");
                    break;
                case 5:
                    printf("    \3 ");
                    break;
                case 6:
                    printf("    \3 ");
                    break;
                case 7:
                    printf("    \3 ");
                    break;
                }
                break;
            case 2:
                j = 1;
                switch(line)
                {
                case 1:
                    printf(" \3\3\3\3 ");
                    break;
                case 2:
                    printf("     \3");
                    break;
                case 3:
                    printf("     \3");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("\3     ");
                    break;
                case 6:
                    printf("\3     ");
                    break;
                case 7:
                    printf(" \3\3\3\3 ");
                    break;
                }
                break;
            case 3:
                j = 1;
                switch(line)
                {
                case 1:
                    printf(" \3\3\3\3 ");
                    break;
                case 2:
                    printf("     \3");
                    break;
                case 3:
                    printf("     \3");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("     \3");
                    break;
                case 6:
                    printf("     \3");
                    break;
                case 7:
                    printf(" \3\3\3\3 ");
                    break;
                }
                break;
            case 4:
                j = 1;
                switch(line)
                {
                case 1:
                    printf("\3    \3");
                    break;
                case 2:
                    printf("\3    \3");
                    break;
                case 3:
                    printf("\3    \3");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("     \3");
                    break;
                case 6:
                    printf("     \3");
                    break;
                case 7:
                    printf("     \3");
                    break;
                }
                break;
            case 5:
                j = 1;
                switch(line)
                {
                case 1:
                    printf(" \3\3\3\3 ");
                    break;
                case 2:
                    printf("\3     ");
                    break;
                case 3:
                    printf("\3     ");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("     \3");
                    break;
                case 6:
                    printf("     \3");
                    break;
                case 7:
                    printf(" \3\3\3\3 ");
                    break;
                }
                break;
            case 6:
                j = 1;
                switch(line)
                {
                case 1:
                    printf(" \3\3\3\3 ");
                    break;
                case 2:
                    printf("\3     ");
                    break;
                case 3:
                    printf("\3     ");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("\3    \3");
                    break;
                case 6:
                    printf("\3    \3");
                    break;
                case 7:
                    printf(" \3\3\3\3 ");
                    break;
                }
                break;
            case 7:
                j = 1;
                switch(line)
                {
                case 1:
                    printf("\3\3\3\3\3 ");
                    break;
                case 2:
                    printf("     \3");
                    break;
                case 3:
                    printf("     \3");
                    break;
                case 4:
                    printf("     \3");
                    break;
                case 5:
                    printf("     \3");
                    break;
                case 6:
                    printf("     \3");
                    break;
                case 7:
                    printf("     \3");
                    break;
                }
                break;
            case 8:
                j = 1;
                switch(line)
                {
                case 1:
                    printf(" \3\3\3\3 ");
                    break;
                case 2:
                    printf("\3    \3");
                    break;
                case 3:
                    printf("\3    \3");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("\3    \3");
                    break;
                case 6:
                    printf("\3    \3");
                    break;
                case 7:
                    printf(" \3\3\3\3 ");
                    break;
                }
                break;
            case 9:
                j = 1;
                switch(line)
                {
                case 1:
                    printf(" \3\3\3\3 ");
                    break;
                case 2:
                    printf("\3    \3");
                    break;
                case 3:
                    printf("\3    \3");
                    break;
                case 4:
                    printf(" \3\3\3\3 ");
                    break;
                case 5:
                    printf("     \3");
                    break;
                case 6:
                    printf("     \3");
                    break;
                case 7:
                    printf(" \3\3\3\3 ");
                    break;
                }
                break;
            }
            printf("  ");
            if(i == 4 && line != 7) printf("  ");
            else if(i == 4 && line == 7) printf("\3 ");
        }
        printf("\n");
    }
}

int key_input(void)
{
    int ch,out;
    do
    {
        ch = getch();
        if(ch == 224)
        {
            switch(getch())
            {
            case 75:
                out = 100;
                break; //Left
            case 72:
                out = 101;
                break; //Up
            case 77:
                out = 110;
                break; //Right
            case 80:
                out = 111;
                break; //Down
            }
        }
        else if(ch >= 48 && ch <= 57)
        {
            out = ch - 48;
        }
        else if(ch == 8 || ch == 13 || ch == 27 || ch == 32 || ch == 42 || ch == 46)
        {
            switch(ch)
            {
            case 8:
                out = 77;
                break; //Backspace
            case 13:
                out = 55;
                break; //Enter
            case 27:
                out = 99;
                break; //Esc
            case 32:
                out = 88;
                break; //Space
            case 42:
                out = 11;
                break; //*
            case 46:
                out = 22;
                break; //.
            }
        }
        else
        {
            printf("\7");
            out = -1;
        }
    }
    while(out == -1);
    return out;
}

void intro(void)
{
    system("cls");
    printf("\n");
    printf("\t\3    \3    \3  \3\3\3\3\3\3  \3        \3\3\3\3\3    \3\3\3\3\3   \3     \3  \3\3\3\3\3\3\n");
    printf("\t \3   \3   \3   \3       \3       \3     \3  \3     \3  \3\3   \3\3  \3     \n");
    printf("\t \3   \3   \3   \3       \3       \3        \3     \3  \3 \3 \3 \3  \3     \n");
    printf("\t  \3 \3 \3 \3    \3\3\3\3\3\3  \3       \3        \3     \3  \3 \3 \3 \3  \3\3\3\3\3\3\n");
    printf("\t  \3 \3 \3 \3    \3       \3       \3        \3     \3  \3  \3  \3  \3     \n");
    printf("\t   \3   \3     \3       \3       \3     \3  \3     \3  \3  \3  \3  \3     \n");
    printf("\t   \3   \3     \3\3\3\3\3\3  \3\3\3\3\3\3   \3\3\3\3\3    \3\3\3\3\3   \3  \3  \3  \3\3\3\3\3\3\n");
    printf("\n\n");
    printf("%45s","POINT OF SALE");
    printf("\n\n%30s","As a EGCO 111 project by : ");
    printf("Benjarat  Likitroekvit    5913041\n\n");
    printf("%30sParawee   Poolpakdee      5913044\n\n"," ");
    printf("%30sPoonnawit Sukhowattanakit 5913045\n\n"," ");
    printf("%30s%s"," ","Pansang   Kaewarsa        5913051\n\n");
    printf("%13sStudents at Engineering Faculty, Mahidol University.\n\n"," ");
    printf("%34sYear 2016\n\n"," ");
    printf("\n\n%32sVERSION 1.00\n\n","");
    Beep(1046,800);
    Beep(1175,800);
    Beep(1318,1000);
    Sleep(3000);

    FILE *fp;
    if((fp = fopen("lists.txt","r")) == NULL)
    {
        fclose(fp);
        int k;
        system("cls");
        printf("\7\n\n\n\n\n\n\n\n\n%23sLists Database File is missing...\n\n%25sDo you want to create a new?\n\n%27s[ENTER] Yes or [ESC] No.","","","");
        k = key_input();
        if(k == 55)
        {
            FILE *fp;
            if((fp = fopen("lists.txt","w")) == NULL)
            {
                system("cls");
                printf("Cannot Create.");
                getch();
                exit(1);
            }
            else
            {
                fprintf(fp,"[Barcode]\t\t[Name]\t\t[Price]\t[Promotion]\t[Stock] <<<Please delete this line before sell product.\n");
            }
            fclose(fp);
        }
        else if(k == 99)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n%31sAccess Denied.\n\n%18sYou Must to Create Lists Database First...\n\n\n\n\n\n\n\n\n\n","","");
            getch();
            exit(1);
        }
    }
}

int start(void)
{
    int x=0,k;
    char point[3][5] = {"--->","    ","    "};
    do
    {
        system("cls");
        printf("\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3 Main Menu \3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n\n\n");
        printf("%25s%s 1. Product Sales\n\n","",point[0]);
        printf("%25s%s 2. Cash and Account\n\n","",point[1]);
        printf("%25s%s 3. Quit\n\n","",point[2]);
        printf("\n\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3");
        printf("\n\n\n\%19s Use arrow key %c or %c to cursors menu.\n\n%24s Then press [ENTER] to select.\n","",'\30','\31',"");
        k = key_input();
        switch(k)
        {
        case 101:
            strcpy(point[x],"    ");
            x--;
            if(x<0)
            {
                x = 2;
            }
            strcpy(point[x],"--->");
            break;
        case 111:
            strcpy(point[x],"    ");
            x++;
            if(x>2)
            {
                x = 0;
            }
            strcpy(point[x],"--->");
            break;
        case 55:
            break;
        default :
            printf("\7");
        }
    }
    while(k != 55);
    return x+1;
}

int sale(void)
{
    if(cash == 0.00)
    {
        money(0.00,'s');
    }
    char k,icode[20] = {'\0'},tcode[20] = {'\0'};
    char rcode[20] = {'\0'},rname[50] = {'\0'},rpro[10] = {'\0'};
    int rstock;
    float rprice,subtotal=0.0,grandtotal=0.0,discount=0.0,paid;
    int show = 1,cpoint = 0,nol = 0,ex = 1,i,j;
    char strin[10],strout[10];
    int tqty;

    struct list
    {
        char code[15],name[50],pro[10];
        int qty,stock;
        float price,nprice;
    };

    struct list lists[50];

    struct database
    {
        char code[15],name[50],pro[10];
        int stock;
        float price;
    };

    struct database data[100];

    struct checkout
    {
        char code[15],pro[10];
        int qty;
        float price;
    };

    struct checkout checkpro[50];

    for(i=0; i<50; i++)
    {
        memset(lists[i].code,0,sizeof(lists[i].code));
        memset(lists[i].name,0,sizeof(lists[i].name));
        memset(lists[i].pro,0,sizeof(lists[i].pro));
        lists[i].price = 0.0;
        lists[i].nprice = 0.0;
        lists[i].qty = 0;
        lists[i].stock = 0;
    }

    for(i=0; i<100; i++)
    {
        memset(data[i].code,0,sizeof(data[i].code));
        memset(data[i].name,0,sizeof(data[i].name));
        memset(data[i].pro,0,sizeof(data[i].pro));
        data[i].price = 0.0;
        data[i].stock = 0;
    }

    FILE *fp;
    if((fp = fopen("lists.txt","r")) == NULL)
    {
        printf("\7\n\n\n\n\n\n\n\n\n%25sLists of Database is Missing\n\n%10sPlease create a new lists file then rename it to %clists.txt%c\n\n%25sPress any key to continue...","","",34,34,"");
        getch();
    }
    else
    {
        system("cls");
        i=0;
        j=0;
        printf("[Barcode]\t[Name]\n\n");
        while(1)
        {
            fscanf(fp,"%s %s %f %s %d",data[i].code,data[i].name,&data[i].price,data[i].pro,&data[i].stock);
            if(feof(fp) != 0)
            {
                break;
            }
            if(pro_reader(data[i].pro,data[i].price,0) == -1)
            {
                printf("%-15s %s <--- Invalid Promotion Code.\n\n",data[i].code,data[i].name);
                j=1;
            }
            else if(pro_reader(data[i].pro,data[i].price,0) == -2)
            {
                printf("%-15s %s <--- Promotion Can't Buy for more than 9.\n\n",data[i].code,data[i].name);
                j=1;
            }
            i++;
        }
        if(j == 1)
        {
            printf("Program would read these lists as empty promotion.\n");
            getch();
        }
    }

    do
    {
        system("cls");
        printf("Lovely Shop - Sale Section\n");
        printf("\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n");
        printf("%-15s%-38s%-5s%12s%9s","Barcode","Name","Qty.","Per Item","Net.\n");
        if(nol < 5)
        {
            if(nol > 0) printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[0].code,lists[0].name,lists[0].qty,lists[0].price,lists[0].nprice);
            else printf("\n\n");
            if(nol > 1) printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[1].code,lists[1].name,lists[1].qty,lists[1].price,lists[1].nprice);
            else printf("\n\n");
            if(nol > 2) printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[2].code,lists[2].name,lists[2].qty,lists[2].price,lists[2].nprice);
            else printf("\n\n");
            if(nol > 3) printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[3].code,lists[3].name,lists[3].qty,lists[3].price,lists[3].nprice);
            else printf("\n\n");
            if(nol > 4) printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[4].code,lists[4].name,lists[4].qty,lists[4].price,lists[4].nprice);
            else printf("\n\n");
        }
        else if(nol >= 5)
        {
            if(show > 5)
            {
                printf("%40s","");
                putch(30);
            }
            printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[show-5].code,lists[show-5].name,lists[show-5].qty,lists[show-5].price,lists[show-5].nprice);
            printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[show-4].code,lists[show-4].name,lists[show-4].qty,lists[show-4].price,lists[show-4].nprice);
            printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[show-3].code,lists[show-3].name,lists[show-3].qty,lists[show-3].price,lists[show-3].nprice);
            printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[show-2].code,lists[show-2].name,lists[show-2].qty,lists[show-2].price,lists[show-2].nprice);
            printf("\n%-15s%-38s%-5d%12.2f%9.2f\n",lists[show-1].code,lists[show-1].name,lists[show-1].qty,lists[show-1].price,lists[show-1].nprice);
            if(nol - show > 0)
            {
                printf("%40s","");
                putch(31);
            }

        }
        printf("\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n\n%50s\n\n","Total : ");
        num_segment(subtotal);
        printf("\n[ENTER] - Apply, [SPACE] - Checkout, [<Num>*<Barcode>] - Multiply, [ESC] - Quit\n\nBarcode -->%s",icode);
        k = key_input();
        if(k >= 0 && k <= 9 )
        {
            k += 48;
            icode[cpoint] = k;
            cpoint++;
        }
        else if(k == 11)
        {
            icode[cpoint] = 42;
            cpoint++;
        }
        else if(k == 77)
        {
            cpoint--;
            if(cpoint < 0)
            {
                cpoint = 0;
            }
            icode[cpoint] = 0;
        }
        else if(k == 101 || k == 111)
        {
            if(k == 101)
            {
                show--;
                if(show < 5)
                {
                    printf("\7");
                    show = 5;
                }
            }
            else if(k == 111)
            {
                show++;
                if(show > nol)
                {
                    printf("\7");
                    show = nol;
                }
            }
        }
        else if(k == 55)
        {
            i = 0;
            tqty = 1;
            while(icode[i] != '\0')
            {
                if(icode[i] == '*')
                {
                    if(i != 1)
                    {
                        break;
                    }
                    tqty = icode[0];
                    tqty = tqty - 48;
                    strncpy(tcode,icode+2,strlen(icode)-2);
                    strcpy(icode,tcode);
                }
                i++;
            }
            FILE *fp;
            if((fp = fopen("lists.txt","r")) == NULL)
            {
                system("cls");
                printf("\7\n\n\n\n\n\n\n\n\n%25sLists of Database is Missing\n\n%10sPlease create a new lists file then rename it to %clists.txt%c\n\n%25sPress any key to continue...","","",34,34,"");
                getch();
            }
            else
            {
                while(1)
                {
                    fscanf(fp,"%s %s %f %s %d",rcode,rname,&rprice,rpro,&rstock);
                    if(strcmp(rcode,icode) == 0)
                    {
                        Beep(1760,300);
                        strcpy(lists[nol].code,rcode);
                        strcpy(lists[nol].name,rname);
                        strcpy(lists[nol].pro,rpro);
                        lists[nol].price = rprice;
                        lists[nol].stock = rstock;
                        lists[nol].qty = tqty;
                        lists[nol].nprice += (float)lists[nol].qty * lists[nol].price;
                        subtotal += lists[nol].nprice;
                        memset(icode,0,sizeof(icode));
                        cpoint = 0;
                        nol++;
                        show = nol;
                        break;
                    }
                    else if(feof(fp) != 0)
                    {
                        system("cls");
                        printf("\7\n\n\n\n\n\n\n\n\n%34sNot Found.\n\n%25sPress any key to continue...","","");
                        getch();
                        memset(icode,0,sizeof(icode));
                        cpoint = 0;
                        break;
                    }
                }
            }
            fclose(fp);
        }
        else if(k == 88 || k == 99) //Exit or Payment
        {
            if(k == 99)
            {
                if(nol == 0)
                {
                    ex = 0;
                }
                else
                {
                    do
                    {
                        system("cls");
                        printf("\7\n\n\n\n\n\n\n\n\n%26sCannot Quit During Sales.\n\n%17sOr you want to void this sale? press [ENTER].\n\n%25sPress [ESC] back to sale...","","","");
                        k = key_input();
                        if(k == 55)
                        {
                            ex = 0;
                        }
                        else if(k == 99)
                        {
                            ex = 1;
                        }
                    }
                    while(k != 99 && k != 55);

                }
            }
            else if(k == 88)
            {
                if(nol > 0)
                {
                    for(i=0; i<50; i++)
                    {
                        memset(checkpro[i].code,0,sizeof(checkpro[i].code));
                        memset(checkpro[i].pro,0,sizeof(checkpro[i].pro));
                        checkpro[i].price = 0.0;
                        checkpro[i].qty = 0;
                    }
                    subtotal = 0.00;
                    discount = 0.00;
                    for(i=0; i<nol; i++)
                    {
                        subtotal += lists[i].nprice;
                        j = 0;
                        while(1)
                        {
                            if(strcmp(checkpro[j].code,lists[i].code) == 0)
                            {
                                checkpro[j].qty += lists[i].qty;
                                break;
                            }
                            else if(checkpro[j].code[0] == 0) //Is it the Last checkpro?
                            {
                                strcpy(checkpro[j].code,lists[i].code);
                                strcpy(checkpro[j].pro,lists[i].pro);
                                checkpro[j].price = lists[i].price;
                                checkpro[j].qty = lists[i].qty;
                                break;
                            }
                            j++;
                        }
                    }
                    i = 0;
                    while(checkpro[i].code[0] != 0)
                    {
                        if(pro_reader(checkpro[i].pro,checkpro[i].price,checkpro[i].qty) > 0)
                        {
                            discount += pro_reader(checkpro[i].pro,checkpro[i].price,checkpro[i].qty);
                        }
                        i++;
                    }
                    grandtotal = subtotal - discount; //Discount here
                    strcpy(strout,"00.0");
                    memset(strin,0,sizeof(strin));
                    paid = 0.00;
                    do
                    {
                        system("cls");
                        printf("Lovely Shop - Payment Section\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n");
                        printf("%22s___________________________________\n","");
                        printf("%22s%35s|\n","|","");
                        printf("%22s%18s : %-14.2f|\n","|","Subtotal",subtotal);
                        printf("%21s|___________________________________|\n","");
                        printf("%22s%35s|\n","|","");
                        printf("%22s%18s : %-14.2f|\n","|","Discount",discount);
                        printf("%21s|___________________________________|\n","");
                        printf("%22s%35s|\n","|","");
                        printf("%22s%18s : %-14.2f|\n","|","Grand Total",grandtotal);
                        printf("%21s|___________________________________|\n\n","");
                        printf("%40s : %-14.2f\n","Paid",paid);
                        printf("%22s___________________________________\n\n","");
                        if((paid - grandtotal) >= 0.00)
                        {
                            printf("%40s : %-14.2f\n","Change",paid - grandtotal);
                            printf("%22s___________________________________\n\n","");
                        }
                        else
                        {
                            printf("\n\n\n");
                        }
                        printf("%33sPayment : CASH\n\n","");
                        printf("%12s[ENTER] - Apply, [SPACE] - Checkout, [PERIOD] - 00\n\n","");
                        printf("%30sAmount -> ","");
                        printf("%10s",strrev(strout));
                        k = key_input();
                        if(k >= 0 && k <= 9)
                        {
                            memset(strout,0,sizeof(strout));
                            k += 48;
                            strout[0] = k;
                            strcat(strout,strin);
                            if(strout[0] == 48)
                            {
                                if(strout[1] == '\0')
                                {
                                    memset(strout,0,sizeof(strout));
                                }
                            }
                            strcpy(strin,strout);
                            for(i=0; i<=2; i++)
                            {
                                if(strout[i] == 0)
                                {
                                    strout[i] = 48;
                                }
                            }
                            append(strout,".",2);
                        }
                        else if(k == 22)
                        {
                            memset(strout,0,sizeof(strout));
                            strout[0] = 48;
                            strout[1] = 48;
                            strcat(strout,strin);
                            if(strout[1] == 48)
                            {
                                if(strout[2] == '\0')
                                {
                                    memset(strout,0,sizeof(strout));
                                }
                            }
                            strcpy(strin,strout);
                            for(i=0; i<=2; i++)
                            {
                                if(strout[i] == 0)
                                {
                                    strout[i] = 48;
                                }
                            }
                            append(strout,".",2);
                        }
                        else if(k == 77)
                        {
                            memset(strout,0,sizeof(strout));
                            strcpy(strout,strin+1);
                            strcpy(strin,strout);
                            for(i=0; i<=2; i++)
                            {
                                if(strout[i] == 0)
                                {
                                    strout[i] = 48;
                                }
                            }
                            append(strout,".",2);
                        }
                        else if(k == 55)
                        {
                            paid += atof(strout);
                            strcpy(strout,"00.0");
                            memset(strin,0,sizeof(strin));
                        }
                        else if(k == 88)
                        {
                            if(paid - grandtotal >= 0)
                            {
                                system("cls");
                                printf("\n\n\n\n\t%15s","Amount to change : \n");
                                printf("\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n");
                                num_segment(paid - grandtotal);
                                printf("\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n");
                                printf("\n\n%25sPlease close your cash drawer.\n\n%27sPress any key to close...","","");
                                money(grandtotal,'c');
                                FILE *fp;
                                if((fp = fopen("lists.txt","w")) == NULL)
                                {
                                    printf("\7\n\n\n\n\n\n\n\n\n%25sLists of Database is Missing\n\n%10sPlease create a new lists file then rename it to %clists.txt%c\n\n%25sPress any key to continue...","","",34,34,"");
                                    getch();
                                }
                                else
                                {
                                    i = 0;
                                    while(data[i].price != 0)
                                    {
                                        j = 0;
                                        while(lists[j].price != 0)
                                        {
                                            if(strcmp(data[i].code,lists[j].code) == 0)
                                            {
                                                data[i].stock -= lists[j].qty;
                                            }
                                            j++;
                                        }
                                        i++;
                                    }
                                }
                                i = 0;
                                while(data[i].price != 0)
                                {
                                    fprintf(fp,"%s\t%s\t%.2f\t%s\t%d\n",data[i].code,data[i].name,data[i].price,data[i].pro,data[i].stock);
                                    i++;
                                }
                                fclose(fp);
                                getch();
                                ex = 2;
                                break;
                            }
                            else
                            {
                                system("cls");
                                strcpy(strout,"00.0");
                                memset(strin,0,sizeof(strin));
                                paid = 0.0;
                                printf("\7\n\n\n\n\n\n\n\n\n%23sAmount of paid is not sufficient.\n\n%28sPlease specify again...\n\n%25sPress any key to continue...","","","");
                                getch();
                            }
                        }
                    }
                    while(k != 99);
                }
                else
                {
                    system("cls");
                    printf("\7\n\n\n\n\n\n\n\n\n%32sCannot Payment.\n\n%30sNo any lists found.\n\n%25sPress any key to continue...","","","");
                    getch();
                }
            }
        }
    }
    while(ex == 1);
    return ex;
}

int acc(void)
{
    int x=0,k;
    char point[3][5] = {"--->","    ","    "};
    do
    {
        system("cls");
        printf("\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3 Cash and Account \3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n\n\n");
        printf("%25s%s 1. Shift survey\n\n","",point[0]);
        printf("%25s%s 2. Stock Checking\n\n","",point[1]);
        printf("%25s%s 3. Back to Main Menu\n\n","",point[2]);
        printf("\n\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3");
        printf("\n\n\n\%19s Use arrow key %c or %c to cursors menu.\n\n%24s Then press [ENTER] to select.\n","",'\30','\31',"");
        k = key_input();
        switch(k)
        {
        case 101:
            strcpy(point[x],"    ");
            x--;
            if(x<0)
            {
                x = 2;
            }
            strcpy(point[x],"--->");
            break;
        case 111:
            strcpy(point[x],"    ");
            x++;
            if(x>2)
            {
                x = 0;
            }
            strcpy(point[x],"--->");
            break;
        case 55:
            break;
        default :
            printf("\7");
        }
    }
    while(k != 55);
    return x+1;
}

void money(float input,char mode)
{
    char strin[10],strout[10],k,insert;
    int i;
    if(mode == 's')
    {
        strcpy(strout,"00.0");
        memset(strin,0,sizeof(strin));
        do
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n%15sPlease specify initial money : ","");
            printf("%7s",strrev(strout));
            strrev(strout);
            k = key_input();
            if(k >= 0 && k <= 9)
            {
                memset(strout,0,sizeof(strout));
                insert = k + 48;
                strout[0] = insert;
                strcat(strout,strin);
                if(strout[0] == 48)
                {
                    if(strout[1] == '\0')
                    {
                        memset(strout,0,sizeof(strout));
                    }
                }
                strcpy(strin,strout);
                for(i=0; i<=2; i++)
                {
                    if(strout[i] == 0)
                    {
                        strout[i] = 48;
                    }
                }
                append(strout,".",2);
            }
            else if(k == 22)
            {
                memset(strout,0,sizeof(strout));
                strout[0] = 48;
                strout[1] = 48;
                strcat(strout,strin);
                if(strout[1] == 48)
                {
                    if(strout[2] == '\0')
                    {
                        memset(strout,0,sizeof(strout));
                    }
                }
                strcpy(strin,strout);
                for(i=0; i<=2; i++)
                {
                    if(strout[i] == 0)
                    {
                        strout[i] = 48;
                    }
                }
                append(strout,".",2);
            }
            else if(k == 77)
            {
                memset(strout,0,sizeof(strout));
                strcpy(strout,strin+1);
                strcpy(strin,strout);
                for(i=0; i<=2; i++)
                {
                    if(strout[i] == 0)
                    {
                        strout[i] = 48;
                    }
                }
                append(strout,".",2);
            }
            else if(k == 55)
            {
                cash = atof(strrev(strout));
            }
        }
        while(k != 55);
    }
    else if(mode == 'c')
    {
        cash += input;
    }
    else if(mode == 'i')
    {
        float t,sum = 0;
        system("cls");
        printf("Lovely Shop - Shift survey\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3");
        printf("\nSpecify number of bank note and coin\n");
        printf("\n%10s : ","1000");
        scanf("%f",&t);
        sum += t * 1000;
        printf("\n%10s : ","500");
        scanf("%f",&t);
        sum += t * 500;
        printf("\n%10s : ","100");
        scanf("%f",&t);
        sum += t * 100;
        printf("\n%10s : ","50");
        scanf("%f",&t);
        sum += t * 50;
        printf("\n%10s : ","20");
        scanf("%f",&t);
        sum += t * 20;
        printf("\n%10s : ","10");
        scanf("%f",&t);
        sum += t * 10;
        printf("\n%10s : ","5");
        scanf("%f",&t);
        sum += t * 5;
        printf("\n%10s : ","2");
        scanf("%f",&t);
        sum += t * 2;
        printf("\n%10s : ","1");
        scanf("%f",&t);
        sum += t * 1;
        printf("\n%10s : ","0.50");
        scanf("%f",&t);
        sum += t * 0.50;
        printf("\n%10s : ","0.25");
        scanf("%f",&t);
        sum += t * 0.25;
        if(sum - cash > 0)
        {
            printf("\n\n%30s : +%.2f","Over",fabs(sum - cash));
        }
        else if(sum - cash < 0)
        {
            printf("\n\n%30s : -%.2f","Loss",fabs(sum - cash));
        }
        else
        {
            printf("\n\n%30s : %.2f","Cash is equivalent",fabs(sum - cash));
        }
        getch();
    }
}

void stock(void)
{
    char code[20],name[50],pro[10];
    float price;
    int qty;
    FILE *fp;
    if((fp = fopen("lists.txt","r")) == NULL)
    {
        printf("\7\n\n\n\n\n\n\n\n\n%25sLists of Database is Missing\n\n%10sPlease create a new lists file then rename it to %clists.txt%c\n\n%25sPress any key to continue...","","",34,34,"");
        getch();
    }
    else
    {
        system("cls");
        printf("Lovely Shop - Stock Checking\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n");
        printf("%-17s%-30s%-10s%6s%10s\n\n","Barcode","Name","Price","Promotion","Qty.");
        while(feof(fp) == 0)
        {
            fscanf(fp,"%s %s %f %s %d",code,name,&price,pro,&qty);
            if(code[0] != 0)
            {
                printf("%-17s%-30s%-10.2f%-6s%12d\n\n",code,name,price,pro,qty);
            }
            memset(code,0,sizeof(code));
        }
    }
    fclose(fp);
    printf("\n--------------------------------------\n\nDatabase on lists.txt\n\nPress any key back to menu...");
}

float pro_reader(char procode[],float price,int qty)
{
    char temp[10];
    float dis = 0.00;
    int q,count;
    if(procode[0] != 'E')
    {
        if(procode[0] == 'B')
        {
            if(procode[1] >= 48 && procode[1] <= 57)
            {
                q = procode[1] - 48;
                if(procode[2] == 'G')
                {
                    count = (int)(qty / (q + (procode[3] - 48)));
                    dis = (float)(count * price * (procode[3] - 48));
                }
                else if(procode[2] == 'D')
                {
                    count = qty / q;
                    strcpy(temp,procode+3);
                    dis = (float)(count * atof(temp));
                }
                else if(procode[1] >= 48 && procode[1] <= 57) //Promotion Can't Buy for more than 9
                {
                    dis = -2.0;
                }
                else //Incorrect Promotion
                {
                    dis = -1.0;
                }
            }
            else //Incorrect Promotion
            {
                dis = -1.0;
            }
        }
        else //Incorrect Promotion
        {
            dis = -1.0;
        }
    }
    return dis;
}
// inserts into subject[] at position pos
void append(char subject[], const char insert[], int pos)
{
    char buf[20] = {}; // 100 so that it's big enough. fill with 0
    // or you could use malloc() to allocate sufficient space

    strncpy(buf, subject, pos); // copy at most first pos characters
    int len = strlen(buf);
    strcpy(buf+len, insert); // copy all of insert[] at the end
    len += strlen(insert);  // increase the length by length of insert[]
    strcpy(buf+len, subject+pos); // copy the rest

    strcpy(subject, buf);   // copy it back to subject
    // deallocate buf[] here, if used malloc()
}
