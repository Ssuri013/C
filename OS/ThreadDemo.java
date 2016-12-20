//import org.jsoup.*;

class RunnableDemo extends Thread {
   private String threadName;
   int x;
   RunnableDemo( String name,int y) {
      x = y;
      threadName = name;
      System.out.println("Creating " +  threadName );
   }

   public void run() {
      System.out.println("Running " +  threadName );
      try {
         for(int i = x; i > 0; i--) {
            System.out.println("Thread: " + threadName + ", " + i);
            // Let the thread sleep for a while.

         }
      }catch (InterruptedException e) {
         System.out.println("Thread " +  threadName + " interrupted.");
      }
      System.out.println("Thread " +  threadName + " exiting.");
   }

}



class ThreadDemo{

  public static void main(String[] args) {
    RunnableDemo t1 = new RunnableDemo("thread 1",8);
    RunnableDemo t2 = new RunnableDemo("thread 2",4);
    t1.start();
    t2.start();
    t1.isAlive();
    try{
  			t1.join();
        t2.join();

		}catch(InterruptedException ie){}

    System.out.println("finish");
      if(!t1.isAlive()){
        System.out.println("not alive");
      }

      
  }
}
