import java.sql.*;

public class JDBCExample{

		// JDBC driver name and database url
		static final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
		static final String DB_URL = "jdbc:mysql://localhost/shankar";

		// Database credential
		static final String USER = "root";
		static final String PASS = "";

	public static void main(String args[]){

		Connection conn = null;
		Statement stmt = null;

		try{
			// Registering JDBC that loads its driver in RAM 
			Class.forName("com.mysql.jdbc.Driver").newInstance();

			// Opening a connection 
			System.out.println("Connecting to database...");
			conn = DriverManager.getConnection(DB_URL, USER, PASS);

			System.out.println("Creating a statment ....");
			stmt = conn.createStatement();
			String sql ;
			sql = "SELECT * FROM details";
			boolean res = stmt.execute(sql);
			ResultSet rs = stmt.executeQuery(sql);

			while( rs.next()){
				System.out.print("Name: " + rs.getString("name") + "Email: " + rs.getString("email") + "Roll no.: " + rs.getInt("roll_no"));
				System.out.println("");
			}
		} catch( Exception e){
			e.printStackTrace();
		}
	}
}
