//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying>
{
    NSString *_authorName;
    NSString *_custodianName;
    NSData *_documentData;
    int _omittedContent;
    NSString *_patientName;
    HDCodableSample *_sample;
    NSString *_title;
    struct {
        unsigned int omittedContent:1;
    } _has;
}

@property(retain, nonatomic) NSString *custodianName; // @synthesize custodianName=_custodianName;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *patientName; // @synthesize patientName=_patientName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasCustodianName;
@property(readonly, nonatomic) _Bool hasAuthorName;
@property(readonly, nonatomic) _Bool hasPatientName;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasDocumentData;
@property(nonatomic) _Bool hasOmittedContent;
@property(nonatomic) int omittedContent; // @synthesize omittedContent=_omittedContent;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

