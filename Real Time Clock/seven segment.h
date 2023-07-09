/*
 * seven segment.h
 *
 *  Created on: Jul 6, 2022
 *      Author: Ahmed Shiba
 */
#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_
void seven_seg_vinit(unsigned char port_name);
void seven_seg_write(unsigned char portname,unsigned char number);
#endif /* SEVEN SEGMENT_H_ */