//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMAppShortcutManager : NSObject
{
}

+ (id)sharedInstance;
- (void)clearShortcutItems;
- (id)createShortcutForItem:(id)arg1;
- (void)removeShortcutItemWithIentifier:(id)arg1;
- (void)setShortcutItem:(id)arg1;
- (_Bool)hasShortcutItems;
- (void)setShortcutItems:(id)arg1;

@end

