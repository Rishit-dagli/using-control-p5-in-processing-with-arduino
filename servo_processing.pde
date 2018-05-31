import controlP5.*;
ControlP5 cp5;
import processing.serial.*; 
Serial myPort;
void setup()
{
  size(800,800);
  cp5=new ControlP5(this);
  cp5.addButton("a").setValue(0).setPosition(100,100).setSize(200,200);
  cp5.addButton("b").setValue(0).setPosition(500,100).setSize(200,200);
  cp5.addButton("c").setValue(0).setPosition(100,400).setSize(200,200);
  cp5.addButton("d").setValue(0).setPosition(500,400).setSize(200,200);
 myPort=new Serial(this, "COM18", 9600);
}
void draw()
{
  background(0);
}
public void a()
{
  println("0");
  myPort.write("0");
}

public void b()
{
  println("90");
  myPort.write("1");
}
public void c()
{
  println("2");
  myPort.write("2");
}
public void d()
{
  println("90");
  myPort.write("3");
}