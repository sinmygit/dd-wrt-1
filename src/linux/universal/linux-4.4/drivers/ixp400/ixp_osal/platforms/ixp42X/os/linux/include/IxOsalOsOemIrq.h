/**
 * @file IxOsalOsOemIrq.h
 *
 * @brief Defining IXP425 IRQ vector name in an array for retrieval by private
 * function ixOsalGetIrqNameByVector implemented in IxOsalOsServices.c.
 *
 *
 * @par
 * IXP400 SW Release version 2.4
 * 
 * -- Copyright Notice --
 * 
 * @par
 * Copyright (c) 2001-2007, Intel Corporation.
 * All rights reserved.
 * 
 * @par
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Intel Corporation nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 * 
 * 
 * @par
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * 
 * @par
 * -- End of Copyright Notice --
 */

#ifndef IxOsalOsOemIrq_H
#define IxOsalOsOemIrq_H

/*
 * IRQ name definition.
 */
const char *irq_name[] = {
    "IXP4XX NPE-A",	/* IRQ 0 */
    "IXP4XX NPE-B",
    "IXP4XX NPE-C",
    "IXP4XX QM1",
    "IXP4XX QM2",
    "IXP4XX TIMER1",
    "IXP4XX GPIO0",
    "IXP4XX GPIO1",
    "IXP4XX PCI",
    "IXP4XX PCI DMA1",
    "IXP4XX PCI DMA2",	/* IRQ 10 */
    "IXP4XX TIMER2",
    "IXP4XX USB",
    "IXP4XX UART2",
    "IXP4XX TIMESTAMP",
    "IXP4XX UART1",
    "IXP4XX WATCHDOG",
    "IXP4XX AHB PMU",
    "IXP4XX XSCALE PMU",
    "IXP4XX GPIO2",
    "IXP4XX GPIO3",	/* IRQ 20 */
    "IXP4XX GPIO4",
    "IXP4XX GPIO5",
    "IXP4XX GPIO6",
    "IXP4XX GPIO7",
    "IXP4XX GPIO8",
    "IXP4XX GPIO9",
    "IXP4XX GPIO10",
    "IXP4XX GPIO11",
    "IXP4XX GPIO12",	/* IRQ 30 */
    "IXP4XX SW1",
    "IXP4XX SW2"
};

/*
 * String to return when the vector number is invalid.
 */
const char *invalid_irq_name = "Invalid IXP42X IRQ";

#endif /* IxOsalOsOemIrq_H */
