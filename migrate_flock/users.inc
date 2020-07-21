<?php
class UsersMigration extends BasicMigration {
	public function __construct() {
		parent::__construct();
		$this->description = t('Users');
		
		$this->map = new MigrateSQLMap($this->machineName,
			array('uid' => array('type' => 'int', 'not null' => TRUE, 'description' => 'User ID.')),
			MigrateDestinationUser::getKeySchema()
		);
		
		$query = db_select('users', 'db', array('target' => 'old_flock'))
			->fields('db', array('uid', 'name', 'pass', 'mail', 'mode', 'sort', 'threshold', 'theme', 'signature', 
			'signature_format', 'created', 'access', 'login', 'status', 'timezone', 'language', 'picture', 'init', 'data'))
			->condition('db.uid',1,'>');
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));
		$this->destination = new MigrateDestinationUser();	

		$this->addFieldMapping('uid', 'uid');
		$this->addFieldMapping('is_new')->defaultValue(TRUE);
		$this->addFieldMapping('name', 'name');
		$this->addFieldMapping('pass', 'pass');
		$this->addFieldMapping('mail', 'mail');
		$this->addFieldMapping('signature', 'signature');
		$this->addFieldMapping('signature_format', 'signature_format');
		$this->addFieldMapping('created', 'created');
		$this->addFieldMapping('access', 'access');
		$this->addFieldMapping('login', 'login');
		$this->addFieldMapping('status', 'status');
		$this->addFieldMapping('timezone')
			->defaultValue('America/Chicago');
		$this->addFieldMapping('language', 'language');
		$this->addFieldMapping('init', 'init');
		
		$this->addFieldMapping('theme');
		$this->addFieldMapping(NULL, 'theme');
		
		$this->addFieldMapping('picture');
		$this->addFieldMapping(NULL, 'picture');
		
		$this->addFieldMapping(NULL, 'mode');
		$this->addFieldMapping(NULL, 'sort');
		$this->addFieldMapping(NULL, 'threshold');
		$this->addFieldMapping(NULL, 'data');
		$this->addFieldMapping(NULL, 'rid');
		
		$this->addFieldMapping('roles');
		$this->addFieldMapping('path');
		$this->addFieldMapping('pathauto_perform_alias')->defaultValue(0);
		
	}

	public function prepare(stdClass $destination, stdClass $source) { 
		if($source->rid) {
			$destination->roles = drupal_map_assoc(array($this->editor));
		}
	}
	public function complete(stdClass $destination, stdClass $source) { 
		require_once DRUPAL_ROOT . '/' . variable_get('password_inc', 'includes/password.inc');
		$old_hash = $source->pass;//md5('password');
		$hash_count_log2 = 11;
		
		$new_hash = user_hash_password($old_hash, $hash_count_log2);
		
		if ($new_hash) {
		  // Indicate an updated password.
		  $new_hash  = 'U' . $new_hash;
		}
	
		db_update('users')->fields(array('pass' => $new_hash))->condition('uid',$destination->uid,'=')->execute();
	}
	
	public function prepareRow($row) {
		if($row->uid == 0 or $row->uid == 1) {
			print "Skip user: " . $row->uid . "\r\n";
			return FALSE;
		}
		
		return TRUE;	
	}
}
/*
print "\033[32mGREEN\033[37m";
print "\033[31mRED\033[37m";
print "\033[41;30mBLACKonRED\033[40;37m";
*/