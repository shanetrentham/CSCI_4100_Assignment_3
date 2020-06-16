/* YOUR NAME HERE
 * CSCI 4100
 * Assignment 3
 * Source file for bounded buffer implementation
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "bbuff.h"

/* Initiailze a message structure */
void bb_init_msg(struct bb_msg *msg, int t_id, int m_id) {
  msg->t_id = t_id;
  msg->m_id = m_id;
}

/* Copy the source message to the destination message */
void bb_copy_msg(struct bb_msg * source, struct bb_msg * destination) {
  source->m_id = destination->m_id;
  source->t_id = destination->t_id;
}

/* Display the contents of a message along with the id of the receiver */
void bb_display_msg(struct bb_msg *msg, int receiver) {
  printf("message %d, recieving thread %d", msg->m_id, receiver);
}

/* Initialize the bounded buffer */
void bb_init(struct bbuff * buffer) {
  buffer->in = 0;
  buffer->out = 0;
  buffer->lock = pthread_mutex_init(&my_lock, NULL);
}

/* Send a message to a bounded buffer */
void bb_send(struct bbuff * buffer, struct bb_msg * message) {
  pthread_mutex_lock(&my_lock);
}

/* Receive a message from a bounded buffer */
void bb_receive(struct bbuff *buffer, struct bb_msg * message) {
  /* YOUR CODE HERE */
}
