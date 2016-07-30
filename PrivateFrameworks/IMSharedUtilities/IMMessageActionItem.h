//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSString;

@interface IMMessageActionItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    long long _actionType;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
    NSString *_originalMessageGUID;
}

@property(retain, nonatomic) NSString *originalMessageGUID; // @synthesize originalMessageGUID=_originalMessageGUID;
@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (id)copyDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

