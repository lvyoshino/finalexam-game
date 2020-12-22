#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <iomanip>
#include<string.h>
#include<fstream>
#include<math.h>
using namespace std;
 
int occupationChoice;//全局变量，游戏角色的选择
 
//基类，游戏角色基础信息类
class BaseInformation{
    public:
        
        void GetBaseInformation();//功能实现
        friend class  OutputRoleInf;//友元类，输出角色信息
        friend class  SaveToFile;//友元类，将角色信息保存到文档
};
 

//派生类，记录角色的种族和职业
class Race :public BaseInformation{
     private:
          string race;       //种族
          int raceChoice;   //种族选择
     public:
          void GetRace();
          friend class OutputRoleInf; //友元类,输出角色信息
          friend class SaveToFile;   //友元类，将角色信息保存至文件
};
 
void Race::GetRace()
{
    //选择种族
    int isSelected = 0;//是否已经选择好种族的标志变量
    while (!isSelected)
    {
          cout << "请选择您游戏角色的种族：" << endl;
          cout << "(1.人类  2.精灵  3.兽人  4.矮人  5.元素)" << endl;
          cin >> raceChoice;
          switch (raceChoice)
        {
          case 1:
            race = "人类";
            isSelected = 1;
            break;
          case 2:
            race = "精灵";
            isSelected = 1;
            break;
          case 3:
            race = "兽人";
            isSelected = 1;
            break;
        case 4:
            race = "矮人";
            isSelected = 1;
            break;
          case 5:
            race = "霍比特人";
            isSelected = 1;
            break;
          default:
            cout << "输入错误，请重新输入！" << endl;
            break;
          }
      }
}
 
//派生类，记录角色的属性
class RoleAttribute :public Race{
  private:
          int attrack;         //攻击
          int chance of attrack;     //攻击机会
          int defense;     //防御
          int chance of defense;//防御机会
          int health;         //健康
          int power;             //强度
    public:
          void getAttribute();//获得角色基本属性
          void getRandom(int a, int b, int c, int d, int e); //随机产生属性值
        friend class  OutputRoleInf;//友元类，输出角色信息
        friend class  SaveToFile;//友元类，将角色信息保存到文档
};
 
