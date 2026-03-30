#include<iostream>
using namespace std;
class Point{
public:
	void setx(int x){
         m_x=x;
 	}
 	int getx(){
 		return m_x;
    }
    void sety(int y){
         m_y=y;
 	}
 	int gety(){
 		return m_y;
    }
private:
	int m_x;
	int m_y;
};
class circle{
public:
	void setr(int r){
		m_R=r;
	}
	int getr(){
		return m_R;
	}
	void setcenter(Point center){
		m_center=center;
	}
	Point getcenter(){
		return m_center;
	}
private:
	int m_R;
	Point m_center;

};
void relation(circle &c,Point &p){
	int a=(c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())+(c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
    int b=c.getr()*c.getr();
     if(a==b){
	cout<<"shang"<<endl;
     }
     if(a>b){
	cout<<"wai"<<endl;
     }
     if(a<b){
	cout<<"nei"<<endl;
     }
}
int main(){
	circle c;
	c.setr(10);
	Point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);
	Point p;
	p.setx(10);
	p.sety(10);
	relation(c,p);
	return 0;
}