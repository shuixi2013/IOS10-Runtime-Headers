//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSUNumberFormatting-Protocol.h>

@class NSArray, NSIndexSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>
{
    int mValueType;
    NSString *mFormatString;
    unsigned short mDecimalPlaces;
    NSString *mCurrencyCode;
    _Bool mUseAccountingStyle;
    int mNegativeStyle;
    _Bool mShowThousandsSeparator;
    int mFractionAccuracy;
    _Bool mFormatStringRequiresSuppressionOfMinusSign;
    _Bool mUseScientificFormattingAutomatically;
    _Bool mIgnoreDecimalPlacesForZeroValue;
    NSString *mPrefixString;
    NSString *mSuffixString;
    unsigned char mBase;
    unsigned short mBasePlaces;
    _Bool mBaseUseMinusSign;
    _Bool mIsCustom;
    double mScaleFactor;
    _Bool mFormatStringContainsTabCharacter;
    _Bool mFormatContainsSpecialTokens;
    _Bool mFormatContainsIntegerToken;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    _Bool mRequiresFractionReplacement;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    _Bool mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    NSString *mFormatName;
    NSUUID *mCustomFormatKey;
}

+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(_Bool)arg14 isCustom:(_Bool)arg15 formatName:(id)arg16;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8;
+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
+ (id)numberFormatFromFormatStruct:(CDStruct_28403e59)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)customNumberFormatTokens;
- (_Bool)isEquivalent:(id)arg1;
- (id)stringFromString:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 forceSuppressMinusSign:(_Bool)arg5;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(_Bool)arg4;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 forceSuppressMinusSign:(_Bool)arg3;
- (_Bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (_Bool)usesTabs;
- (void)setIgnoreDecimalPlacesForZeroValue:(_Bool)arg1;
- (_Bool)ignoreDecimalPlacesForZeroValue;
- (void)setUseScientificFormattingAutomatically:(_Bool)arg1;
- (_Bool)useScientificFormattingAutomatically;
- (_Bool)customFormatShouldAutoInsertPercentSymbol;
- (_Bool)hasValidDecimalPlaces;
- (_Bool)baseUseMinusSign;
- (unsigned short)basePlaces;
- (unsigned short)base;
- (_Bool)usesTextFormatForValue:(double)arg1;
- (_Bool)canFormatText;
- (_Bool)isTextFormat;
- (double)scaleFactor;
- (_Bool)usesAccountingStyle;
- (int)fractionAccuracy;
- (_Bool)showThousandsSeparator;
- (int)negativeStyle;
- (id)currencyCode;
- (id)formatString;
- (id)suffixString;
- (id)prefixString;
- (unsigned short)decimalPlaces;
- (int)valueType;
- (id)customFormatKey;
- (_Bool)isCustom;
- (id)formatName;
- (void)setFormatName:(id)arg1;
- (void)dealloc;
- (id)numberFormatBySettingUseAccountingStyle:(_Bool)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(_Bool)arg14 isCustom:(_Bool)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(_Bool)arg23 formatName:(id)arg24 customFormatKey:(id)arg25;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 isCustom:(_Bool)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(_Bool)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8;
- (id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(_Bool)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(_Bool)arg13 formatName:(id)arg14;
- (id)init;
- (id)baseStringFromDouble:(double)arg1;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (CDStruct_28403e59)formatStructAndCustomFormatData:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

