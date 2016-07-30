//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSCardItemsControllerRemoteInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface>
{
    NSString *_identifier;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)getCardItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearAllCardItems;
- (void)setCardItems:(id)arg1;
- (void)removeCardItems:(id)arg1;
- (void)addCardItems:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

