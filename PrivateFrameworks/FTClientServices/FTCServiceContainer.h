//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject
{
    FTCServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(readonly, retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) FTCServiceMonitor *monitor; // @synthesize monitor=_monitor;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)addListenerID:(id)arg1;
- (_Bool)hasListenerID:(id)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

