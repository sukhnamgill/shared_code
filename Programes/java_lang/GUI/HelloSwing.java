import javax.swing.*;

public class HelloSwing {
    public static void main(String[] args) {
        // Create a window (JFrame)
        JFrame frame = new JFrame("Hello Swing!");
        frame.setSize(300, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create a button
        JButton button = new JButton("button dabbo!");
        button.addActionListener(e -> JOptionPane.showMessageDialog(frame, "Sukhnam gill is best"));

        // Add button to frame
        frame.add(button);

        // Make it visible
        frame.setVisible(true);
    }
}
