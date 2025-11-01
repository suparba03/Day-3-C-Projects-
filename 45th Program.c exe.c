#include <stdio.h>
int main()
{
    int total_cookies,cookies_per_box,boxes_per_container,total_boxes,total_containers,remaining_cookies,remaining_boxes;
    printf("Enter total no of cookies ");
    scanf("%d",&total_cookies);
    printf("Enter no of cookies in each box ");
    scanf("%d",&cookies_per_box);
    printf("Enter no of boxes in each container ");
    scanf("%d",&boxes_per_container);
    total_boxes=total_cookies/cookies_per_box;
    remaining_cookies=total_cookies%cookies_per_box;
    total_containers=total_boxes/boxes_per_container;
    remaining_boxes=total_boxes%boxes_per_container;
    printf("\nNumber of boxes needed %d ",total_boxes);
    printf("\nNumber of containers needed %d ",total_containers);
    printf("\nRemaining cookies(not in a box) %d ",remaining_cookies);
    printf("\nRemaining boxes(not in a container) %d ",remaining_boxes);
    return 0;
}
