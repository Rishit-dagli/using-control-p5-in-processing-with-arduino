import controlP5.*;
ControlP5 cp5;
import processing.serial.*; 
Serial myPort;
void setup()
{
  size(800,700);
  cp5=new ControlP5(this);
  cp5.addButton("a").setValue(0).setPosition(350,100).setSize(100,10);
  cp5.addButton("b").setValue(0).setPosition(340,100).setSize(10,100);
  cp5.addButton("c").setValue(0).setPosition(450,100).setSize(10,100);
  cp5.addButton("d").setValue(0).setPosition(350,200).setSize(100,10);
  cp5.addButton("e").setValue(0).setPosition(340,200).setSize(10,100);
  cp5.addButton("f").setValue(0).setPosition(450,200).setSize(10,100);
  cp5.addButton("g").setValue(0).setPosition(340,300).setSize(120,10);
  cp5.addButton("dp").setValue(0).setPosition(470,300).setSize(10,10);
  myPort=new Serial(this, "COM18", 9600);
}
void draw()
{
  background(0);
}
public void a()
{
  println("a");
  myPort.write("a");
}

public void b()
{
  println("b");
  myPort.write("b");
}
public void c()
{
  println("c");
  myPort.write("c");
}
public void d()
{
  println("d");
  myPort.write("d");
}
public void e()
{
  println("e");
  myPort.write("e");
}

public void f()
{
  println("f");
  myPort.write("f");
}
public void g()
{
  println("g");
  myPort.write("g");
}
public void dp()
{
  println("dp");
  myPort.write("h");
}