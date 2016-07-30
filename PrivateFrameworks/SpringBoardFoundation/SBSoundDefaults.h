//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(retain, nonatomic) NSString *calendarAlarmPath; // @dynamic calendarAlarmPath;
@property(readonly, nonatomic) _Bool playSoundOnBasebandReset; // @dynamic playSoundOnBasebandReset;
@property(readonly, nonatomic) _Bool playSoundOnDeviceWake; // @dynamic playSoundOnDeviceWake;
@property(nonatomic, getter=isRingerMuted) _Bool ringerMuted; // @dynamic ringerMuted;
@property(readonly, nonatomic) _Bool vibrateWhenRinging; // @dynamic vibrateWhenRinging;
@property(readonly, nonatomic) _Bool vibrateWhenSilent; // @dynamic vibrateWhenSilent;

@end

