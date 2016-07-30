//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;

@interface NWNetworkAgentRegistration : NSObject
{
    int _registrationSocket;
    Class _networkAgentClass;
    NSObject<NWNetworkAgent> *_networkAgent;
    NSUUID *_registeredUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
}

+ (_Bool)removeActiveAssertionFromNetworkAgent:(id)arg1;
+ (_Bool)addActiveAssertionToNetworkAgent:(id)arg1;
+ (int)newRegistrationFileDescriptor;
@property(retain) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int registrationSocket; // @synthesize registrationSocket=_registrationSocket;
@property(retain) NSUUID *registeredUUID; // @synthesize registeredUUID=_registeredUUID;
@property(retain) NSObject<NWNetworkAgent> *networkAgent; // @synthesize networkAgent=_networkAgent;
@property Class networkAgentClass; // @synthesize networkAgentClass=_networkAgentClass;
- (void).cxx_destruct;
- (_Bool)assignNexusData:(id)arg1 toClient:(id)arg2;
- (_Bool)removeNetworkAgentFromInterfaceNamed:(id)arg1;
- (_Bool)addNetworkAgentToInterfaceNamed:(id)arg1;
- (_Bool)unregisterNetworkAgent;
- (_Bool)updateNetworkAgent:(id)arg1;
- (_Bool)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2;
- (_Bool)registerNetworkAgent:(id)arg1;
- (_Bool)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2;
- (_Bool)createReadSourceWithRegistrationSocket:(int)arg1;
- (void)handleMessageFromAgent;
- (int)dupRegistrationFileDescriptor;
@property(readonly, nonatomic, getter=isRegistered) _Bool registered;
- (void)dealloc;
- (id)initWithNetworkAgentClass:(Class)arg1;

@end

