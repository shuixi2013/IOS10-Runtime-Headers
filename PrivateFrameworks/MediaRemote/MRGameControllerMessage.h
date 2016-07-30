//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRGameControllerMessage : MRProtocolMessage
{
    _Bool _eventInitialized;
    _Bool _hasEvent;
    CDStruct_06eb3966 _gcEvent;
    unsigned long long _priority;
}

- (_Bool)shouldLog;
- (unsigned long long)priority;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long controllerID;
@property(readonly, nonatomic) CDStruct_06eb3966 *event;
- (id)initWithButtons:(CDStruct_af4f530f *)arg1 controllerID:(unsigned long long)arg2;
- (id)initWithGameControllerEvent:(const CDStruct_06eb3966 *)arg1 controllerID:(unsigned long long)arg2;

@end

