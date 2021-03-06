//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <FuseUI/MusicJSNativeViewEventRegistry-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet;

@interface MusicJSNativeViewEventRegistry : IKJSObject <MusicJSNativeViewEventRegistry>
{
    NSMapTable *_accessBlockQueuesMap;
    NSMutableDictionary *_eventListenersMap;
    NSMapTable *_eventRequestQueuesMap;
    NSMutableSet *_viewControllersBeingRegistered;
}

- (void).cxx_destruct;
- (_Bool)_shouldUseInternalEventRegistryListenersToDispatchNativeViewEventOfType:(long long)arg1;
- (void)_registerViewController:(id)arg1 withExistingJSNativeViewController:(id)arg2;
- (id)_keyForNativeViewIdentifier:(id)arg1 eventType:(id)arg2;
- (unsigned long long)_indexOfEventListener:(id)arg1 forNativeViewIdentifier:(id)arg2 eventType:(id)arg3 returningContainerMutableArray:(id *)arg4;
- (void)_flushNativeViewEventRequestQueue:(id)arg1 forViewController:(id)arg2;
- (void)_flushAccessBlockQueue:(id)arg1 forViewController:(id)arg2;
- (id)_existingRegisteredJSNativeViewControllerForViewController:(id)arg1;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forJSNativeViewController:(id)arg3 appContext:(id)arg4 jsContext:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_descriptionForNativeViewEventType:(long long)arg1;
- (void)requestAccessToJSNativeViewControllerForViewController:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)registerExistingJSNativeViewController:(id)arg1 forViewController:(id)arg2;
- (void)dispatchNativeViewEventOfType:(long long)arg1 forViewController:(id)arg2;
- (void)dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeNativeViewAppearanceListener:(id)arg1:(id)arg2:(id)arg3;
- (void)addNativeViewAppearanceListener:(id)arg1:(id)arg2:(id)arg3;

@end

