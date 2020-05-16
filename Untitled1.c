#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
struct sinhvien {char malop[10];
                 int masv;
                 char ten[20];
                 int ngay;
                 int thang;
                 int nam;
                 float diem;
                 };
void nhap(struct sinhvien sv[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap thong tin sinh vien thu %d :\n",i+1);
        printf("Nhap malop :\n");
        fflush(stdin);
        gets(sv[i].malop);
        printf("Nhap ma sinh vien :\n");
        scanf("%d",&sv[i].masv);
        printf("Nhap ten :\n");
        fflush(stdin);
        gets(sv[i].ten);
        printf("Nhap ngay sinh :\n");
        scanf("%d",&sv[i].ngay);
        printf("Nhap thang sinh :\n");
        scanf("%d",&sv[i].thang);
        printf("Nhap nam sinh :\n");
        scanf("%d",&sv[i].nam);
        printf("Nhap diem :\n");
        scanf("%f",&sv[i].diem);
    }
}
void in(struct sinhvien sv[],int n)
{
    printf("\nDANH SACH SINH VIEN\n");
    printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
    printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
    }
}
void tkmalop(struct sinhvien sv[],int n,char ml[])
{
    printf("Ban chon tim kiem theo ma lop:\n");
    printf("Nhap ma lop can tim kiem :");
    fflush(stdin);
    gets(ml);
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(ml,sv[i].malop)==0) check++;
    }
    if(check>0) {
    printf("\nSINH VIEN CAN TIM KIEM :\n");
    printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
        if(strcmp(ml,sv[i].malop)==0)
        {
    printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        }
    }
    }
    else printf("\nKHONG TIM THAY SINH VIEN\n");
}
void tkmasv(struct sinhvien sv[],int n,int svtk)
{
    printf("Ban chon tim kiem theo ma sinh vien:\n");
    printf("Nhap ma sinh vien can tim kiem :");
    scanf("%d",&svtk);
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(svtk==sv[i].masv) check++;
    }
    if(check>0) {
    printf("\nSINH VIEN CAN TIM KIEM :\n");
    printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
        if(svtk==sv[i].masv)
        {
    printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        }
    }
    }
    else printf("\nKHONG TIM THAY SINH VIEN\n");
}
void tkten(struct sinhvien sv[],int n,char tentk[])
{
    printf("Ban chon tim kiem theo ten:\n");
    printf("Nhap ten can tim kiem :");
    fflush(stdin);
    gets(tentk);
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(tentk,sv[i].ten)==0) check++;
    }
    if(check>0) {
    printf("\nSINH VIEN CAN TIM KIEM :\n");
    printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
        if(strcmp(tentk,sv[i].ten)==0)
        {
    printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        }
    }
    }
    else printf("\nKHONG TIM THAY SINH VIEN\n");
}
void tkngaysinh(struct sinhvien sv[],int n,int ngaytk,int thangtk,int namtk)
{
    printf("Ban chon tim kiem theo ngay sinh:\n");
    printf("Nhap ngay sinh can tim kiem :");
    scanf("%d",&ngaytk);
    printf("Nhap thang sinh:");
    scanf("%d",&thangtk);
    printf("Nhap nam sinh:");
    scanf("%d",&namtk);
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(sv[i].ngay==ngaytk&&sv[i].thang==thangtk&&sv[i].nam==namtk) check++;
    }
    if(check>0) {
    printf("\nSINH VIEN CAN TIM KIEM :\n");
    printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
        if(sv[i].ngay==ngaytk&&sv[i].thang==thangtk&&sv[i].nam==namtk)
        {
    printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        }
    }
    }
    else printf("\nKHONG TIM THAY SINH VIEN\n");
}
void inf(struct sinhvien sv[],int n, char filename[])
{
    FILE * fp;
    fp = fopen (filename,"w");
    fprintf(fp,"\nDANH SACH SINH VIEN\n");
    fprintf(fp,"Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
    fprintf(fp,"%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
    }
    fclose (fp);
    printf("\nXuat file thanh cong.\n");
}
void tkdiem(struct sinhvien sv[],int n,float diemtk)
{
    printf("Ban chon tim kiem theo diem:\n");
    printf("Nhap diem can tim kiem :");
    scanf("%f",&diemtk);
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(diemtk==sv[i].diem) check++;
    }
    if(check>0) {
    printf("\nSINH VIEN CAN TIM KIEM :\n");
    printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    for(int i=0;i<n;i++)
    {
        if(diemtk==sv[i].diem)
        {
    printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        }
    }
    }
    else printf("\nKHONG TIM THAY SINH VIEN\n");
}
void tkall(struct sinhvien sv[],int n,char alltk[])
{
    printf("\nBAN CHON TIM KIEM KHONG XAC DINH\n");
    printf("Ban can tim kiem gi :");
    fflush(stdin);
    gets(alltk);
    char phu[20];
    int dem2=0;
    for(int i=0;i<n;i++)
    {
        if(strstr(sv[i].malop,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
        if(strstr(sv[i].ten,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
        sprintf(phu,"%d",sv[i].masv);
        if(strstr(phu,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
        sprintf(phu,"%d",sv[i].ngay);
        if(strstr(phu,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
        sprintf(phu,"%d",sv[i].thang);
        if(strstr(phu,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
        sprintf(phu,"%d",sv[i].nam);
        if(strstr(phu,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%-2.0d/%-2.0d/%-4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
        sprintf(phu,"%0.1f",sv[i].diem);
        if(strstr(phu,alltk)!=NULL) {dem2++;
        printf("%s\t\t%d\t\t%s\t\t\t%-2.0d/%-2.0d/%-4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);
        continue;}
    }
    if (dem2>0) printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    else printf("\nKHONG TRUNG KHOP\n");
}
void hamtkkcx(struct sinhvien sv[],int n,char tkkcx[])
{
    printf("\nBAN CHON TIM KIEM KHONG CAN CHINH XAC\n");
    char phu[20];
    int demm=0;
    int demtkkcx;
    printf("Chon truong tim kiem :\n");
    printf("1:MA LOP\n");
    printf("2: MA SINH VIEN\n");
    printf("3:HO TEN\n");
    printf("4:NGAY SINH\n");
    printf("5:THANG SINH\n");
    printf("6:NAM SINH\n");
    printf("7:DIEM\n");
    scanf("%d",&demtkkcx);
    while(1)
    {
        if(demtkkcx>7||demtkkcx<0)
        {
        printf("Nhap sai.Nhap lai:");
        scanf("%d",&demtkkcx);}
        else break;
    }
    printf("Nhap thong tin tim kiem :");
    fflush(stdin);
    gets(tkkcx);
    if(demtkkcx==1)
        for(int i=0;i<n;i++){
        if(strstr(sv[i].malop,tkkcx)!=NULL) {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}
    if(demtkkcx==2) {
        for(int i=0;i<n;i++){
        sprintf(phu,"%d",sv[i].masv);
        if(strstr(phu,tkkcx)!=NULL)
        {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}}
    if(demtkkcx==3)
        for(int i=0;i<n;i++){
        if(strstr(sv[i].ten,tkkcx)!=NULL) {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}
    if(demtkkcx==4){
        for(int i=0;i<n;i++){
        sprintf(phu,"%d",sv[i].ngay);
        if(strstr(phu,tkkcx)!=NULL) {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}}
    if(demtkkcx==5){
        for(int i=0;i<n;i++){
        sprintf(phu,"%d",sv[i].thang);
        if(strstr(phu,tkkcx)!=NULL) {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}}
    if(demtkkcx==6){
        for(int i=0;i<n;i++){
        sprintf(phu,"%d",sv[i].nam);
        if(strstr(phu,tkkcx)!=NULL) {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}}
    if(demtkkcx==7){
        for(int i=0;i<n;i++){
        sprintf(phu,"%0.1f",sv[i].diem);
        if(strstr(phu,tkkcx)!=NULL) {demm++;
        printf("%s\t\t%d\t\t%s\t\t\t%2.0d/%2.0d/%4.0d\t%0.1f\n",sv[i].malop,sv[i].masv,sv[i].ten,sv[i].ngay,sv[i].thang,sv[i].nam,sv[i].diem);}}}
    if (demm>0) printf("Ma lop\t\tMa sinh vien\tHo ten\t\t\tNgay sinh\tDiem\n");
    else printf("\nKHONG TRUNG KHOP\n");
}
int main()
{
    int n;
    printf("Nhap so luong sinh vien :");
    scanf("%d",&n);
    struct sinhvien sv[n];
    nhap(sv,n);
    in(sv,n);
    /*printf("Nhap ten file muon xuat :");
    char filename[20];
    fflush(stdin);
    gets(filename);
    inf(sv,n,filename);*/
    char ml[20],tentk[20];
    int ngaytk,thangtk,namtk;
    int svtk;
    float diemtk;
    int tkcx;
    printf("\nCHON KIEU TIM KIEM\n");
    printf("1:Tim kiem chinh xac\n");
    printf("2:Tim kiem khong chinh xac\n");
    printf("3:Tim kiem tat ca\n");
    int kieutk;
    scanf("%d",&kieutk);
    while(1)
    {
        if(kieutk>3||kieutk<0)
        {
        printf("Nhap sai.Nhap lai:");
        scanf("%d",&kieutk);}
        else break;
    }
    if(kieutk==1){
    printf("\nTIM KIEM CHINH XAC\n");
    printf("Chon truong tim kiem :\n");
    printf("1:MA LOP\n");
    printf("2: MA SINH VIEN\n");
    printf("3:HO TEN\n");
    printf("4:NGAY SINH\n");
    printf("5:DIEM\n");
    scanf("%d",&tkcx);
    if(tkcx==1) tkmalop(sv,n,ml);
    if(tkcx==2) tkmasv(sv,n,svtk);
    if(tkcx==3) tkten(sv,n,tentk);
    if(tkcx==4) tkngaysinh(sv,n,ngaytk,thangtk,namtk);
    if(tkcx==5) tkdiem(sv,n,diemtk);
    while(1)
    {
        if(tkcx>5||tkcx<0)
        {
        printf("Nhap sai.Nhap lai:");
        scanf("%d",&tkcx);}
        else break;
    }}
    if (kieutk==3){
    char alltk[20];
    tkall(sv,n,alltk);}
    if (kieutk==2){
    char tkkcx[20];
    hamtkkcx(sv,n,tkkcx);}
    return 0;
}
