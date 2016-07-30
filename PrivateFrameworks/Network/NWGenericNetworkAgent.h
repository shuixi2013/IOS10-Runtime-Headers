//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription>
{
    struct netagent *_internalNetagent;
}

@property struct netagent *internalNetagent; // @synthesize internalNetagent=_internalNetagent;
- (_Bool)isNexusProvider;
@property(readonly, nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(readonly, nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(readonly, nonatomic, getter=isVoluntary) _Bool voluntary;
@property(readonly, nonatomic, getter=isUserActivated) _Bool userActivated;
@property(readonly, nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSUUID *agentUUID;
@property(readonly, nonatomic) NSString *agentDescription;
@property(readonly, nonatomic) NSString *agentType;
@property(readonly, nonatomic) NSString *agentDomain;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)dealloc;
- (id)initWithKernelAgent:(const struct netagent *)arg1;

@end

