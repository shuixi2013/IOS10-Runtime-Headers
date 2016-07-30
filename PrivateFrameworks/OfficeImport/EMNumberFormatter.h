//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface EMNumberFormatter : NSObject
{
    struct __CFNumberFormatter *_genericFormatter;
    struct __CFNumberFormatter *_doubleFormatter;
    struct __CFNumberFormatter *_percentFormatter;
    struct __CFNumberFormatter *_bigNumberFormatter;
    struct __CFNumberFormatter *_smallNumberFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFDateFormatter *_dateFormatter;
    NSString *_excelFormatString;
    NSString *_baseICUFormatString;
    _Bool _isNegativeRed;
    unsigned short _currencySymbol;
    int _formatType;
}

+ (id)formatterForFormat:(id)arg1;
- (id)formatValue:(double)arg1 inWorkbook:(id)arg2;
- (void)_parseExcelFormatString:(id)arg1;
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;
- (void)convertGenericNumberFormat:(id)arg1;
- (id)formatDate:(id)arg1;
- (id)formatCurrency:(double)arg1;
- (id)formatDefault:(double)arg1;
- (id)formatPercent:(double)arg1;
- (id)formatDoubleValue:(double)arg1;
- (id)_icuFormatStringForCurrencyFormat;
- (id)formatFraction:(double)arg1;
- (id)formatPhoneNumber:(double)arg1;
- (id)_icuFormatStringForDateFormat;
- (_Bool)isNegativeRed;
- (int)formatType;
- (struct __CFNumberFormatter *)_currencyFormatter;
- (struct __CFDateFormatter *)_dateFormatter;
- (struct __CFNumberFormatter *)_percentFormatter;
- (struct __CFNumberFormatter *)_doubleFormatter;
- (struct __CFNumberFormatter *)_smallNumberFormatter;
- (struct __CFNumberFormatter *)_bigNumberFormatter;
- (struct __CFNumberFormatter *)_genericFormatter;
- (void)dealloc;
- (id)initWithDefaultFormatString;
- (id)initWithExcelFormatString:(id)arg1;

@end

