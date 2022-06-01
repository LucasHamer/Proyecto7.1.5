#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vproducto[10]={0};
    int cantunid,producto,x;

    printf("Ingrese numero de producto: ");
    scanf("%d",&producto);

    while(producto!=0)
    {
        printf("Ingrese cantidad de unidades: ");
        scanf("%d",&cantunid);
        vproducto[producto-1]+=cantunid;

        printf("Ingrese numero de producto: ");
        scanf("%d",&producto);
    }
        printf("Codigo      Unidades\n");
    for(x=0;x<10;x++)
    {
        printf(" %d           %d\n",x+1,vproducto[x]);
    }

    return 0;
}
