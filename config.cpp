#include "config.h"

config::config() {
	host = "127.0.0.1";
	port = 2710;
	max_connections = 512;
	max_read_buffer = 4096;
	timeout_interval = 20;
	schedule_interval = 3;
	max_middlemen = 5000;
	
	announce_interval = 1800;
	peers_timeout = 2700; //Announce interval * 1.5
	
	reap_peers_interval = 1800;
	
	mysql_db = "gazelle";
	mysql_host = "127.0.0.1:3306";
	mysql_username = "root";
	mysql_password = "";
	
	site_password="12345678901234567890123456789012"; // MUST BE 32 CHARS
}