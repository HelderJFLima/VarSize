// Este programa informa o tamanho e o alcance de cada um dos
// principais tipos de variável usados na linguagem C nesta máquina.
// Os resultados são salvos em um arquivo 'txt'.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

int main()
{
    int ch_size, shi_size, i_size, li_size, fl_size, dbl_size, ldbl_size;
    long int range_ch, range_shi, range_i, range_li;

    FILE *arq;

    ch_size = sizeof(char);                         // Tamanhos dos tipos em bytes

    shi_size = sizeof(short);

    i_size = sizeof(int);

    li_size = sizeof(long);

    fl_size = sizeof(float);

    dbl_size = sizeof(double);

    ldbl_size = sizeof(long double);

    range_ch = pow(2, (8 * ch_size) - 1);           // Limites dos valores que podem ser salvos em cada tipo

    range_shi = pow(2, (8 * shi_size) - 1);

    range_i = pow(2, (8 * i_size) - 1);

    range_li = pow(2, (8 * li_size) - 1);

    arq = fopen("VarSizeOutput.txt", "w");          // Salva as informações num arquivo 'txt'.

    if (!arq)
    {
        printf("\n\n** Erro na abertura do arquivo! **\n\a");

        exit(1);
    }

    fprintf(arq, "# Criado pelo programa VarSize #");

    fprintf(arq, "\n\n\nInforma%c%ces sobre os tipos usados na linguagem C neste PC", 231, 245);

    fprintf(arq, "\n\n\nTamanhos dos tipos:");

    fprintf(arq, "\n\n\nchar: %d byte.\n\nshort int: %d bytes.\n\nint: %d bytes.\n\nlong int: %d bytes.", ch_size, shi_size, i_size, li_size);

    fprintf(arq, "\n\nfloat: %d bytes.\n\ndouble: %d bytes.\n\nlong double: %d bytes.\n", fl_size, dbl_size, ldbl_size);

    fprintf(arq, "\n\n\nAlcance dos tipos:");

    fprintf(arq, "\n\n\nchar: %li a %li .\n\nshort int: %li a %li .", -range_ch, range_ch - 1, -range_shi, range_shi - 1);

    fprintf(arq, "\n\nint: %li a %li .\n\nlong int: %li a %li .", -range_i, range_i - 1, -range_li, range_li - 1);

    fprintf(arq, "\n\n\nfloat: %e  a  %e, com %d algarismos significativos.", FLT_MIN, FLT_MAX, FLT_DIG);

    fprintf(arq, "\n\ndouble: %e  a  %e, com %d algarismos significativos.", DBL_MIN, DBL_MAX, DBL_DIG);

    fprintf(arq, "\n\nlong double: %e  a  %e, com %d algarismos significativos.\n", LDBL_MIN, LDBL_MAX, LDBL_DIG);

    fclose(arq);                                    // Exibição das informações na tela

    printf("\nInforma%c%ces sobre os tipos usados na linguagem C neste PC", 135, 228);

    printf("\n\n\nTamanhos dos tipos:");

    printf("\n\n\nchar: %d byte.\n\nshort int: %d bytes.\n\nint: %d bytes.\n\nlong int: %d bytes.", ch_size, shi_size, i_size, li_size);

    printf("\n\nfloat: %d bytes.\n\ndouble: %d bytes.\n\nlong double: %d bytes.\n", fl_size, dbl_size, ldbl_size);

    printf("\n\n\nAlcance dos tipos:");

    printf("\n\n\nchar: %li a %li .\n\nshort int: %li a %li .", -range_ch, range_ch - 1, -range_shi, range_shi - 1);

    printf("\n\nint: %li a %li .\n\nlong int: %li a %li .", -range_i, range_i - 1, -range_li, range_li - 1);

    printf("\n\n\nfloat: %e  a  %e, com %d algarismos significativos.", FLT_MIN, FLT_MAX, FLT_DIG);

    printf("\n\ndouble: %e  a  %e, com %d algarismos significativos.", DBL_MIN, DBL_MAX, DBL_DIG);

    printf("\n\nlong double: %e  a  %e, com %d algarismos significativos.", LDBL_MIN, LDBL_MAX, LDBL_DIG);

    printf("\n\n\nResultado gravado no arquivo 'VarSizeOutput.txt'.\n\n");

    return 0;
}
