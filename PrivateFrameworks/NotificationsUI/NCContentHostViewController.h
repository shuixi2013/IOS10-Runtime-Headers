//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <NotificationsUI/NCContentHostInterface-Protocol.h>

@interface NCContentHostViewController : _UIRemoteViewController <NCContentHostInterface>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestContentViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)__shouldRemoteViewControllerFenceOperations;

@end

