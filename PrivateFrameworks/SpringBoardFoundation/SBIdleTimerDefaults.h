//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (_Bool)disableAutoDimExists;
@property(readonly, nonatomic) _Bool disableAutoDim; // @dynamic disableAutoDim;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic, getter=isBacklightLoggingEnabled) _Bool backlightLoggingEnabled; // @dynamic backlightLoggingEnabled;
@property(readonly, nonatomic) _Bool dontDimOrLockWhileConnectedToPower; // @dynamic dontDimOrLockWhileConnectedToPower;
@property(readonly, nonatomic) double minimumLockscreenIdleTime; // @dynamic minimumLockscreenIdleTime;
@property(readonly, nonatomic) _Bool supportLiftToWake; // @dynamic supportLiftToWake;

@end

