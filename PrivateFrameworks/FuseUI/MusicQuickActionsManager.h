//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicQuickActionsManager : NSObject
{
    _Bool _supportsQuickActions;
}

+ (id)sharedInstance;
- (void)_updateShortcut:(id)arg1;
- (void)_removeShortcutWithType:(id)arg1;
- (void)_prominentRadioStationDidChangeNotification:(id)arg1;
- (id)_orderedShortcutTypes;
- (void)updateSiriShortcut;
- (void)updateSearchShortcut;
- (void)updateNowPlayingShortcutWithItem:(id)arg1;
- (void)updateFeaturedRadioStationShortcut;
- (void)dealloc;
- (id)init;

@end

