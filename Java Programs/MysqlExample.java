import java.sql.*;

// Notice, do not import com.mysql.jdbc.*
// or you will have problems!

public class MysqlExample {
    public static void main(String[] args) {
	Connection conn = null;
	Statement stmt = null;
	ResultSet rs = null;

        try {
            // The newInstance() call is a work around for some
            // broken Java implementations

	   // register MySQL Connector/J 
            Class.forName("com.mysql.jdbc.Driver").newInstance();
        } catch (Exception ex) {
            System.out.println("Failed to register MySQL Connector/J");
	    return;
        }

        try {
            conn = DriverManager.getConnection(
"jdbc:mysql://localhost/Profile", "root", "");
        } catch (SQLException ex) {
            // handle any errors
            System.out.println("SQLException: " + ex.getMessage());
            System.out.println("SQLState: " + ex.getSQLState());
            System.out.println("VendorError: " + ex.getErrorCode());
	    return;
        }
	
	try {
	    stmt = conn.createStatement();
            if( stmt.execute("SELECT * FROM Users")) {
		rs = stmt.getResultSet();
	    }
		// Now do something with the ResultSet ....
	    while (rs.next ())
	    {
		String name = rs.getString ("Name");
		String email = rs.getString("Email");
		String password = rs.getString("password");
		System.out.println (
		       "name = " + name
		       + ", email = " + email
		       + ", password = " + password);
	    }
	} catch (SQLException ex) {
		System.out.println("SQLException: " + ex.getMessage());
		return;
	} finally {
	        // it is a good idea to release
		// resources in a finally{} block
		// in reverse-order of their creation
		// if they are no-longer needed

		if (rs != null) {
		  try {
		    rs.close();
		  } catch (SQLException sqlEx) { /* ignore */ }
		  rs = null;
		}

		if (stmt != null) {
		  try {
		    stmt.close();
		  } catch (SQLException sqlEx) { /* ignore */ }
		  stmt = null;
		}
	}
    }
}