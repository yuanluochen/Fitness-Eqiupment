# 健身器材项目开发规划

## 项目简介

使用宇树关节电机和监测手换开发一款智能健身设备。

## 设备开发  

OS : ubuntu 22.04
编程语言 : cpp
语言版本 : cpp 17
ui框架 : QT 5.14.2
开发工具 qt creator VSCode git qmake
设备通信方式 串口通信 包含普通串口 RS-485
调用外部库: UnitreeMotor A1 G1官方SDK，含有x86_64和ARM

## 设备开发任务简介

使用监测手环读取人体心率，血氧饱和度，肌电信号，陀螺仪数据（包括三轴加速度，角加速度，eular angle，[手换官方文档](https://sichiray-tech.yuque.com/dm0eyv/chanpin/tisx58x4wb8fuu75)），该设备通过串口与设备通信，串口基本配置信息在**手环官方文档**中存在。

使用宇树电机作为健身直接的设备，打算采用宇树电机的力矩模式实现可调拉力健身，宇树电机还未真正了解，但是根据之前使用RoboMaster GM6020的经验可以实习阻尼效果，实现电机作为建设设备这一基本目标。电机自身可以检测**力矩、角度、角速度、角加速度、温度**,可以控制电机**力矩、角度、角速度、刚度、阻尼**，本工程预采宇树电机SDK进行继续开发，（主要不想写电机驱动，感觉太麻烦了）

计划使用树莓派Raspberry Pi作为控制中心，监测手环作为反馈设备读取健身过程中的运动数据，比如使用IMU在健身过程中判断身体是否抖动,如果抖动则电机停止运行保护用户安全。使用电机自带的力矩传感器器，读取当前力矩数据，根据反馈值调整阻尼或力矩。进行健身调控。

使用qt设计基本健身基本ui框架，(不要过度在意ui设计,项目功能实现才是核心)，ui设计需求,可以显示监测手环数据。可以让用户调控电机的参数。

## 开发任务

### UI

- [x] 设计基本的工程UI框架，内容包括，工程项目需要的基本页面（现计划设计3个页面，包括 **健身页面**、**健康管理页面**、**用户说明页面**。
- [x] 深化设计健身页面,深化实习功能为**健身设备链接**、**健身开始停止按钮**、**监测设备数据显示**,为其编写基本的回调函数。
- [ ] 深化设计健康管理页面，**该页面需要用户的、身高、体重、手环、健身历史数据**，该页面目标为
  - [ ] 获取用户个人数据。根据个人数据分析个人健康状态，简单来讲是算BMI(初期计划)
  - [ ] 显示历史健身健身数据,计划采用文件读写实习。运动完毕存放该次健身数据。然后该页面显示历史数据。(如果时间不够仅显示该次运动数据即可),**用一个图表显示，历史运动量，或者说运动次数，就是显示每次运动拉了多少次，直接显示历史数据即可**
  - [ ] 直接根据年龄以及手环数据分析，心率血氧是否正常。
- [ ] 设计用户说明页面，编写基本的使用说明书,纯文字即可

### 设备驱动

- [ ] 实现所有设备一键自动链接
  - [x] 编写基本的串口自动识别设备并连接函数。
  - [ ] 使用监测设备测试实现。
  - [ ] 电机设备实现

- [ ] 驱动健康监测设备，实现主控模块(即Raspbretty PI)流畅读取手环数据。
  - [x] 编写基本驱动程序
    - [x] 监测设备实现,健身用Qt串口库实习
    - [x] 电机实现，电机用官方sdk实现
  - [ ] 测试代码

### 开发拓展

如果时间充裕且代码稳定可以进行该部分的开发，开发内容如下。

- [ ] 实现多用户设计，可以进行用户的添加，用户健康管理

## 工程开发框图

[工程开发框图](./developer.drawio)

## 开发存在难点

- 现阶段电机开发存在一定难度，由于未真正使用过该电机开发项目，所以没有过大的把握能对该电机进行快速开发。现在开发难点在于没有真正搞清健身器材需要如何开发电机。
- 第一次使用qt库进行正式软件开发，需要进行适应学习。