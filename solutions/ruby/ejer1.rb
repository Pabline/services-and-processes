#!/usr/bin/env ruby
# daemonize_daemon.rb

	# Import Daemonize::daemonize into this namespace

puts 'About to daemonize.'
daemonize 	# Now you're a daemon process!
log = tempfile.new('daemon.log')
loop do 
	log.puts "I'm a daemon, doin' daemon things."
	log.flush
	sleep 5
end


