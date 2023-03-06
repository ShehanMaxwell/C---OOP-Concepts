class Shape {
  public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
  public:
    void draw() override {
        // implementation of draw() function for Circle
    }
};

class Square : public Shape {
  public:
    void draw() override {
        // implementation of draw() function for Square
    }
};

int main() {
    Shape* pShape = new Circle();
    pShape->draw();

    pShape = new Square();
    pShape->draw();

    delete pShape;
    return 0;
}