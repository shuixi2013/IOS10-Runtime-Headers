//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDAutoSuConfig : NSObject
{
    _Bool _alwaysFallBackToDefault;
    _Bool _alwaysReturnUnlockNow;
    _Bool _allowUnlockBeforeNow;
    int _restrictionStartInSlot;
    int _restrictionEndInSlot;
    int _suStartDefaultTime;
    int _suEndDefaultTimeOffsetFromSuStart;
    int _unlockMarginInSlot;
    double _unlockThreshold;
    double _startThreshold;
    double _endThreshold;
}

@property(nonatomic) int unlockMarginInSlot; // @synthesize unlockMarginInSlot=_unlockMarginInSlot;
@property(nonatomic) double endThreshold; // @synthesize endThreshold=_endThreshold;
@property(nonatomic) double startThreshold; // @synthesize startThreshold=_startThreshold;
@property(nonatomic) double unlockThreshold; // @synthesize unlockThreshold=_unlockThreshold;
@property(nonatomic) _Bool allowUnlockBeforeNow; // @synthesize allowUnlockBeforeNow=_allowUnlockBeforeNow;
@property(nonatomic) _Bool alwaysReturnUnlockNow; // @synthesize alwaysReturnUnlockNow=_alwaysReturnUnlockNow;
@property(nonatomic) _Bool alwaysFallBackToDefault; // @synthesize alwaysFallBackToDefault=_alwaysFallBackToDefault;
@property(nonatomic) int suEndDefaultTimeOffsetFromSuStart; // @synthesize suEndDefaultTimeOffsetFromSuStart=_suEndDefaultTimeOffsetFromSuStart;
@property(nonatomic) int suStartDefaultTime; // @synthesize suStartDefaultTime=_suStartDefaultTime;
@property(nonatomic) int restrictionEndInSlot; // @synthesize restrictionEndInSlot=_restrictionEndInSlot;
@property(nonatomic) int restrictionStartInSlot; // @synthesize restrictionStartInSlot=_restrictionStartInSlot;
- (void)setParam;
- (_Bool)validParam;
- (int)readConfig;

@end

