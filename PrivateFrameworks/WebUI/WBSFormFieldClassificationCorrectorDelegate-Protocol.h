//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSString, WBSFormAutoFillCorrectionManager, WBSFormFieldClassificationCorrector;

@protocol WBSFormFieldClassificationCorrectorDelegate <NSObject>
- (WBSFormAutoFillCorrectionManager *)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1;
- (NSString *)formFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1 bestAddressBookLabelForControlValue:(NSString *)arg2;
@end

