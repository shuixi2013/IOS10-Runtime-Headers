//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject
{
    _Bool _asApplication;
    int _notifyToken;
    NSPersistentStoreCoordinator *_sourceCoordinator;
    NSManagedObjectContext *_destinationContext;
}

@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) _Bool asApplication; // @synthesize asApplication=_asApplication;
@property(retain, nonatomic) NSManagedObjectContext *destinationContext; // @synthesize destinationContext=_destinationContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator; // @synthesize sourceCoordinator=_sourceCoordinator;
- (void).cxx_destruct;
- (id)contextSaveUserInfoKeys;
- (_Bool)shouldMergeContextDidSaveChanges:(id)arg1;
- (void)registerForContextDidSaveNotifications;
- (void)contextDidSave:(id)arg1;
- (void)postNotesDidChangeNotification;
- (void)postAccountDidChangeNotification;
- (void)registerForAccountNotifications;
- (void)registerForNotesRefreshNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)postCrossProcessNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2 asApplication:(_Bool)arg3;

@end

