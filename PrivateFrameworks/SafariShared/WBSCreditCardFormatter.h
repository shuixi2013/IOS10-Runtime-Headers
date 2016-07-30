//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter
{
    _Bool _showLastFourDigits;
    _Bool _showCreditCardNumber;
    _Bool _allowsUnknownCardTypes;
}

@property(nonatomic) _Bool allowsUnknownCardTypes; // @synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes;
@property(nonatomic) _Bool showCreditCardNumber; // @synthesize showCreditCardNumber=_showCreditCardNumber;
@property(nonatomic) _Bool showLastFourDigits; // @synthesize showLastFourDigits=_showLastFourDigits;
- (struct _NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(struct _NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3;
- (struct _NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(struct _NSRange)arg2;
- (id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(_Bool)arg2;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;

@end

