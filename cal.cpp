#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// 碳水和蛋白质配额查找函数
void get_ratios(char gender, double height_cm, double weight, double *carb_ratio, double *protein_ratio) {
    *carb_ratio = 0.0;
    *protein_ratio = 0.0;

    if (gender == 'm') {
        // 无力训男
        if (height_cm == 160) {
            if (weight == 60) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 65) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 70) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 75) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight == 80) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 85) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 90) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight >= 95 && weight <= 100) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight >= 105 && weight <= 110) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
            else if (weight == 115) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
            else if (weight == 120) { *carb_ratio = 1.9; *protein_ratio = 0.8; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 1.8; *protein_ratio = 0.8; }
        } else if (height_cm == 165) {
            if (weight == 65) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 70) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 75) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 80) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight == 85) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 90) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 95) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 100) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 105) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight >= 110 && weight <= 115 ) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 120) { *carb_ratio = 1.9; *protein_ratio = 0.8; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 1.9; *protein_ratio = 0.8; }
        } else if (height_cm == 170) {
            if (weight == 70) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 75) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 80) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 85) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 90) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight == 95) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 100) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 105) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 110) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 115) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 120) { *carb_ratio = 1.9; *protein_ratio = 0.8; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 1.9; *protein_ratio = 0.8; }
        }
          else if (height_cm == 175) {
            if (weight == 70) { *carb_ratio = 2.5; *protein_ratio = 1.1; }
            else if (weight == 75) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 80) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 85) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 90) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 95) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight == 100) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 105) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 110) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 115) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 120) { *carb_ratio = 2.0; *protein_ratio = 0.8; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 2.0; *protein_ratio = 0.8; }
        } else if (height_cm == 180) {
            if (weight == 75) { *carb_ratio = 2.5; *protein_ratio = 1.1; }
            else if (weight == 80) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 85) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 90) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 95) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 100) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 105) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight == 110) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 115) { *carb_ratio = 2.2; *protein_ratio = 0.9; }
            else if (weight == 120) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
        } else if (height_cm == 185) {
            if (weight == 85) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 90) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 95) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 100) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 105) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 110) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight >= 115 && weight <= 120) { *carb_ratio = 2.2; *protein_ratio = 1.0; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
        } else if (height_cm == 190) {
            if (weight == 85) { *carb_ratio = 2.5; *protein_ratio = 1.1; }
            else if (weight == 90) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 95) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 100) { *carb_ratio = 2.4; *protein_ratio = 1.0; }
            else if (weight == 105) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 110) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 115) { *carb_ratio = 2.3; *protein_ratio = 1.0; }
            else if (weight == 120) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight >= 125 && weight <= 130) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
        }
    } else if (gender == 'f') {
        // 无力训女
        if (height_cm == 150) {
            if (weight == 45) { *carb_ratio = 2.2; *protein_ratio = 1.1; }
            else if (weight == 50) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 55) { *carb_ratio = 2.1; *protein_ratio = 1.0; }
            else if (weight >= 60 && weight <= 65) { *carb_ratio = 2.0; *protein_ratio = 1.0; }
            else if (weight == 70) { *carb_ratio = 2.0; *protein_ratio = 1.0; }
            else if (weight >= 75 && weight <= 80) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight >= 85 && weight <= 100) { *carb_ratio = 1.9; *protein_ratio = 0.9; }
            else if (weight >= 105 && weight <= 110) { *carb_ratio = 1.8; *protein_ratio = 0.9; }
        } else if (height_cm == 155) {
            if (weight == 50) { *carb_ratio = 2.1; *protein_ratio = 0.9; }
            else if (weight == 55) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
            else if (weight == 60) { *carb_ratio = 2.0; *protein_ratio = 0.9; }
            else if (weight == 65) { *carb_ratio = 1.9; *protein_ratio = 0.9; }
            else if (weight == 70) { *carb_ratio = 1.9; *protein_ratio = 0.9; }
            else if (weight == 75) { *carb_ratio = 1.9; *protein_ratio = 0.9; }
            else if (weight == 80) { *carb_ratio = 1.8; *protein_ratio = 0.9; }
            else if (weight >= 85 && weight <= 90) { *carb_ratio = 1.8; *protein_ratio = 0.8; }
            else if (weight >= 95 && weight <= 100) { *carb_ratio = 1.8; *protein_ratio = 0.8; }
            else if (weight >= 105 && weight <= 110) { *carb_ratio = 1.8; *protein_ratio = 0.8; }
        } else if (height_cm == 160) {
            if (weight == 50) { *carb_ratio = 2.1; *protein_ratio = 1.2; }
            else if (weight == 55) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 60) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 65) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 70) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 75) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight == 80) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight == 85) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight >= 90 && weight <= 95) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight >= 100 && weight <= 105) { *carb_ratio = 1.8; *protein_ratio = 1.0; }
            else if (weight >= 110) { *carb_ratio = 1.8; *protein_ratio = 1.0; }
        } else if (height_cm == 165) {
            if (weight == 55) { *carb_ratio = 2.2; *protein_ratio = 1.2; }
            else if (weight == 60) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 65) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 70) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 75) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 80) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 85) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight >= 90 && weight <= 95) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight >= 100 && weight <= 105) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
            else if (weight >= 110) { *carb_ratio = 1.8; *protein_ratio = 1.0; }
        } else if (height_cm == 170) {
            if (weight == 60) { *carb_ratio = 2.2; *protein_ratio = 1.2; }
            else if (weight == 65) { *carb_ratio = 2.1; *protein_ratio = 1.2; }
            else if (weight == 70) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 75) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 80) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight == 85) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight >= 90 && weight <= 105) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight >= 110) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
        } else if (height_cm == 175) {
            if (weight == 60) { *carb_ratio = 2.3; *protein_ratio = 1.2; }
            else if (weight == 65) { *carb_ratio = 2.2; *protein_ratio = 1.2; }
            else if (weight == 70) { *carb_ratio = 2.2; *protein_ratio = 1.2; }
            else if (weight == 75) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 80) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight == 85) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight >= 90 && weight <= 100) { *carb_ratio = 2.0; *protein_ratio = 1.1; }
            else if (weight >= 105 && weight <= 110) { *carb_ratio = 1.9; *protein_ratio = 1.0; }
        } else if (height_cm == 180) {
            if (weight >= 65 && weight <= 70) { *carb_ratio = 2.3; *protein_ratio = 1.2; }
            else if (weight == 75) { *carb_ratio = 2.2; *protein_ratio = 1.2; }
            else if (weight == 80) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
            else if (weight >= 85 && weight <= 110) { *carb_ratio = 2.1; *protein_ratio = 1.1; }
        }
    }
}

void calculate() {
    char gender;
    double height_cm, weight, age;
    double c = 0; // 默认有氧消耗为0

    // 输入部分
    printf("请输入性别（m代表男，f代表女）: ");
    scanf(" %c", &gender);

    printf("请输入身高（厘米）: ");
    scanf("%lf", &height_cm);

    printf("请输入体重（kg）: ");
    scanf("%lf", &weight);

    printf("请输入年龄: ");
    scanf("%lf", &age);

    // 计算BMI
    double height_m = height_cm / 100.0;
    double bmi = weight / (height_m * height_m);

    // 计算基础代谢
    double a;
    if (gender == 'm') {
        a = weight * 9.99 + height_cm * 6.25 - age * 4.92 + 5;
    } else {
        a = weight * 9.99 + height_cm * 6.25 - age * 4.92 - 161;
    }

    // 热量计算
    double b = a / 0.7;
    double d = b + c;
    double e = d * 0.64;

    // 输出结果 - 基础计算
    printf("\n========== 计算结果 ==========\n");
    printf("BMI: %.2f\n", bmi);
     // 附加建议（根据输入参数自动生成）
    printf("\n建议：\n");
    if(bmi > 28) {
      printf("- 您当前BMI指数为肥胖，请重点关注饮食控制和适量运动。\n");
    }
    else if(bmi > 24) {
      printf("- 您当前BMI指数为超重，建议增加日常活动量，并适当控制饮食。\n");
    } else {
        printf("- 您的BMI指数正常, 请继续保持良好的饮食和运动习惯。\n");
    }
    printf("基础代谢: %.2f 大卡/天\n", a);
    printf("无运动总消耗: %.2f 大卡/天\n", b);
    printf("平衡热量: %.2f 大卡/天\n", d);
    printf("推荐摄入热量: %.2f 大卡/天\n", e);
    printf("==============================\n");
    // 调用函数获取碳水和蛋白质比例
    double carb_ratio, protein_ratio;
    get_ratios(gender, height_cm, weight, &carb_ratio, &protein_ratio);

    // 计算并输出碳水和蛋白质摄入量
    if (carb_ratio > 0.0 && protein_ratio > 0.0) {
        double carb_intake = carb_ratio * weight;
        double protein_intake = protein_ratio * weight;
        double fat_intake = (e - (carb_intake * 4.0 + protein_intake * 4.0)) / 9.0;


        printf("\n========== 营养素推荐摄入量 ==========\n");
        printf("碳水化合物: %.2f 克/天\n", carb_intake);
        printf("蛋白质: %.2f 克/天\n", protein_intake);
        printf("脂肪: %.2f 克/天\n(基于碳水%.2f克和蛋白质%.2f克计算得出,无需细算脂肪 按下面的文字指导来吃就行)\n", fat_intake, carb_intake, protein_intake);
        printf("蔬菜水果：按照下面文字指导来吃\n");
        printf("======================================\n");
        printf("- 这是一个初步的饮食建议，具体情况可能需要根据个人情况进行调整。\n");

        printf("\n========== 饮食建议 ==========\n");
        printf("早餐建议的碳水化合物摄入量为%.2f克，蛋白质摄入量为%.2f克。\n", carb_intake * 0.2, protein_intake * 0.2);
        
        printf("\n早餐碳水建议：\n");
        printf("1. 吐司面包/馒头花卷: %.2f 克\n", carb_intake * 0.2/0.5);
        printf("2. 速食燕麦片(干): %.2f 克\n", carb_intake * 0.2/0.6);
        printf("3. 燕麦麸皮: %.2f 克\n", carb_intake * 0.2/0.45);
        printf("4. 玉米/土豆: %.2f 克（是甜玉米 不是糯玉米）\n", carb_intake * 0.2/0.18);
        printf("5. 红薯: %.2f 克\n", carb_intake * 0.2/0.2);
        printf("6. 熟面条: %.2f 克（干面除以3）\n", carb_intake * 0.2/0.23);
        printf("7. 熟米饭(偏软): %.2f 克（生米除以2.5）\n", carb_intake * 0.2/0.25);
        printf("8. 米饭（一般）：%.2f克",carb_intake * 0.2/0.30);
        printf("9. 米饭（硬）：%.2f克",carb_intake * 0.2/0.35);
        printf("10. 挂面（生）: %.2f 克\n", carb_intake * 0.2 / 0.7);
        printf("11. 意面（生）: %.2f 克\n", carb_intake * 0.2 / 0.7);
        printf("12. 鲜面（生）: %.2f 克\n", carb_intake * 0.2 / 0.65);
        printf("13. 米粥: %.2f 克\n", carb_intake * 0.2 / 0.125);
        printf("14. 米线（湿）: %.2f 克\n", carb_intake * 0.2 / 0.33);
        printf("15. 米粉（干）: %.2f 克\n", carb_intake * 0.2 / 0.75);
        printf("16. 肠粉: %.2f 克\n", carb_intake * 0.2 / 0.20);

        printf("\n早餐蛋白建议：\n");
        printf("1. 鸡蛋+牛奶\n");
        printf("2. 鸡蛋\n");

        printf("**************************************\n");
        printf("鸡蛋与牛奶的数量建议：\n");
        printf("1.全蛋1个+牛奶一盒=全蛋2个+蛋白1个=15g蛋白质\n");
        printf("2.全蛋1个+牛奶一盒+蛋白1个=全蛋3个=18g蛋白质\n");
        printf("3.全蛋2个+牛奶一盒=全蛋3个+蛋白1个=21g蛋白质\n");
        printf("4.全蛋2个+牛奶一盒+蛋白1个=全蛋4个=24g蛋白质\n");
        printf("5.全蛋3个+牛奶一盒=全蛋4个+蛋白1个=27g蛋白质\n");
        printf("**************************************\n");

        printf("3. 熟瘦肉: %.2f 克（带油没事）\n", protein_intake * 0.2/0.2);
        printf("4. 蛋白粉: %.2f 克\n", protein_intake * 0.2);
        printf("* 鸡蛋可以是水煮蛋/茶叶蛋/鸡蛋羹，但不是油煎蛋\n");
        printf("* 脂肪摄入一个基本来源是早饭的蛋黄牛奶，如果你不吃蛋黄牛奶,会比推荐模式少吃约10-20g脂肪摄入，请全天补吃20g坚果或3个蛋黄\n");

        printf("午餐建议的碳水化合物摄入量为%.2f克，蛋白质摄入量为%.2f克。\n", carb_intake * 0.35, protein_intake * 0.3);

        printf("\n午餐碳水建议：\n");
        printf("1. 熟米饭(偏软): %.2f 克（生米除以2.5）\n", carb_intake * 0.35/0.25);
        printf("2. 米饭（一般）：%.2f克\n",carb_intake * 0.35/0.30);
        printf("3. 米饭（硬）：%.2f克\n",carb_intake * 0.35/0.35);
        printf("4. 熟面条: %.2f 克（干面除以3）\n", carb_intake * 0.35/0.23);
        printf("5. 吐司面包/馒头花卷: %.2f 克\n", carb_intake * 0.35/0.5);
        printf("6. 玉米/土豆: %.2f 克（是甜玉米 不是糯玉米）\n", carb_intake * 0.35/0.18);
        printf("7. 红薯: %.2f 克\n", carb_intake * 0.35/0.2);
        printf("8. 糯玉米: %.2f 克\n", carb_intake * 0.35/0.33);
        printf("9. 藕粉（干）: %.2f 克\n", carb_intake * 0.35/0.9);
        printf("10. 挂面（生）: %.2f 克\n", carb_intake * 0.35 / 0.7);
        printf("11. 意面（生）: %.2f 克\n", carb_intake * 0.35 / 0.7);
        printf("12. 鲜面（生）: %.2f 克\n", carb_intake * 0.35 / 0.65);
        printf("13. 米粥: %.2f 克\n", carb_intake * 0.35 / 0.125);
        printf("14. 米线（湿）: %.2f 克\n", carb_intake * 0.35 / 0.33);
        printf("15. 米粉（干）: %.2f 克\n", carb_intake * 0.35 / 0.75);
        printf("16. 肠粉: %.2f 克\n", carb_intake * 0.35 / 0.20);

        printf("\n午餐蛋白建议：\n");
        printf("1. 熟瘦肉: %.2f 克（带油没事）\n", protein_intake * 0.3/0.2);
        printf("* 脂肪摄入另一基本来源是带油菜的用油，如果你的正餐吃低油无油菜（卤肉、炖肉、清炒、清炖、轻食、水煮），会比推荐模式少吃约20g脂肪摄入，请全天补吃30g坚果或4个蛋黄\n");
        
        printf("晚餐建议的碳水化合物摄入量为%.2f克，蛋白质摄入量为%.2f克。\n", carb_intake * 0.35, protein_intake * 0.3);
        
        
        printf("\n晚餐碳水建议：\n");
        printf("1. 熟米饭(偏软): %.2f 克（生米除以2.5）\n", carb_intake * 0.35/0.25);
        printf("2. 米饭（一般）：%.2f克\n",carb_intake * 0.35/0.30);
        printf("3. 米饭（硬）：%.2f克\n",carb_intake * 0.35/0.35);
        printf("4. 熟面条: %.2f 克（干面除以3）\n", carb_intake * 0.35/0.23);
        printf("5. 吐司面包/馒头花卷: %.2f 克\n", carb_intake * 0.35/0.5);
        printf("6. 玉米/土豆: %.2f 克（是甜玉米 不是糯玉米）\n", carb_intake * 0.35/0.18);
        printf("7. 红薯: %.2f 克\n", carb_intake * 0.35/0.2);
        printf("8. 糯玉米: %.2f 克\n", carb_intake * 0.35/0.33);
        printf("9. 藕粉（干）: %.2f 克\n", carb_intake * 0.35/0.9);
        printf("10. 挂面（生）: %.2f 克\n", carb_intake * 0.35 / 0.7);
        printf("11. 意面（生）: %.2f 克\n", carb_intake * 0.35 / 0.7);
        printf("12. 鲜面（生）: %.2f 克\n", carb_intake * 0.35 / 0.65);
        printf("13. 米粥: %.2f 克\n", carb_intake * 0.35 / 0.125);
        printf("14. 米线（湿）: %.2f 克\n", carb_intake * 0.35 / 0.33);
        printf("15. 米粉（干）: %.2f 克\n", carb_intake * 0.35 / 0.75);
        printf("16. 肠粉: %.2f 克\n", carb_intake * 0.35 / 0.20);

        printf("\n晚餐蛋白建议：\n");
        printf("1. 熟瘦肉: %.2f 克（带油没事）\n", protein_intake * 0.3/0.2);
        printf("* 瘦肉脂肪率一般不超过5%%，基本只有：①没有白色黄色脂肪层的猪牛羊肉 ②去皮鸡鸭肉 ③鱼虾\n");
        printf("* 这些都不是瘦肉：鸡皮鸭皮、猪大排、糖醋里脊、锅包肉、烤肉、午餐肉、肥牛、肥羊、排骨、牛排、肉肠、肉饼、肉馅、肉丸\n");


        printf("零食夜宵建议的碳水化合物摄入量为%.2f克，蛋白质摄入量为%.2f克。\n", carb_intake * 0.1, protein_intake * 0.2);
        
        printf("\n零食夜宵碳水建议：\n");
        printf("1. 不吃碳水食物（水果、面包、奶茶、米面）\n");
        printf("2. 不吃糖油混合物（饼干、糕点、膨化食品）\n");
        printf("* 这10%%的碳水配额是用来抵扣本列未计入的牛奶、蔬菜、调料的碳水，所以不另外吃含碳水的食物了\n");
        

        printf("\n零食夜宵蛋白建议：\n");
        printf("1. 熟瘦肉: %.2f 克（带油没事）\n", protein_intake * 0.2/0.2);
        printf("2. 其他可选：乳制品、鸡蛋、蔬菜、无糖饮料\n");
        printf("* 你不吃零食夜宵也可以，就把这上面这点蛋白质配额给其他几餐，量其实很少的\n");

        printf("**************************************\n");
        printf("蔬菜水果的摄入量建议：\n");
        printf("蔬菜不限制↓\n");
        printf("【蔬菜不用定量】蔬菜碳水率很低，为免麻烦不用定量，争取每天都能吃一些\n");
        printf("* 吃蔬菜的顺序：一般各餐，先吃、多吃蔬菜，后吃碳水，能压制胰岛素，帮助减脂\n");
        printf("【这些不是蔬菜】红薯（20%%）、土豆（18%%）、玉米（18%%）、山药（13%%）、芋头（13%%）是碳水主食，括号数字是其碳水率\n");
        printf("——————————————————————————————————————\n");
        printf("水果必须置换主食↓\n");
        printf("【水果要算碳水】水果实质是糖水，糖量可观，糖是碳水的一种形式，所以要计入碳水量来置换碳水那列的主食\n");
        printf("* 苹果/橙子/香蕉：20-30g碳水/个；梨子/蓝莓/猕猴桃：碳水率14%%；柚子/桃子/葡萄/菠萝：碳水率10%%；西瓜/蜜瓜/草莓：碳水率7%%\n");
        printf("【置换主食的办法】吃水果的10g碳水=主食少吃30g熟米饭\n");
        printf("**************************************\n");

        printf("**************************************\n");
        printf("脂肪摄入量建议：\n");
        printf("【推荐模式】早饭吃左侧的蛋黄牛奶+正餐吃大众带油菜=脂肪摄入基本合适 :)\n");
        printf("* 所谓吃“大众带油菜”，就是像黄焖鸡、酸菜鱼、鱼香肉丝、小炒牛肉等家常瘦肉菜，不要害怕菜里的油，但必须是瘦肉，高脂肉会导致脂肪超标（下面讲了什么是瘦肉，什么是高脂肉）\n");
        printf("这种脂肪基本不吃↓\n");
        printf("【高脂肉】鸡鸭皮、大排、糖醋里脊、锅包肉、鸡翅、猪蹄、牛腩、牛排、排骨、烤肉、炸肉、午餐肉、肥牛、肥羊、肉肠、肉饼、肉馅、肉丸\n");
        printf("* 瘦肉只有：①没有白色脂肪层的猪牛羊肉  ②去皮的鸡鸭肉 ③鱼虾贝 ④肝肾肚血心\n");
        printf("【糖油混合物】饼干、蛋糕、点心、糕点、甜品、油条、煎饼、高脂面包、膨化食品等\n");
        printf("* 糖油混合物的脂肪率高达20-40%%，一次容易吃两三百克之多，只能偶尔吃点解馋\n");
        printf("【个别吸油菜】炒鸡蛋、炒茄子\n");
        printf("* 食堂外卖的宽油炒鸡蛋，每个鸡蛋的蛋白质只有6g，脂肪或高达20g以上，非常占据脂肪配额\n");
        printf("**************************************\n");

        printf("======================================\n");
        printf("如果有疑问，请输入help\n");
        printf("重点注意：\n");
        printf("脂肪配额有限 用来吃炒菜和蛋奶\n");
        printf("蔬菜任意吃 水果要算碳水\n");
    } else {
        printf("\n根据您输入的身高和体重，没有找到对应的碳水和蛋白质推荐比例。\n");
        printf("请检查您的输入，或者参考其他专业资料。\n");
    }
}

void help(){
    printf("\n========== 常见疑问 ==========\n");
    printf("问题列表：\n");
    printf("1. 执行了2周但体重不掉该怎么调整？\n");
    printf("2. 为什么减脂初期要定量饮食？\n");
    printf("3. 难道要一直称重吃饭？食物是生重还是熟重？\n");
    printf("4. 是否有一些固定重量的食物？\n");
    printf("5. 表格里哪些食物如果不定量会被严重错估？");
    printf("6. 哪些食物需要特别提醒？\n");
    printf("7. 吃外卖该怎么办？\n");
    printf("8. 食堂外卖的瘦肉量不够怎么办？\n");
    printf("9. 在外就餐怎么办？\n");
    printf("10. 减脂期需要吃放纵餐吗？\n");
    printf("11. 为什么喝酒对减脂的破坏很大？必须喝酒该怎么办？\n");
    printf("12. 大体重减脂下降10kg后该怎么调整饮食量？\n");
    printf("13. 改了力训时间该怎么修改力训日的餐序？\n");
    printf("14. 减脂期间感觉饿怎么办？\n");
    printf("15. 为什么减脂是否需要有氧取决于当前体重？\n");
    printf("16. 为什么低热量节食后用本方案体重会增加？\n");
    printf("17. 体脂称/体测仪的体脂和肌肉数据可信吗？\n");
    printf("18. 为什么两三天的体重变化没有意义？\n");
    printf("19. 为什么管理碳蛋脂后就不做16+8轻断食了？\n");
    printf("20. 高尿酸/痛风患者建议怎样处理饮食？\n");
    printf("21. 胰岛素抵抗/二型糖尿病患者建议怎么处理饮食？\n");
    printf("22. 为什么不要追求增肌减脂同时进行？\n");

    while(1){
        int help_input;
        printf("\n请输入问题编号查看答案，输入-1退出：");
        scanf("%d", &help_input);
        if(help_input == -1){
            break;
        }
        switch(help_input){
            case 1:
                printf("\n1. 执行了2周但体重不掉该怎么调整？\n");
                printf("表格设计的热量缺口已比较大了，如果体重2周不掉，首先要怀疑的不是表格设计的问题，而是表格执行的问题。常见的不能执行表格的原因：\n");
                printf("① 饮食初期不定量。出于各种原因（偷懒/不重视/觉得丢面子/在外就餐不方便等），在建立饮食模式的初期对食物不定量，而是以“吃到八分饱”、“荤素搭配”、“正常吃”之类的模糊标准去配餐。表格里碳水和蛋白质两列必须定量，只有脂肪不计算。\n");
                printf("② 用薄荷健康app错误记录食物。个人饮食方案已经帮你算出了食物重量，基本覆盖了生活里基础食物，强烈建议不要自己用薄荷app去计算应吃多少食物！薄荷app的混合物数据是错的，包括：多种原料混合制成的食物（XX菜肴、汉堡、三明治、牛肉面等）、肥瘦相间的肉类（本质是瘦肉和肥肉的混合物，烤肉、肥牛、肥羊、排骨、牛排、肉肠、肉饼、肉馅、肉丸等）。薄荷app里只有非混合物的单一食物的数据才是可用的，混合物必须拆分，比如“土豆烧牛肉”应该拆分为：①土豆②牛肉（瘦肉部分-碳水0 蛋白质率25%% 脂肪率3%%）③牛肉（肥肉部分-碳水0 蛋白质0 脂肪率90%%）④菜肴吃油5-10g。\n");
                printf("③ 脂肪摄入不足。故意追求“干净饮食”反而造成脂肪摄入不足，导致无法减脂。脂肪摄入的推荐模式：早饭吃蛋黄牛奶+正餐吃大众带油菜=脂肪摄入基本合适。早饭不吃蛋黄牛奶，或者正餐吃低油无油菜（卤肉、炖肉、清炒、清炖、轻食、水煮），就需要补脂肪。这些内容在表格里“脂肪”一列有详细的文字介绍。\n");
                printf("④ 脂肪摄入过量。要么不时吃高脂肉：鸡皮鸭皮、猪大排、糖醋里脊、锅包肉、炸鸡、烤肉、午餐肉、肥牛、肥羊、排骨、牛排、肉肠、肉饼、肉馅、肉丸。要么是不时吃糖油混合物：饼干、蛋糕、点心、糕点、甜品、油条、煎饼、高脂面包、膨化食品等。\n");
                printf("⑤ 方案里要做有氧但实际少做没做。方案里如果是要做有氧的，饮食量就会对应增加，比无有氧者吃得更多。如果你方案里是要做有氧的，但实际上偷懒了少做没做，就会热量缺口太小乃至没有。减脂确实不是必须有氧，但无有氧的话饮食量就会更低。\n");
                printf("⑥ 吃水果不置换主食。水果实质是糖水，碳水量可观，要算出碳水量来置换碳水那列的主食。特别是对于小体重人群，因为碳水总量本来就低，每天吃一两个水果而不置换主食的话，热量缺口就容易被抹平。表格里“水果”一列有详细的文字介绍。\n");
                printf("⑦ 经常在外就餐。在外就餐本质上不影响减脂，餐桌上摆的还是碳蛋脂，碳水量参考你既往的主食量来吃即可，瘦肉量可以比较随意，蔬菜随意。但很多人外食时忍不住要大吃高脂肉、糖油混合物，就容易抹平好几天的热量缺口。在外就餐指导请看问答9。\n");
                printf("⑧ 喝酒。酒的热量很高，1两白酒=1瓶啤酒=200大卡=50g碳水，5两白酒或5瓶啤酒热量就超过了一般人的全天碳水总量，全天不吃任何碳水都难以对冲这个热量，非常影响减脂。必须要喝酒的话，请看问答11。\n");
                printf("⑨ 擅自少吃多动。表格设计的热量缺口是在安全范围里已经很大的了。有人抱着“我还要更快减脂”的错误心理，违背表格，减少饮食量，或者增加有氧量，就会导致热量缺口过大，造成损害基础代谢的风险，反而无法减脂。\n");
                printf("⑩ 开始吃肌酸导致假性体重增加。如果减脂期正好又开始吃肌酸，1个月内大约能导致吸水1-2kg的体重增加，这期间体重没有降低，实际上也是降低了的。这种情况就不属于真正的“体重不掉”，继续等待观察即可。\n");
                printf("⑪ 增加碳水量导致假性体重增加。如果你之前的饮食，碳水量比我发的明显更少的话，那你在第一二周可能体重不会掉甚至会有上涨，因为突然加碳水后会导致肌糖原储备增加吸水，能导致体重完全不掉，甚至还增加一些。这种情况就不属于真正的“体重不掉”，继续等待观察即可。\n");
                printf("确认不存在上述问题后，才考虑是热量缺口不足的问题，办法是：要么每天比原食谱少吃150大卡（100g米饭+1个全蛋），要么参考配套的《有氧热量消耗》表每周多做1000大卡有氧（但不要加饮食）。这样再执行1-2周来看体重变化。再次强调，多数人其实不是表格设计有问题，而是无法执行表格，所以需要先检查上述问题！\n");
                break;
            case 2:
                printf("\n2. 为什么减脂初期要定量饮食？\n");
                printf("因为新手对日常食物的碳蛋脂量没有概念，按感觉吃饭大概率会导致碳蛋脂的总量严重错误。如果按感觉吃饭能八九不离十，那大家也不会有减肥问题了。我已经帮你把食物重量算好，食物品种也覆盖了日常大部分食物，你要做的唯一事情就是买个食物称，在初期（用几天到一周的时间）做定量饮食。建立饮食习惯后就不需要定量饮食了。\n");
                break;
            case 3:
                printf("\n3. 难道要一直称重吃饭？食物是生重还是熟重？\n");
                printf("我不是让你天天顿顿称，而是让你在初期（用几天到一周的时间）把你的常见食物重量弄清楚。\n");
                printf("①主食：定量简单，因为你的一碗饭、一个馒头、一个玉米等主食的重量是比较固定的，你只需要称一次就知道了。\n");
                printf("②鸡蛋牛奶：定量简单，因为表格是按个数/盒数来规定的，不需要称重。\n");
                printf("③瘦肉：相对麻烦，因为瘦肉往往是在炒菜里混合的，建议初期你把瘦肉菜先固定几个，不要换来换去，这样你比较好定量，逐渐培养出对瘦肉量的判断能力。\n");
                printf("生熟问题：米饭、面条的生熟重量差别很大，所以表格里生熟重量都写了，一定要分清；燕麦片、燕麦麸皮是指干重，不是指加水后的重量，因为每个人加水量是任意的；玉米、土豆、红薯的生熟重量差别很小，所以无需区分生熟。\n");
                break;
            case 4:
                printf("\n4. 是否有一些固定重量的食物？\n");
                printf("大部分食物不是全国统一重量的，仍需自己定量，比较固定重量的食物只有以下这些：\n");
                printf("【外卖米饭（长方形盒）】碳水100g/盒\n");
                printf("【外卖米饭（圆形扁盒）】碳水75g/盒\n");
                printf("【吐司切片面包】碳水25g/片\n");
                printf("【小鸡腿（去皮）】蛋白质15g/个\n");
                printf("【全鸡腿（去皮）】蛋白质40g/个\n");
                printf("【全鸭腿（去皮）】蛋白质20g/个\n");
                printf("【苹果/橙子/香蕉】20-30g碳水/个\n");
                printf("【蓝莓】15g碳水/盒\n");
                break;
            case 5:
                printf("\n5. 表格里哪些食物如果不定量会被严重错估？\n");
                printf("【面条】容易被低估。面条是饱腹感最低的主食之一，外面一碗面的碳水量一般高达80-160g，除非是饮食配额很高的大体重者，否则减脂期一般不考虑面条作为主食。如果确实爱吃，则必须定量，熟面条碳水率23%%，干面碳水率70%%。\n");
                printf("【炒菜瘦肉量】容易被高估。食堂外卖的一人份瘦肉炒菜，瘦肉量一般只有40-80g（蛋白质10-20g），牛肉、虾肉等昂贵的瘦肉会更少，所以切勿觉得正餐有一个瘦肉炒菜就蛋白质充足了（除非是体重很小的女性），可以增加瘦肉菜，或者增加小鸡腿、卤牛肉来增补蛋白质。\n");
                break;
            case 6:
                printf("\n6. 哪些食物需要特别提醒？\n");
                printf("【瘦肉】表格里是肉是指瘦肉，瘦肉的脂肪率一般低于5%%，基本只有：没有白色脂肪层的猪牛羊肉+去皮的鸡鸭肉+鱼虾+肝肾肚血。\n");
                printf("【高脂肉】鸡皮鸭皮、猪大排、糖醋里脊、锅包肉、炸鸡、烤肉、午餐肉、肥牛、肥羊、排骨、牛排、肉肠、肉饼、肉馅、肉丸。这些都不是瘦肉，脂肪率一般都不低于10%%，不能作为减脂期的日常食物。\n");
                printf("【面条/米线】减脂一般不作为常规主食，一碗的碳水量高达80-160g，一顿能吃很多但还感觉不出来。如果一定要吃，自己定量，熟面条碳水率23%%，干面碳水率70%%，熟米线碳水率33%%。\n");
                printf("【肉馅水饺】肉馅饺子不是米饭之类的纯碳水，而是碳水+五花肉，碳水和脂肪的比例起码是3:1，也有3:2的，作为一餐主食，会比吃纯碳水主食额外附赠一些脂肪20-40g脂肪摄入，比较占脂肪配额。大概数据：速冻水饺大小，每只碳水4g，蛋白质1g，脂肪1.5g。不建议作为基础碳水，只能偶尔可以。\n");
                printf("【肉包子】肉包子不是馒头，而是馒头+五花肉。一般不吃，换成馒头或者素包子。有肉包子的地方，一定有馒头或素包子，直接替换掉。\n");
                printf("【动物内脏】肝、肾、肚、血，是干净的蛋白质，等同于表格里的瘦肉；脑、舌，脂肪率较高，相当于轻度的五花肉，只能偶尔浅尝；肠，脂肪率很高，相当于五花肉，基本不吃。\n");
                printf("【汉堡】如果是鸡肉汉堡，相当于面包片+瘦肉，一般数据是碳水30g+，蛋白质20g+，脂肪20g+，偶尔可以吃吃（但缺点是饱腹感很低）；如果是牛肉汉堡，则脂肪量很高，所有肉饼一定是五花肉而非瘦肉，相当于面包片+五花肉，直接排除出食谱。各种汉堡的碳蛋脂数据可参考麦当劳官网的营养计算器。\n");
                printf("【煎蛋炒蛋】一个煎蛋是6g蛋白质，因为巨量吸油，脂肪量至少20g，能花掉一大笔脂肪配额，非常不划算，一般不吃。除非自己煎蛋，定量用3-5g油就能成功煎蛋。\n");
                printf("【糖油混合物】面粉+油制作的食物，一般碳水率30%%-50%%，脂肪率20%%-40%%。举例：饼干、蛋糕、点心、糕点、甜品、油条、煎饼、高脂面包、膨化食品等。如果要吃，只能用来解馋尝尝，要靠这些东西吃饱的话，脂肪摄入会爆炸。\n");
                printf("【水果】水果的实质是糖水（蔗糖/果糖/葡萄糖+水），要占据碳水配额。吃水果就是吃糖，要置换出主食的碳水出来，置换办法和数据见饮食表格指导。\n");
                break;
            case 7:
                printf("\n7. 吃外卖该怎么办？\n");
                printf("【正确的外卖】单独的主食+较多的瘦肉，这样才方便定量。外卖米饭，长方形盒碳水量90g/盒，圆形盒碳水量75g/盒，瘦肉量自己称重定一下看够不够，如果不够，考虑加一份肉，或者其他几餐多吃点蛋白质。建议先固定几家外卖，不要天天换来换去，以免定量麻烦。搜索关键词：跷脚牛肉、酸菜鱼、沙县、各种带“鸡”字的（黄焖鸡、蒸鸡、烤鸡、窑鸡、鸡腿等）。\n");
                printf("【错误的外卖】①缺乏瘦肉的外卖，比如面条、米线、盖饭；②混合餐外卖，比如轻食、健康餐，N种食物全部搅拌在一起，让你难以定量；③高脂肉外卖：以上一问答列出的高脂肉作为肉类的外卖，都不应作为日常食物，包括猪大排、糖醋里脊、锅包肉、炸鸡、烤肉、午餐肉、肥牛、肥羊、排骨、牛排、肉肠、肉饼、肉馅、肉丸等。\n");
                break;
            case 8:
                printf("\n8. 食堂外卖的瘦肉量不够怎么办？\n");
                printf("吃食堂外卖，碳水和脂肪都不会缺的，容易缺的是瘦肉。如果你只能找到一些高脂肉（饮食表格里“脂肪”那列红字举例了，那些是不能吃的），怎么补足蛋白质摄入呢？①电商的内蒙牛肉干或鸡肉干（注意碳水率不要超过10%%为宜），蛋白质率一般不低于40%%，电商肉干10g=表格里熟瘦肉20g；②电商即食鸡胸/牛肉（如果有微波炉，可以买泰森鸡胸肉条，不会像即食瘦肉那么干柴），每袋30g蛋白质；③蛋白粉，我B站橱窗有各种大小包装的，蛋白粉的蛋白质率高达75%%以上，蛋白粉10g=表格里熟瘦肉30g。\n");
                printf("但必须提醒，如果你因为吃上述这些无油肉/蛋白粉而不吃大众带油炒菜的话，则属于表格里【脂肪缺乏2】的情况，请参照表格指导来补充脂肪摄入。\n");
                break;
            case 9:
                printf("\n9. 在外就餐怎么办？\n");
                printf("在外就餐不影响减脂。在外就餐桌上摆的还是碳蛋脂，只是无法定量而已，影响不大。碳水量参考你既往的主食量来吃即可，瘦肉量可以比较随意，蔬菜随意。\n");
                printf("特别需要注意的就是少吃不吃【高脂肉】和【糖油混合物】。例如，吃火锅、烤肉就点店里最瘦的肉\n");
                break;
            case 10:
                printf("\n10. 减脂期需要吃放纵餐吗？\n");
                printf("我们的饮食方案，每餐都是主食（量还行）+你喜欢的瘦肉菜、蔬菜（什么菜系、做法都可以，只需要是瘦肉而非高脂肉），排除的食物就只有糖油混合物和高脂肉而已，所以就不痛苦，在如此宽松的饮食里，也不需要定期去“放纵”来“缓解痛苦”。在外就餐并不是“放纵”，主食量参考在家吃饭的量，比如你在家吃多大体积的米饭，你在外也吃那么多，不需要称量，大概即可；瘦肉菜随便吃，不限制，吃瘦肉不叫放纵；但一切高脂肉、糖油混合物（详见饮食表格里“脂肪”那列的红字举例的食物）基本不要碰，最多尝一口。不过，如果你的饮食习惯是，不吃高脂肉，不吃糖油混合物，就会陷入痛苦，那你确实可以定期去“放纵”吃这些，但因为热量确实高，不可避免会影响减脂，这件事就自己取舍了。\n");
                break;
            case 11:
                printf("\n11. 为什么喝酒对减脂的破坏很大？必须喝酒该怎么办？\n");
                printf("①酒的热量非常高！\n");
                printf("1两白酒（50g）热量：50g重量×50%%酒精率×7大卡/g=175大卡=44g碳水\n");
                printf("1瓶啤酒（600g）热量：600g重量×（4%%碳水率×4大卡/g+3%%酒精率×7大卡/g）=222大卡=56g碳水\n");
                printf("简单数据，1两白酒=1瓶啤酒=200大卡=50g碳水，当天五两白酒或五瓶啤酒热量就超过了一般人的全天碳水总量\n");
                printf("②喝酒该怎么办？\n");
                printf("如果你在找我做个人方案时已经自述和饮酒量，我就已经在方案里给你处理好了，你不用调整。具体调整办法是：先试算出自己的酒精热量，再用增加等量的有氧量去对冲。例如，每周需要喝白酒5两，当周就额外做有氧：5两×200大卡=1000大卡，有氧热量消耗参考配套的《氧热量消耗》表。一般不建议用减碳水的办法去对冲酒精热量，因为本表设计的碳水量不算多，用碳水量来扣减的话，碳水量会锐减，很可能低于人体需求的基本碳水量（除非你是体重超过100kg的大体重者，你的碳水总量本身很高，所以用来对冲一些酒精也无妨）。\n");
                break;
            case 12:
                printf("\n12. 大体重减脂下降10kg后该怎么调整饮食量？\n");
                printf("如果你体重下降10kg了还要继续减重，此时基础代谢跟随体重已大约下降了100多大卡，为了防止热量缺口被抹平，你要么每天比本食谱少吃50g米饭+1个全蛋，要么参考配套的《有氧热量消耗》表每周多做800大卡有氧（但不要加饮食）。\n");
                break;
            case 13:
                printf("\n13. 改了力训时间该怎么修改力训日的餐序？\n");
                printf("表格设计了四种进餐：早饭、练前餐、练后餐、其他餐，各自有配额，如果力训时间点改了，各餐换位置即可\n");
                printf("【早饭后练（早起版）】早饭（练前餐）-训练-练后餐-午饭（其他餐）-晚饭（其他餐）\n");
                printf("【早饭后练（晚起版）】早饭（练前餐）-训练-午饭（练后餐）-晚饭（其他餐）  *原本的练前餐配额分给其他几顿\n");
                printf("【午饭前练】早饭-练前餐-训练-午饭（练后餐）-晚饭（其他餐）\n");
                printf("【午饭后练】早饭-午饭（练前餐）-训练-练后餐-晚饭（其他餐）\n");
                printf("【晚饭前练】早饭-午饭（其他餐）-练前餐-训练-晚饭（练后餐）\n");
                printf("【晚饭后练】早饭-午饭（其他餐）-晚饭（练前餐）-训练-练后餐\n");
                printf("【晚饭后更晚练】早饭-午饭（其他餐）-晚饭（其他餐）-训练-练后餐  *各餐可以比较均摊，练后餐稍大一点即可\n");
                break;
            case 14:
                printf("\n14. 减脂期间感觉饿怎么办？\n");
                printf("①最重要的是选择高饱腹感主食。表格提供的可选主食里，尽量选择饱腹感高的：米饭、燕麦麸、燕麦片、土豆、红薯、玉米；饱腹感一般的：面包、馒头花卷；放弃饱腹感特低的主食：面条、米线。\n");
                printf("②多吃蔬菜。蔬菜能抗饿，除了力量训练的练后餐，其他任何各餐都是多吃、先吃蔬菜，既能压制胰岛素帮助减脂，又能帮助抗饿。\n");
                printf("③吃够瘦肉。各餐蛋白质配额都给得较高，请把瘦肉吃足，觉得饿还可以超出一点吃。很多人是正餐的蛋白质吃不足，餐间转向去吃低饱腹感的水果和零食，当然就会更饿。\n");
                printf("④用零食夜宵的配额来垫肚子。零食夜宵可以吃瘦肉、乳制品、鸡蛋、无糖饮料等。\n");
                printf("⑤增加一定有氧来换取碳水。有氧每消耗100大卡可以多吃25g碳水（约为80g米饭），有氧热量消耗参考饮食表格末尾的《每小时有氧的热量消耗》，但此法未必有用，因为有的人在做有氧后反而更饿，置换出的碳水还不够ta吃。\n");
                break;
            case 15:
                printf("\n15. 为什么减脂是否需要有氧取决于当前体重？\n");
                printf("体重决定基础代谢，基础代谢又是人体最主要的热量消耗。因此，体重越大，基础代谢就越高，热量消耗就越高，减脂期能吃的饮食热量就越高。如果全部热量缺口用饮食提供感觉太饿时，就应该加有氧来增加饮食热量，这样就能保持热量缺口不变的情况下，但饥饿度降低一些。\n");
                printf("体重>80kg者，他们基础代谢足够高，只靠饮食提供热量缺口，只要排除了低饱腹感高热量的食物（高脂肉、糖油混合物、面条米线等低饱腹感碳水），吃起来都不会饿的，所以不需要加有氧来增加饮食热量。特别是100kg以上的大体重者，只靠饮食提供热量缺口都绝对不会饿，加有氧反而会让饮食热量高到有点吃不下。\n");
                printf("体重70-80kg者，他们基础代谢一般，只靠饮食提供热量缺口，仍然是排除了低饱腹感高热量的食物（高脂肉、糖油混合物、面条米线等低饱腹感碳水），多数人吃起来也不太饿，因此不需要加有氧来让饮食多吃。但是也有部分人会觉得饿，则应该考虑加有氧来增加饮食热量，具体请看表格配套的《有氧的热量消耗》的指导。\n");
                printf("体重<70kg者，他们基础代谢比较低，只靠饮食提供热量缺口，即便是排除了低饱腹感高热量的食物（高脂肉、糖油混合物、面条米线等低饱腹感碳水），多数人也会有些饥饿感，因此默认需要做有氧来让饮食多吃。\n");
                printf("虽然“体重越大就越不需要有氧”是对的，但该如何划分体重区间则是经验性的，上述的70kg以下、70-80kg、80kg以上的划分是up主的一个经验划分，实际上，70kg以下也肯定够有少数的耐饿者，全靠饮食提供热量缺口都不觉得饿，因此就不需要有氧；80kg以上者也肯定够有少数的大胃王，全靠饮食提供热量缺口会觉得吃不饱，需要加有氧来增加饮食热量。对于这些例外人士，请看表格配套的《有氧的热量消耗》的指导来调节饮食热量即可，想多吃就加有氧，想少吃就减有氧。\n");
                break;
            case 16:
                printf("\n16. 为什么低热量节食后用本方案体重会增加？\n");
                printf("所谓“低热量节食”，是指每天饮食热量远低于基础代谢水平的饮食方式（本表热量设计已经够低，如果你之前吃得比本表还少得多，就属于此）。经历过低热量节食减肥的人群，肌糖原重量以及肌糖原的储水重量都比较低，再加上基础代谢可能有所损害，所以一旦恢复到正常碳水量和总热量的减脂饮食后，肌糖原重量以及肌糖原的储水重量都会提高，所以体重可能会在第一周不降反升。\n");
                printf("低热量节食群体必须接受这个过程，把肌糖原、储水、基础代谢都恢复到正常水平后，才能像普通人那样开始正常减脂。如果因为恐惧体重上升而不敢放弃节食，那是饮鸩止渴、自欺欺人的做法。\n");
                break;
            case 17:
                printf("\n17. 体脂称/体测仪的体脂和肌肉数据可信吗？\n");
                printf("不可信。体脂称/体测仪的数据只有体重有用，骨骼肌、体脂肪数据都不要当真。\n");
                printf("如果肌肉脂肪的变化量很小（比如几天几周的变化），体测仪的精度测不出来。如果肌肉脂肪的变化量够大（比如三五个月的变化），体测仪的数据确实会不同，但这时候你用体重、腰围、视觉变化也能明显看出来了，就不需要体测仪数据了。\n");
                printf("怎么判断是否真的在减脂？减脂就是看体重、腰围、视觉变化，只要体重、腰围在下降，别人觉得你在变瘦，那就一定是在减脂。当然，体重变化要以1-2周为周期来比较，三五天的体重变化无意义。\n");
                break;
            case 18:
                printf("\n18. 为什么两三天的体重变化没有意义？\n");
                printf("影响每日体重变化的因素：①未排出的食糜。食物消化排出需要1-4天，每天食物重量不同（比如某天吃得多、某天少吃一顿），会影响接下来数天的食糜重量，能显著改变体重；②人体脱水吸水。较低的盐分摄入能导致人体脱水掉体重，较高的盐分摄入能导致人体吸水长体重，每天吃盐量不同，就会影响体重；③脂肪的分解合成。这是大家关心的，但非常微弱，即便在正确减脂，每天脂肪分解量也不过三五十克，占全天体重变化的比例只有百分之几而已！\n");
                printf("既然即便在正确减脂，每天的脂肪分解量也只占体重波动的百分之几而已，所以根本不可能通过每天的体重变化来判断脂肪量变化的，两三天的体重比较也无法判断。必须持续积累，让脂肪分解量积累到足够多的时候，构成了这个周期里体重变化的主要部分时，体重变化才能代表脂肪量变化。\n");
                printf("所以，你可以经常称体重，但有意义的体重比较，应该用1-2周的变化来对比。两三天里体重增加了，不代表你增脂了，体重降低了，也不代表你减脂了。\n");
                break;
            case 19:
                printf("\n19. 为什么管理碳蛋脂后就不做16+8轻断食了？\n");
                printf("轻断食是对完全搞不清楚碳蛋脂的超级小白比较合适的一种办法。\n");
                printf("轻断食的优势是：操作极为简单，少吃一餐（一般是早饭）大概率就能降低全天20-30%%的热量摄入，只要保持其他两餐以及运动习惯和之前不变，就正好形成了20-30%%的合适热量缺口。相反，你让小白们去设置各餐的碳蛋脂的量去做20-30%%的热量缺口，就需要他们对碳蛋脂有基础知识，对各餐食物能定量饮食，他们是不会或者不愿意如此操作的。所以操作简单是轻断食最大的优势。\n");
                printf("轻断食的缺点是：①碳蛋脂的比例可能不合适，因为轻断食只减热量，不管热量的碳蛋脂构成；②热量缺口可能不合适，两餐的进食期吃的总热量可能太高（比如吃一些高脂肉或糖油混合物）或者过低（比如吃“自律健康餐”）。\n");
                printf("所以，轻断食适合的是完全搞不清楚碳蛋脂的超级小白，而对于能管理碳蛋脂的人来说（本方案就是给你管理碳蛋脂的），就不要用轻断食那种简单办法了，更精准有效。\n");
                break;
            case 20:
                printf("\n20. 高尿酸/痛风患者建议怎样处理饮食？\n");
                printf("蛋白质来源里鸡蛋、牛奶、蛋白粉是没嘌呤的，肉类里猪牛羊嘌呤较低，建议：①早饭吃鸡蛋牛奶，午饭晚饭吃瘦肉优先用嘌呤较少的牛肉，少用鸡肉、海鲜；②如果有蛋白粉，瘦肉可以减半，另一半蛋白质用蛋白粉；③大量喝水，每天达到2-3L；④控制果糖摄入，主要来源是水果和糖饮料；⑤严控啤酒白酒，尽量别喝；⑥定期复查，严重超标就遵医嘱吃药。\n");
                break;
            case 21:
                printf("\n21. 胰岛素抵抗/二型糖尿病患者建议怎么处理饮食？\n");
                printf("为了让血糖更加平缓：①在既定的总热量里，要把碳水总量给得稍低一点，蛋白质给得稍高一点，可以按普通人的配额表，把碳水让渡大概1-2成左右加给蛋白质，例如碳水减0.2g/kg，蛋白质加0.2g/kg。②主食请自己优先用几种易得的中GI碳水：燕麦麸皮、意面、蒸红薯、蒸土豆、蒸甜玉米（注意不是糯玉米）来提供（计算食物重量的营养率在视频23分10秒都写了的），确实没有的话也可以用米饭之类的快碳来提供（但请劣后选择）。其中早饭碳水吃燕麦麸皮是很推荐的，研究表明它超高的膳食纤维对改善二糖颇有效果（甜味剂可以用一点白糖/蜂蜜/酸奶等）。③很重要的是各餐一定要多吃、先吃蔬菜，再吃肉，最后吃主食，这样能有效地压制血糖。\n");
                break;
            case 22:
                printf("\n22. 为什么不要追求增肌减脂同时进行？\n");
                printf("增肌减脂确实可以同时进行，比如一个刚开始力训的新手，即便Ta用的是减脂饮食配额让体重下降，Ta的肌肉量仍然可能是略微增长的，但这种增肌量和用增肌饮食配额是不能比的。\n");
                printf("又如一个人把饮食热量设置在平衡位置，长期体重保持不变，那么Ta可能肌肉是极微弱增长的，脂肪是极微弱减少的，但这种增肌量和减脂量是和正常的增肌或减脂饮食配额没法比的。\n");
                printf("所以，这些“增肌减脂同时进行”的情况确实存在，但并不是大家希望的那样“增肌和减脂两头都同时最大化，用一倍的时间达成别人两倍时间的效果”，否则，健身就不需要分为“增肌期”和“减脂期”了，大家所有时间都应该是“增肌减脂同时进行期”。总之，该减脂就减脂，该增肌就增肌，而不用去想要“两头都要同时最大化”。\n");
                break;
            default:
                printf("没有这个问题\n");
                break;
        }
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char input[100];
    printf("####################\n");
    printf("欢迎使用减脂问答系统\n");
    printf("输入 'cal' 进入计算器\n");
    printf("输入 'help' 查看帮助\n");
    printf("输入 'exit' 退出系统\n");
    printf("####################\n");

    while (1) {
        printf(">>>(cal/help/exit): ");
        scanf("%s", input);

        if (strcmp(input, "cal") == 0) {
            calculate();
        } else if (strcmp(input, "help") == 0) {
            help();
        } else if (strcmp(input, "exit") == 0) {
            break;
        } else {
            printf("未知命令，请输入 'cal', 'help' 或 'exit'\n");
        }
    }

    return 0;
}

