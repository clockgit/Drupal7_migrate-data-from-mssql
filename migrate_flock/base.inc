<?php
$other_database = array(
    'driver' => "mysql",
    'database' => "flockgoosewinges",
    'username' => "removed",
    'password' => "removed",
    'host' => "removed",
  );

Database::addConnectionInfo('default', 'old_flock', $other_database);

$other_database2 = array(
	'database' => 'allGSMU',
	'username' => 'gsmu', // assuming this is necessary
	'password' => 'learn', // assuming this is necessary
	'host' => 'localhost', // assumes localhost
	'driver' => 'mysql', // replace with your database driver
);
Database::addConnectionInfo('default', 'gsmu', $other_database2);

abstract class BasicMigration extends Migration {
	public function __construct() {  
		parent::__construct();
		$this->team = array(
			new MigrateTeamMember('Chris Lock', 'chrisl@essdack.org', t('Implementor')),
			new MigrateTeamMember('John Jones', 'johnj@essdack.org',  t('Boss')),
		);
		$this->editor = db_query("SELECT rid FROM role WHERE name = :name", array(':name' => 'editor'))->fetchField();
	}
}