import javax.swing.table.AbstractTableModel;
import java.util.ArrayList;
import java.util.List;

public class FinalTableModel extends AbstractTableModel {

    private List<EventData> li = new ArrayList();
    private String[] columnNames = {"ID", "Event Title", "Event Time", "Event Date","Event Description"};

    public FinalTableModel(List<EventData> ls){
        this.li = ls;
    }

    @Override
    public String getColumnName(int columnIndex){
        return columnNames[columnIndex];
    }

    @Override
    public int getRowCount() {
        return li.size();
    }

    @Override
    public int getColumnCount() {
        return 5;
    }

    @Override
    public Object getValueAt(int rowIndex, int columnIndex) {
        EventData si = li.get(rowIndex);
        switch (columnIndex) {
            case 0:
                return String.valueOf(si.getId());
            case 1:
                return si.getTitle();
            case 2:
                return si.getTime();
            case 3:
                return si.getDate();
            case 4:
                return si.getDescription();
        }
        return null;
    }

    @Override
    public Class<?> getColumnClass(int columnIndex){
        switch (columnIndex){
            case 0:
                return String.class;
            case 1:
                return String.class;
            case 2:
                return String.class;
            case 3:
                return String.class;
            case 4:
                return String.class;
        }
        return null;
    }
}