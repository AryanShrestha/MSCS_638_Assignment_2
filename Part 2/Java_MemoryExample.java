public class Java_MemoryExample {
    public static void main(String[] args) throws InterruptedException {
        Thread.sleep(10000);
        
        for (int i = 0; i < 10000000; i++) {
            new Java_MemoryExample();
            System.out.println(i);
            Thread.sleep(10);
        }
        System.out.println("Created large array.");
        // Memory is freed automatically when not used
    }
}