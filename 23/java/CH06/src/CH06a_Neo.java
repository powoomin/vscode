public class CH06a_Neo {
    public static void main(String[] args) 
    {
        CH06a_Neo emoticon1 = new CH06a_Neo("Smile");
        CH06a_Neo emoticon2 = new CH06a_Neo("Angry");
        CH06a_Neo emoticon3 = new CH06a_Neo("Fighting");
        CH06a_Neo emoticon4 = new CH06a_Neo("Sad");
        CH06a_Neo emoticon5 = new CH06a_Neo("Happy");
        CH06a_Neo emoticon6 = new CH06a_Neo("Sleepy");

        System.out.println("The number of Emoticons: " + CH06a_Neo.gethowmany());
        emoticon1.emoticonStyle();
        emoticon2.emoticonStyle();
        emoticon3.emoticonStyle();
        emoticon4.emoticonStyle();
        emoticon5.emoticonStyle();
        emoticon6.emoticonStyle();
    }
}
