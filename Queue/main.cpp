#include "iostream"

using namespace std;

struct queue
{
	/** 
    * структура
    */
	queue *next;
	int value;  /*! численные данные*/
};

struct queue *_begin = 0; /*! блаблабла */
struct queue *_end = 0;

void set_queue( struct queue **_queue, int n )
{
	queue *present;
	for ( int i = 0; i < n; i++ ){
		present = (queue*)malloc(1*sizeof(queue));
		cout<< "Enter new integer element ";
		cin>> present->value;
		if ( i == 0 )
		{
			_begin = (*_queue) = present;
		}
		else 
		{
			(*_queue)->next = present;	/*! блаблабла */
			(*_queue) = present;
		}
	}
	_end = (*_queue);
}

void display_queue( struct queue _queue, int n ) /*! блаблабла */
{
	_queue = *_begin;
	cout<< "Display\n";
	for ( int i = 0; i < n; i++ ){
		cout<< _queue.value <<"\n";
		if ( _queue.next != _end->next )
			_queue = (*_queue.next);
	}
}
/** 
* структура
*/
void push( struct queue **_queue )	/*! блаблабла */
{
	(*_queue) = _end;
	queue *tmp = (queue*)malloc(1*sizeof(queue));
	cout<< "Enter integer value ";
	cin>> tmp->value;/*! сделай паузу, скушай твикс */
	cout <<"\n";
	(*_queue)->next = tmp;
	(*_queue) = tmp;
	_end = (*_queue);
}

void pop( struct queue **_queue )
{
	(*_queue) = _begin;
	_begin = (*_queue)->next;
	free(*_queue);
}

void display_first( )
{
	cout<<"\n value of first element "<< _begin->value<<"\n";
}


/** 
* это задание было не на полтора часа
*/

void main()
{
	int N;
	struct queue *_queue = 0;
	cout<< "Enter number of elements ";
	cin>> N;

	set_queue( &_queue, N );
	display_queue( *_queue, N );
	
	cout<< "If you want pop element then enter 1 \n";
	cout<< "If you want watch value of first then enter 2.\n";
	cout<< "If you want push then enter 3.\n Log out - 4\n\n";
	while (1)	//ещёблаблабла*/ 
	{
		int c;
		cin>> c;
		if ( c == 1 ){
			pop( &_queue );/*! сделай паузу, скушай твикс */
			N--;
		}
		if ( c == 3 )
		{
			push( &_queue );
			N++;
		}
		if ( c == 2 )
			display_first();
		if ( c == 4 )
			break;
		cout<<"\n\n";
		
	}
	display_queue ( *_queue, N );
	system("pause"); /*! сделай паузу, скушай твикс */
}
/** 
* это задание было не на полтора часа
*/
