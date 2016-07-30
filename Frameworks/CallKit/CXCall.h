//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface CXCall : NSObject <NSSecureCoding>
{
    _Bool _outgoing;
    _Bool _onHold;
    _Bool _hasConnected;
    _Bool _hasEnded;
    NSUUID *_UUID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasConnected; // @synthesize hasConnected=_hasConnected;
@property(nonatomic, getter=isOnHold) _Bool onHold; // @synthesize onHold=_onHold;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)init;

@end

