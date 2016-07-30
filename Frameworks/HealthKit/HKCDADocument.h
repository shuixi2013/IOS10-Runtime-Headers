//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HKCDADocument : NSObject
{
    NSData *_internalDocumentData;
    NSData *_compressedDocumentData;
    NSString *_title;
    NSString *_patientName;
    NSString *_authorName;
    NSString *_custodianName;
}

@property(readonly, copy) NSString *custodianName; // @synthesize custodianName=_custodianName;
@property(readonly, copy) NSString *authorName; // @synthesize authorName=_authorName;
@property(readonly, copy) NSString *patientName; // @synthesize patientName=_patientName;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)_descriptionFieldTitle:(id)arg1 content:(id)arg2 maxSize:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1 omittedContentFlags:(long long)arg2;
- (_Bool)_decompressDocumentDataForDelivery:(id *)arg1;
- (_Bool)_compressDocumentDataForTransfer:(id *)arg1;
- (id)_validateConfiguration;
- (id)_compressedDocumentData;
@property(readonly, copy) NSData *documentData;
- (id)initWithCoder:(id)arg1 omittedContentFlags:(long long)arg2;
- (id)initWithDocumentData:(id)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6;

@end

