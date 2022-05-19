#include "logger.hpp"

int main() {
	int x = 10;
	log_debug("Hello, %s!", "Logger");
	log_debug("x == %i; %b", x, true);
	log_error("Ooops! I broke something...");
	log_info("This is for your general information");
	log_warn("Tsunami approaching!");
	log_error("Run!!!!!!!!!!");
	return 0;
}