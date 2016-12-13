class BaseComponent
{
public:
	BaseComponent();
	virtual void update(GameObject& go) = 0;
};

class Component : public BaseComponent
{
public:
	Component();
	void update(GameObject& go)
	{
		// Code --
	}
};

class GameObject
{
private:
	BaseComponent * comp_;
public:
	GameObject(BaseComponent * comp) :comp_(comp) {}
	void update()
	{
		GameObject sender = *this;
		comp_->update(*this);
	}
};

int main()
{
	GameObject * go = new GameObject(new Component());

	go->update();

	return 0;
}