public class P5 {
    public static void main(String [] args){
        System.out.println("check domain name");
        String web="sukhnam.com";
        int indx=web.lastIndexOf(".");
        String holder;//=web.substring(indx);
        // System.out.println(indx);
        if (indx==-1){
            System.out.println("Please enter the valid domain name");
        }
        else if(indx!=-1){
            holder=web.substring(indx);
            //System.out.println("holder is "+holder);
            switch (holder){
                case ".in" ->System.out.println("India");
                case ".com" ->System.out.println("commercial website");
                case ".ca" ->System.out.println("canada website");
                case ".org" ->System.out.println("organisation website");

                default ->System.out.println("this is not in data");

            }


        }
    }
}
