import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;
import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;
import javax.swing.*;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;

public class OnlyForTest  {

    public static void main(String[] a) {

//        DeleteEventTab d=new DeleteEventTab();
//        d.DeleteEvent();

//        AddEventTab t=new AddEventTab();
//        t.AddEvent();

//        UpdateEventTab u=new UpdateEventTab();
//        u.UpdateEvent();

//        SQLiteMain m=new SQLiteMain("eventdb.sqlite");
//        m.ReadData();
//        m.printAllData();

//        DisplayEventTab d=new DisplayEventTab();
//        d.DisplayTab();

        EventSchedulerTab e=new EventSchedulerTab();
        e.EventScheduler();
        new ThreadEvents().start();
//
//        JFrame frame = new JFrame();
//        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//
//        Object rowData[][] = { { "Row1-Column1", "Row1-Column2", "Row1-Column3", "Row1-Column3" },
//                { "Row2-Column1", "Row2-Column2", "Row2-Column3", "Row2-Column3" } };
//        Object columnNames[] = { "Column One", "Column Two", "Column Three", "Column Four"};
//        JTable table = new JTable(rowData, columnNames);
//
//        JScrollPane scrollPane = new JScrollPane(table);
//        frame.add(scrollPane, BorderLayout.CENTER);
//        frame.setSize(400, 150);
//        frame.setVisible(true);
//    }

//    public static class GhostText implements FocusListener, DocumentListener, PropertyChangeListener {
//        private final JTextField textfield;
//        private boolean isEmpty;
//        private Color ghostColor;
//        private Color foregroundColor;
//        private final String ghostText;
//
//        protected GhostText(final JTextField textfield, String ghostText) {
//            super();
//            this.textfield = textfield;
//            this.ghostText = ghostText;
//            this.ghostColor = Color.LIGHT_GRAY;
//            textfield.addFocusListener(this);
//            registerListeners();
//            updateState();
//            if (!this.textfield.hasFocus()) {
//                focusLost(null);
//            }
//        }
//
//        public void delete() {
//            unregisterListeners();
//            textfield.removeFocusListener(this);
//        }
//
//        private void registerListeners() {
//            textfield.getDocument().addDocumentListener(this);
//            textfield.addPropertyChangeListener("foreground", this);
//        }
//
//        private void unregisterListeners() {
//            textfield.getDocument().removeDocumentListener(this);
//            textfield.removePropertyChangeListener("foreground", this);
//        }
//
//        public Color getGhostColor() {
//            return ghostColor;
//        }
//
//        public void setGhostColor(Color ghostColor) {
//            this.ghostColor = ghostColor;
//        }
//
//        private void updateState() {
//            isEmpty = textfield.getText().length() == 0;
//            foregroundColor = textfield.getForeground();
//        }
//
//        @Override
//        public void focusGained(FocusEvent e) {
//            if (isEmpty) {
//                unregisterListeners();
//                try {
//                    textfield.setText("");
//                    textfield.setForeground(foregroundColor);
//                } finally {
//                    registerListeners();
//                }
//            }
//
//        }
//
//        @Override
//        public void focusLost(FocusEvent e) {
//            if (isEmpty) {
//                unregisterListeners();
//                try {
//                    textfield.setText(ghostText);
//                    textfield.setForeground(ghostColor);
//                } finally {
//                    registerListeners();
//                }
//            }
//        }
//
//        @Override
//        public void propertyChange(PropertyChangeEvent evt) {
//            updateState();
//        }
//
//        @Override
//        public void changedUpdate(DocumentEvent e) {
//            updateState();
//        }
//
//        @Override
//        public void insertUpdate(DocumentEvent e) {
//            updateState();
//        }
//
//        @Override
//        public void removeUpdate(DocumentEvent e) {
//            updateState();
//        }
//
    }

//    public static void main(String[] args) {
//        SwingUtilities.invokeLater(new Runnable() {
//            @Override
//            public void run() {
//                init();
//            }
//        });
//    }

//    public static void init() {
//        JFrame frame = new JFrame("Test ghost text");
//        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        JPanel panel = new JPanel();
//        JTextField textField = new JTextField();
//        JButton button = new JButton("Grab focus");
//        GhostText ghostText = new GhostText(textField, "Please enter some text here...");
//        textField.setPreferredSize(new Dimension(300, 24));
//        panel.add(textField);
//        panel.add(button);
//        frame.add(panel);
//        frame.pack();
//        frame.setVisible(true);
//        button.grabFocus();
//    }
}