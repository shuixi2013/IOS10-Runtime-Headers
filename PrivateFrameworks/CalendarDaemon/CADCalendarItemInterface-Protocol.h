//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSPredicate, NSString;

@protocol CADCalendarItemInterface
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(NSArray *, int))arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(int, int))arg3;
- (void)CADDatabaseRemoveContactIdentifier:(NSString *)arg1 forCalendarItem:(CDStruct_1ef3fb1f)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseAddContactWithIdentifier:(NSString *)arg1 forCalendarItem:(CDStruct_1ef3fb1f)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(CDStruct_1ef3fb1f)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADDatabaseExportCalendarItemAsICS:(CDStruct_1ef3fb1f)arg1 reply:(void (^)(int, NSData *))arg2;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(NSPredicate *)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetCalendarItemWithUUID:(NSString *)arg1 reply:(void (^)(int, struct))arg2;
@end

