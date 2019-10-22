    class Operation{  
     int data=50;  
      
     void change(int p){  
     data=data+p;//changes will be in the local variable only  
     }  
         
     public static void main(String args[]){  
       Operation op=new Operation();  
      
       System.out.println("before change "+op.data);  
       op.change(500);  
       System.out.println("after change "+op.data);  
      
     }  
    }  
