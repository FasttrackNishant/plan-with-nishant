#include<stdio.h>
#include<math.h>
int main()
{
  int  a,b,x,y,z;
    float m,r,i,alpha,w,torque,e,k,q,u,p,v,n,t,M,s,G,R,T,g;
    printf("enter your choice \n 1.rotational motion \n 2.heat dynamics\n 3 gravitational\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("choose:\n 1.moment of inertia \n 2. torque  \n 3. energy \n 4 radius of gyration\n");
        scanf("%d",&b);
        switch(b)
        {
        case 1:
            printf("Enter the value of m: \n");
            scanf("%f",&m);
             printf("Enter the value of r:\n");
            scanf("%f",&r);
            i= m*r*r;
            printf("The value of moment of inetia is: %f",i);
            break;
        case 2:
            printf("Enter the value of i: \n");
            scanf("%f",&i);
            printf("Enter the value of alpha  :\n");
            scanf("%f",&alpha);
           torque=i*alpha;
            printf("value of torque is :%f ",torque);
            break;
        case 3:
            printf("Enter the value of i:\n");
            scanf("%f",&i);
            printf("Enter the value of w:\n");
            scanf("%f",&w);
            e=(i*w*w)/2;
            printf("The value of energy is %f",e);
        case 4:
            printf("Enter the value of i:\n");
            scanf("%f",&i);
            printf("Enter the value of m:\n");
            scanf("%f",&m);
            k=pow(i/m,0.5);
            printf("The value of radius of gyration is %f\n",k);
        default:
            printf("wrong entry");
        }
    }

    if (a==2)
    {
        printf("choose:\n 1. 1st law \n 2. gas equation \n 3.entropy\n 4.latent heat\n");
        scanf("%d",&b);
        switch(b)
        {
        case 1:
            printf("Enter the value of q:\n");
            scanf("%f",&q);
             printf("enter the value of w:\n");
            scanf("%f",&w);
           u=q-w;
            printf("The value of internal energy is%f",u);
            break;
        case 2:
            printf("Enter the value of v:\n");
            scanf("%f",&v);
            printf("Enter the value of n:\n");
            scanf("%f",&n);
            printf("Enter the value of r:\n");
            scanf("%f",&r);
            printf("Enter the value of t:\n");
            scanf("%f",&t);
           p=(n*r*t)/v;
            printf("value of x is:%f",p);
            break;
        case 3:
            printf("Enter the value of q:\n");
            scanf("%f",&q);
            printf("Enter the value of t:\n");
            scanf("%f",&t);
            s=q/t;
            printf("The value of entropy is %F",s);
        case 4:
            printf("Enter the value of q:\n");
            scanf("%f",&q);
            printf("Enter the value of m:\n");
            scanf("%f",&m);
            s=q/m;
            printf("The value of specific heat is %F",s);
            
        default:
            printf("wrong entry");
        }
    }
    if(a==3)
    {
       printf("choose:\n 1.gravitational acceleration  \n 2.orbital velocity  \n 3.critical velocity\n 4.time period\n");
       scanf("%d",&b);
        switch(b)
        {
        case 1:
            printf("Enter the value of G:\n");
            scanf("%f",&G);
            printf("Enter the value of M:\n");
            scanf("%f",&M);
            printf("Enter the value of R:\n");
            scanf("%f",&R);
            g=pow(G*M/R,0.5);
            printf("The value of internal energy is %f",g);
            break;
        case 2:
            printf("Enter the value of G:\n");
            scanf("%f",&G);
            printf("Enter the value of M:\n");
            scanf("%f",&M);
            printf("Enter the value of R:\n");
            scanf("%f",&R);
            
            v=pow(G*M/R,0.5);
            printf("The value of orbita velocity is %f",v);
            break;
        case 3:
            printf("Enter the value of G:\n");
            scanf("%f",&G);
            printf("Enter the value of M:\n");
            scanf("%f",&M);
            printf("Enter the value of R:\n");
            scanf("%f",&R);
            
            v=pow(2*G*M/R,2);
            printf("The value of critical velocity is %f",v);
            break;
        case 4:
            printf("Enter the value of G:\n");
            scanf("%f",&G);
            printf("Enter the value of M:\n");
            scanf("%f",&M);
            printf("Enter the value of R:\n");
            scanf("%f",&R);
            
            
            T=2*3.14*pow(r/g,1/2);
            printf("The value of time period is %f",T);
            break;
            
    }
    }
    
    return 0;
}