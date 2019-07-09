/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode header for riscv.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2009 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef RISCV_OPC_H
#define RISCV_OPC_H

/* -- opc.h */
#undef  CGEN_DIS_HASH_SIZE
#define CGEN_DIS_HASH_SIZE 1
#undef  CGEN_DIS_HASH
#define CGEN_DIS_HASH(buffer, value) 0
/* -- */
/* Enum declaration for riscv instruction types.  */
typedef enum cgen_insn_type {
  RISCV_INSN_INVALID, RISCV_INSN_ADDI
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID RISCV_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) RISCV_INSN_ADDI + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_opcode;
  long f_rd;
  long f_funct3;
  long f_imm12_3112;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


#endif /* RISCV_OPC_H */
