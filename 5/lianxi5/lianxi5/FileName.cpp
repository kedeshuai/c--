#include <iostream>
#include <string>


class CPU 
{
public:
	//抽象计算函数
    virtual void caloulate() = 0;
};
class VideoCard 
{
public:
    virtual void display() = 0;
};
class Memory 
{
public:
    //抽象存储函数
    virtual void storage() = 0;
};

class InterCPU : public CPU
{
public:
	void caloulate()
	{
		std::cout << "Inter CPU caloulate" << std::endl;
	}
};
class LenovoCPU : public CPU
{
public:
	void caloulate()
	{
		std::cout << "Lenovo CPU caloulate" << std::endl;
	}
};
class InterVideoCard : public VideoCard
{
public:
	void display()
	{
		std::cout << "Inter VideoCard display" << std::endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	void display()
	{
		std::cout << "Lenovo VideoCard display" << std::endl;
	}
};
class InterMemory : public Memory
{
public:
	void storage()
	{
		std::cout << "Inter Memory storage" << std::endl;
	}
};
class LenovoMemory : public Memory
{
public:
	void storage()
	{
		std::cout << "Lenovo Memory storage" << std::endl;
	}
};

class PC 
{
public:
	PC(CPU* cpu, VideoCard* videoCard, Memory* memory)
		:m_cpu{ cpu }, m_videoCard{ videoCard }, m_memory{ memory }
	{
		std::cout << "PC init" << std::endl;
	}
	~PC()
	{
		std::cout << "PC deinit" << std::endl;
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_videoCard != NULL)
		{
			delete m_videoCard;
			m_videoCard = NULL;
		}
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}
	void dowork()
	{
		m_cpu->caloulate();
		m_videoCard->display();
		m_memory->storage();
	}
private:
    CPU* m_cpu;
    VideoCard* m_videoCard;
    Memory* m_memory;
};

int main()
{
	PC* pc = new PC(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	pc->dowork();
	delete pc;
    return 0;
}