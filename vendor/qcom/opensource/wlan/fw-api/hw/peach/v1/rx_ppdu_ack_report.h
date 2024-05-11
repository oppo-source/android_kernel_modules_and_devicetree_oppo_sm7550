/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef _RX_PPDU_ACK_REPORT_H_
#define _RX_PPDU_ACK_REPORT_H_

#include "ack_report.h"
#define NUM_OF_DWORDS_RX_PPDU_ACK_REPORT 1

struct rx_ppdu_ack_report {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   ack_report                                                ack_report_details;
#else
             struct   ack_report                                                ack_report_details;
#endif
};

#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SELFGEN_RESPONSE_REASON_OFFSET        0x00000000
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SELFGEN_RESPONSE_REASON_LSB           0
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SELFGEN_RESPONSE_REASON_MSB           3
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SELFGEN_RESPONSE_REASON_MASK          0x0000000f

#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_AX_TRIGGER_TYPE_OFFSET                0x00000000
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_AX_TRIGGER_TYPE_LSB                   4
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_AX_TRIGGER_TYPE_MSB                   7
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_AX_TRIGGER_TYPE_MASK                  0x000000f0

#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SR_PPDU_OFFSET                        0x00000000
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SR_PPDU_LSB                           8
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SR_PPDU_MSB                           8
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_SR_PPDU_MASK                          0x00000100

#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_RESERVED_OFFSET                       0x00000000
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_RESERVED_LSB                          9
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_RESERVED_MSB                          15
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_RESERVED_MASK                         0x0000fe00

#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_FRAME_CONTROL_OFFSET                  0x00000000
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_FRAME_CONTROL_LSB                     16
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_FRAME_CONTROL_MSB                     31
#define RX_PPDU_ACK_REPORT_ACK_REPORT_DETAILS_FRAME_CONTROL_MASK                    0xffff0000

#endif
