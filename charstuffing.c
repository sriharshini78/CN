#include <stdio.h>

void main()
{
    char ip_frame[100], op_frame[100];
    char flag, end, inter;
    int n, i, j = 0;

    printf("Enter the frame size: ");
    scanf("%d", &n);

    printf("Enter the input frame:\n");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &ip_frame[i]);
    }
    ip_frame[n] = '\0';

    printf("Enter the flag character:\n ");
    scanf(" %c", &flag);

    printf("Enter the intermediate character: \n");
    scanf(" %c", &inter);

    printf("Enter the end character: \n");
    scanf(" %c", &end);

    op_frame[j++] = flag;

    for (i = 0; i < n; i++)
    {
        if (ip_frame[i] == flag || ip_frame[i] == inter || ip_frame[i] == end)
        {
            op_frame[j++] = end;
        }
      op_frame[j++] = ip_frame[i];
    }

    op_frame[j++] = flag;
    op_frame[j] = '\0';

    printf("\nAfter Character Stuffing:\n");
    printf("%s\n", op_frame);
}
