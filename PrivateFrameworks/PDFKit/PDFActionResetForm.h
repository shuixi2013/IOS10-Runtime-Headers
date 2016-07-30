//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/PDFAction.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying>
{
    PDFActionResetFormPrivateVars *_private2;
}

- (void).cxx_destruct;
- (id)toolTip;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary *)arg1;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(nonatomic) _Bool fieldsIncludedAreCleared;
@property(nonatomic) NSArray *fields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

