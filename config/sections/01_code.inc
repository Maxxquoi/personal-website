<?php
	$sections['code'] = array(
		'title'            => 'Code',
		'type'             => 'blocks',
		'settings'         => array('class' => 'info', 'width' => 'col-sm-4'),
		'headerBackground' => 'assets/img/02-code.jpg',
		'icon'             => 'polymer',
		'content'          => array(
			array(
				'title'   => 'Singly and Doubly Linked List',
				'content' => '<p>Both linked list are node implementation of the IndexedUnsortedList interface with fully functional iterators. I created a test suite to ensure correct functionality of the linked lists and iterators.</p>
				              <ul>
				              	<li>Language: Java</li>
								<li>Source Code: <a href="https://github.com/Maxxquoi/CS221/tree/master/SinglyLinkedList" target="_blank" class="text-%class%">Singly Linked List</a></li>
								<li>Source Code: <a href="https://github.com/Maxxquoi/CS221/tree/master/DoublyLinkedList" target="_blank" class="text-%class%">Doubly Linked List</a></li>
				              </ul>',
			),
			array(
				'title'   => 'Identity Server and Client (Team Project)',
				'content' => '<p>We implemented a RMI based identity server. The client connect to the server and submit a new login name request. The server checks its database and responds back either with a Universally Unique ID(UUID) if the new 
				login id hasn&#039t been taken by anyone before or</p>
				              <ul>
				              	<li>Language: Java</li>
				              	<li>Source Code: <a href="https://github.com/Maxxquoi/CS455/tree/master/p3" target="_blank" class="text-%class%">Identity Server and Client</a></li>
				              </ul>',
			),
			array(
				'title'   => 'Shell Program',
				'content' => '<p></p>
				              <ul>
				              	<li>Language: C</li>
				              	<li>Source Code: <a href="https://github.com/Maxxquoi/CS453/tree/master/p3" target="_blank" class="text-%class%">Shell</a></li>
				              </ul>',
			),
		),
	);

?>