<?php
	foreach (glob('config/sections/*.inc') as $file) require_once($file);

	$data = array(
		'title'            => 'Emmanuel Massaquoi',
		'subtitle'         => 'Undergraduate student',
		'icon'             => 'assets/img/emmanuel.png',
		'headerBackground' => 'assets/img/background.jpg',
		'description'      => 'I am currently a undergraduate computer science student at <a href="https://www.boisestate.edu/" target="_blank" class="text-info">Boise State University</a>.',
		'sections'         => $sections,
		'socials' => array(
			array('url' => 'https://github.com/Maxxquoi','fa' => 'fa fa-github'),
			array('url' => 'https://www.linkedin.com/in/emmanuel-massaquoi-99155638/', 'fa' => 'fa fa-linkedin'),
		),
	);
?>