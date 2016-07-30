//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUNumberFormatStringUtilities)
+ (id)tsu_numberSymbols;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)tsu_isNumberFormatPattern;
@end

