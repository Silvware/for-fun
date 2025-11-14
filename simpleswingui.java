/*creator of this aberration
 * Silv-Ware. November 2025.*/
package uiproject;

/*on the online tutorials it is said that for creating GUI's on java 
 * its needed a library called swing.
 * this is stupid*/
import javax.swing.*; /*reminder: library to make windows "javax.swing"*/
class simpleswingui {
	public static void main(String args[]) {	
/*TODO: a frame container class so i can have a proper window.*/
  /*The frame is done, ngl i thought it would've been harder.*/
	  JFrame winframe = new JFrame("I'm a force'a'nature");
	    winframe.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	    winframe.setSize(300,300);
 /*Like you only need 3 lines to make an actual window frame, holy molly.*/
	  JButton butt = new JButton("Bonk!"); //"butt" is short for button.
	  JButton butt2 = new JButton("BoNK"); //"butt 2, the C-ql".
	  winframe.getContentPane().add(butt); //Adds the button to the frame
	  winframe.getContentPane().add(butt2); //same but butt 2
						//all of this is what is inside the window
	  winframe.setVisible(true);
  }	
}
