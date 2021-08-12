#include "node.h"
#include "tree.h"
#include "Student.cpp"
int main(){
    setlocale(LC_ALL, "ru");
    Tree<int> intTree; 
    intTree << 8;
    intTree << 3;
    intTree << 10;
    intTree << 1;
    intTree << 6;
    intTree << 4;
    intTree << 7;
    intTree << 14;
    intTree << 13;
    cout << "все листья дерева" << endl;
    intTree.inorder_walk(intTree.get_root());
    cout << endl << endl;
    cout << "разделение дерева" << endl;
    intTree.inorder_walk(intTree/6);
    cout << "удаление элемента 7" << endl;
    intTree >> intTree.find_node(intTree.get_root(), 7);
    cout << endl;
    cout << "дерево после удаления" << endl;
    intTree.inorder_walk(intTree.get_root());
    
    
    cout << endl;
    cout << "Количество листьев в дереве" << endl;
    cout << intTree.operator int();
    cout << endl;
    cout << "максимальный элемент на уровне 2" << endl;
    cout << intTree(2)->get_data();
    cout << endl;
    cout << "поиск элемента с ключем 10" << endl;
    cout << intTree[10]->get_data();
    cout << endl;
    cout << "исключение" << endl;
    Tree<int> intTree1(intTree); 
    try {
        intTree >> intTree.find_node(intTree.get_root(), 26);
    }
    catch(NotFoundNodeExeption ex){
        cerr << ex.what() << endl;
    }
    
    cout << "проверка конструктора копирования" << endl;
    cout << endl << endl << endl;
    intTree1.inorder_walk(intTree1.get_root());
    cout << endl << endl << endl;
    
    Tree<double> dTree;
    dTree << 8.4;
    dTree << 3.3;
    dTree << 10.5;
    dTree << 1.56;
    dTree << 6.2;
    dTree << 4.76;
    dTree << 7.9;
    dTree << 14.4;
    dTree << 13.1;
    cout << endl << endl;
    cout << "все листья дерева дабл" << endl;
    dTree.inorder_walk(dTree.get_root());

    Tree<Student> sTree;
    Student s1(84,"Semenov");
    Student s2(33,"Bondarenko");
    Student s3(105,"Saenko");
    Student s4(15,"Tyrel");
    Student s5(62,"Snow");
    Student s6(47,"Stark");
    Student s7(79,"Barateon");
    Student s8(144,"Targarien");
    Student s9(131,"Marmont");
    sTree << s1;
    sTree << s2;
    sTree << s3;
    sTree << s4;
    sTree << s5;
    sTree << s6;
    sTree << s7;
    sTree << s8;
    sTree << s9;
    cout << "все листья дерева студенты" << endl;
    sTree.inorder_walk(sTree.get_root());
    cout << endl;
    cout << "удаление студента Баратеон" << endl;
    sTree >> sTree.find_node(sTree.get_root(), s7);
    sTree.inorder_walk(sTree.get_root());
}
