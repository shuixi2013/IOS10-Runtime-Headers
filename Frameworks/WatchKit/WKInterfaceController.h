//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WKCrownSequencer;

@interface WKInterfaceController : NSObject
{
    WKCrownSequencer *_crownSequencer;
    NSArray *_topLevelObjects;
    NSArray *_properties;
    NSString *_viewControllerID;
    NSMutableDictionary *_gestureRecognizers;
    NSMutableArray *_uninstalledGestureIds;
    NSMutableArray *_pendingGestureInstallationFinishedBlocks;
    struct CGRect _contentFrame;
}

+ (_Bool)openParentApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)_removePageControllersAtIndexes:(id)arg1;
+ (void)_movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)_insertPageControllersAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (struct CGRect)screenBounds;
+ (double)screenScale;
@property(retain, nonatomic) NSMutableArray *pendingGestureInstallationFinishedBlocks; // @synthesize pendingGestureInstallationFinishedBlocks=_pendingGestureInstallationFinishedBlocks;
@property(retain, nonatomic) NSMutableArray *uninstalledGestureIds; // @synthesize uninstalledGestureIds=_uninstalledGestureIds;
@property(retain, nonatomic) NSMutableDictionary *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) NSString *viewControllerID; // @synthesize viewControllerID=_viewControllerID;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
@property(readonly, nonatomic) WKCrownSequencer *crownSequencer; // @synthesize crownSequencer=_crownSequencer;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
- (void).cxx_destruct;
- (void)endGlanceUpdates;
- (void)beginGlanceUpdates;
- (void)invalidateUserActivity;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2;
- (void)clearAllMenuItems;
- (void)addMenuItemWithItemIcon:(long long)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithImageNamed:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (id)contextsForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3;
- (id)contextsForSegueWithIdentifier:(id)arg1;
- (id)contextForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3;
- (id)contextForSegueWithIdentifier:(id)arg1;
- (void)dismissAddPassesController;
- (void)presentAddPassesControllerWithPasses:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAudioRecorderController;
- (void)presentAudioRecorderControllerWithOutputURL:(id)arg1 preset:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissMediaPlayerController;
- (void)presentMediaPlayerControllerWithURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissTextInputController;
- (void)presentTextInputControllerWithSuggestionsForLanguage:(CDUnknownBlockType)arg1 allowedInputMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissController;
- (void)presentControllerWithNames:(id)arg1 contexts:(id)arg2;
- (void)presentControllerWithName:(id)arg1 context:(id)arg2;
- (void)becomeCurrentPage;
- (void)popToRootController;
- (void)popController;
- (void)pushControllerWithName:(id)arg1 context:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)handleUserActivity:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2;
- (void)_handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2 remoteNotification:(id)arg3 localNotification:(id)arg4;
- (void)table:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (void)pickerDidResignFocus:(id)arg1;
- (void)pickerDidFocus:(id)arg1;
- (void)pickerDidSettle:(id)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)didDeactivate;
- (void)willActivate;
- (id)initWithContext:(id)arg1;
- (void)awakeWithContext:(id)arg1;
- (id)init;

@end

