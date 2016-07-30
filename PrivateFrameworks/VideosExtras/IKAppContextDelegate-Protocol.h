//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosExtras/NSObject-Protocol.h>

@class IKAppContext, IKAppMediaItemBridge, IKAppPlayerBridge, IKAppPlaylistBridge, IKAppTabBar, IKDOMDocument, JSContext, NSDictionary, NSError;
@protocol IKAppDeviceConfig, IKAppMediaItem, IKAppNavigationController, IKAppPlayer, IKAppPlaylist;

@protocol IKAppContextDelegate <NSObject>
- (id <IKAppDeviceConfig>)deviceConfigForContext:(IKAppContext *)arg1;

@optional
- (void)appContext:(IKAppContext *)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(NSDictionary *)arg3;
- (void)appContext:(IKAppContext *)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
- (void)appContext:(IKAppContext *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appContext:(IKAppContext *)arg1 didFailWithError:(NSError *)arg2;
- (void)appContext:(IKAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2;
- (_Bool)appContext:(IKAppContext *)arg1 validateDOMDocument:(IKDOMDocument *)arg2 inContext:(JSContext *)arg3 error:(id *)arg4;
- (void)appContext:(IKAppContext *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
- (id <IKAppMediaItem>)objectForMediaItem:(IKAppMediaItemBridge *)arg1;
- (id <IKAppPlaylist>)objectForPlaylist:(IKAppPlaylistBridge *)arg1;
- (id <IKAppPlayer>)objectForPlayer:(IKAppPlayerBridge *)arg1;
- (id <IKAppNavigationController>)modalControllerForContext:(IKAppContext *)arg1;
- (IKAppTabBar *)tabBarForContext:(IKAppContext *)arg1;
- (id <IKAppNavigationController>)navigationControllerForContext:(IKAppContext *)arg1;
@end

