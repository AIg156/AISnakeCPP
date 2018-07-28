#pragma once
#include <queue>
using std::queue;

typedef struct
{
	int x;
	int y;
}COORDINATE;

class FindPathBFS
{
private:
	bool **m_chess;//�þ����ʾ��ͼ.m_chess��һ����ά����,����false��ʾͨ·,true��ʾ��ͨ
	bool **m_visit;//�ڵ��Ƿ񱻷��ʹ�
	COORDINATE **m_parent;//ÿ�����ʹ��Ľڵ�ĸ��ڵ�.
	COORDINATE m_size;//ͼ�Ĵ�С.
	void FindPath(COORDINATE begin_point, COORDINATE end_point);
	void GetQueue(COORDINATE end_point);

public:
	FindPathBFS();
	
	~FindPathBFS();

	void InitMap(bool **chess);
	void GetPath(COORDINATE begin_point, COORDINATE end_point);

	queue<COORDINATE> m_paths_queue;

};

