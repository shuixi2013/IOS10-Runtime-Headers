//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/NSUserActivity.h>

@interface NSUserActivity (ContactsUI)
+ (id)_cnui_searchMailUserActivityForContact:(id)arg1;
+ (id)_cnui_userActivityWithActivityType:(id)arg1 destinationID:(id)arg2 contact:(id)arg3 intentWithPerson:(CDUnknownBlockType)arg4;
+ (id)_cnui_sendMessageIntentWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_startVideoCallIntentWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_startAudioCallIntentWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_videoDialRequestWithCallProvider:(id)arg1 destinationID:(id)arg2 contact:(id)arg3;
+ (id)_cnui_audioDialRequestWithCallProvider:(id)arg1 destinationID:(id)arg2 contact:(id)arg3;
@end

