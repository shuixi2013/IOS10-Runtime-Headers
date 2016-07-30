//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDate, NSString, NSURL, NSUUID;

@protocol WBSHistoryConnectionProtocol
- (void)debugGetDatabaseURLWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)removeAllTestDriveHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)makePermanentAllTestDriveHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)removeItemsWithURLsInResponseToUserAction:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 endDate:(NSDate *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)clearHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)updateTitle:(NSString *)arg1 forVisitWithUUID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)recordRedirectFromVisitWithUUID:(NSUUID *)arg1 destinationURL:(NSURL *)arg2 origin:(long long)arg3 date:(NSDate *)arg4 completionHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)recordVisitToURL:(NSURL *)arg1 title:(NSString *)arg2 wasHTTPNonGet:(_Bool)arg3 visitWasFailure:(_Bool)arg4 increaseVisitCount:(_Bool)arg5 origin:(long long)arg6 completionHandler:(void (^)(NSUUID *, NSError *))arg7;
- (void)groupVisitsIntoSessionsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getVisitedLinksWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)beginHistoryAccessSession:(void (^)(id <WBSHistoryAccessSessionProtocol>, NSError *))arg1;
- (void)beginURLCompletionSession:(void (^)(id <WBSURLCompletionSessionProtocol>, NSError *))arg1;
@end

