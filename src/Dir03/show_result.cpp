#include "show_result.h"
#include <matplot/matplot.h>
#include <vector>
#include <cmath>
#include <thread>

void ShowResult::drawResult()
{
    using namespace matplot;

    // 1. 创建画布 (不需要 initgraph)                
    auto f = figure(true);
    f->size(1000, 1000); // 设置画布大小

    // 2. 绘制圆 1 (中心 (500, 500), 半径 200)                
    // 圆的参数方程: x = r*cos(t) + h, y = r*sin(t) + k
    std::vector<double> t = linspace(0, 2 * pi, 1000);
    std::vector<double> x1 = transform(t, [](double t) { return 200 * cos(t) + 500; });
    std::vector<double> y1 = transform(t, [](double t) { return 200 * sin(t) + 500; });
    
    auto p1 = plot(x1, y1);
    p1->line_width(4);
    p1->color("black");

    // 3. 绘制圆 2 (中心 (500, 500), 半径 400)                
    std::vector<double> x2 = transform(t, [](double t) { return 400 * cos(t) + 500; });
    std::vector<double> y2 = transform(t, [](double t) { return 400 * sin(t) + 500; });
    
    hold(on); // 保持画布，不覆盖之前的绘图
    auto p2 = plot(x2, y2);
    p2->line_width(4);
    p2->color("black");

    // 4. 设置轴
    axis({0, 1000, 0, 1000});
    axis(equal); // 保持 XY 轴比例一致，确保圆是圆的

    // 5. 显示结果 (替代 system("pause"))                
    save("result.png"); 

}