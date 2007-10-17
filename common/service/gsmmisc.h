/* (c) 2001-2005 by Marcin Wiacek, Walek and Michal Cihar */

#ifndef __gsm_misc_h
#define __gsm_misc_h

#include <gammu-file.h>
#include <gammu-info.h>

/**
 * Resets all members of GSM_BatteryCharge structure.
 */
void GSM_ClearBatteryCharge(GSM_BatteryCharge *bat);


bool ReadVCALDateTime(const char *Buffer, GSM_DateTime *dt);
void SaveVCALDateTime(char *Buffer, size_t *Length, GSM_DateTime *Date, char *Start);

bool ReadVCALDate(char *Buffer, char *Start, GSM_DateTime *Date, bool *is_date_only);
void SaveVCALDate(char *Buffer, size_t *Length, GSM_DateTime *Date, char *Start);

/**
 * Stores text in vCalendar/vCard formatted buffer.
 *
 * \param Buffer Buffer where output will be stored.
 * \param Length Current position in output buffer (will be updated).
 * \param Text Value to be stored.
 * \param Start Name of field which is being stored.
 * \param UTF8 Whether text should be stored in UTF-8 without prefix.
 */
void SaveVCALText(char *Buffer, size_t *Length, unsigned char *Text, char *Start, bool UTF8);

/**
 * Reads text for vCalendar/vCard formatted line.
 *
 * \todo We should try to detect utf-8 and automatically use it.
 *
 * \param Buffer Buffer with input data.
 * \param Start Start expression of line.
 * \param Value Storage for value.
 * \param UTF8 Whether string should be treated as utf-8.
 */
bool ReadVCALText(char *Buffer, char *Start, unsigned char *Value, bool UTF8);

bool ReadVCALInt(char *Buffer, char *Start, int *Value);

unsigned char *VCALGetTextPart(unsigned char *Buff, int *pos);

#endif

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */
