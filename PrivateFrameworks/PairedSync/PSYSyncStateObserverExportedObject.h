//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/PSYSyncStateObserverInterface-Protocol.h>

@class NSString;
@protocol PSYSyncStateObserverInterface;

@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface>
{
    id <PSYSyncStateObserverInterface> _delegate;
}

@property(nonatomic) __weak id <PSYSyncStateObserverInterface> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)didUpdateSyncForPairingID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

