#include<stdio.h>
struct distance
{
    int in;
    int ft;
};
struct distance dis_sam(struct distance,struct distance);
void main()
{
    struct distance d,d1,d2;
    printf("Enter feet and inch of the First diatance :");
    scanf("%d%d",&d1.ft,&d1.in);
    printf("Enter feet and inch of the Second diatance :");
    scanf("%d%d",&d2.ft,&d2.in);
    d=dis_sam(d1,d2);
    printf("Total distance=%d feet and %d inch",d.ft,d.in);
}
struct distance dis_sam(struct distance d1,struct distance d2 )
{
    struct distance d3;
    d3.ft=d1.ft+d2.ft+(d1.in+d2.in)/12;
    d3.in=(d1.in+d2.in)%12;
    return (d3);
}
