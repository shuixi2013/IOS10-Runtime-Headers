//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SYStateProvider : NSObject
{
    unsigned int _type;
    unsigned long long _handle;
    id _state;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _encoder;
}

+ (id)stateProviderWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType encoder; // @synthesize encoder=_encoder;
- (void).cxx_destruct;
- (id)_encodedState;
- (void)updateState:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
- (id)init;

@end

