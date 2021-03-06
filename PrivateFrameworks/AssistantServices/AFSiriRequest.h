//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding>
{
    NSString *_originatingAceID;
    NSUUID *_identifier;
    NSString *__refId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, setter=_setRefId:) NSString *_refId; // @synthesize _refId=__refId;
@property(copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID; // @synthesize _originatingAceID;
- (void).cxx_destruct;
- (_Bool)_makeAppFrontmost;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_identifier;
- (id)requestName;
- (id)_descriptionWithProperties:(id)arg1;
- (id)description;
- (id)init;
- (id)_initWithOriginatingAceID:(id)arg1;
- (id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2;
- (id)_af_analyticsContextDescription;

@end

