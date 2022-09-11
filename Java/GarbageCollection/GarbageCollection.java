class GarbageCollection {
    public void finalize() {
        System.out.println("garbage collection peformed");
    }

    public static void main(String[] args) {
        GarbageCollection obj1 = new GarbageCollection();
        System.gc();
        GarbageCollection obj2 = new GarbageCollection();
        GarbageCollection obj3 = new GarbageCollection();
        obj1.finalize();
        obj2.finalize();
        obj3.finalize();
    }
}