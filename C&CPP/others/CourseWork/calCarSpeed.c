#include <stdio.h>
int main(){
    int l_start,l_end,h_start,m_start,s_start,h_end,m_end,s_end,h,m,s;
    printf("所有输入数据为整数\n开始里程？\n");
    scanf("%d",&l_start);
    printf("开始时间（时，分，秒）？\n");
    scanf("%d %d %d",&h_start,&m_start,&s_start);
    printf("结束里程？\n");
    scanf("%d",&l_end);
    printf("结束时间（时，分，秒）？\n");
    scanf("%d %d %d",&h_end,&m_end,&s_end);
    printf("汽车行驶了%d公里\n",l_end-l_start);
    int time=h_end*3600+m_end*60+s_end-h_start*3600-m_start*60-s_start;
    s=time%60;
    m=(time-s)%3600/60;
    h=(time-s-m*60)/3600;
    printf("消耗时间%d小时%d分%d秒\n",h,m,s);
    printf("平均速度：%8.4f公里/小时\n",(l_end-l_start)/(h+m/60.0+s/3600.0));
    return 0;
}