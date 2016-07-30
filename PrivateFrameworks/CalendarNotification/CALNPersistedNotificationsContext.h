//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface CALNPersistedNotificationsContext : NSManagedObjectContext
{
}

+ (_Bool)shouldBehaveAsRestart;
+ (id)pathForSentinelFile;
- (id)fetchRefreshTimesAndRecordIDs;
- (id)fetchAlertInfosAndRecordIDs;
- (id)fetchNotificationBulletinsForSectionID:(id)arg1;
- (id)fetchAlarmBulletinsForSectionID:(id)arg1;
- (void)removeRefreshTimeForRecordID:(id)arg1;
- (void)saveRefreshTime:(id)arg1 forRecordID:(id)arg2;
- (void)removeAlertInfoWithRecordID:(id)arg1;
- (void)saveAlertInfo:(id)arg1 withRecordID:(id)arg2;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)saveBulletin:(id)arg1 withRecordID:(id)arg2 forAlarm:(_Bool)arg3;
- (id)fetchRefreshTime:(id)arg1;
- (id)fetchAlertInfo:(id)arg1;
- (id)fetchBulletinsInSection:(id)arg1 includeAlarms:(_Bool)arg2 includeNotifications:(_Bool)arg3;
- (id)fetchBulletin:(id)arg1;
- (id)urlForPersistentStore;
- (id)rootDirectory;
- (_Bool)removeSqliteFiles;
- (void)deleteDBIfNeeded;
- (id)createPersistentStoreCoordinator;
- (id)managedObjectModel;
- (id)init;

@end

