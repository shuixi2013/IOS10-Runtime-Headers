//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSProgressValues, NSSet, NSString, NSURL;
@protocol NSProgressPublisher, NSProgressSubscriber;

@protocol NSProgressRegistrar
- (oneway void)removeSubscriberForID:(NSString *)arg1;
- (oneway void)addSubscriber:(id <NSProgressSubscriber>)arg1 forID:(NSString *)arg2 appBundleID:(NSString *)arg3 fileURL:(NSURL *)arg4 completionHandler:(void (^)(void))arg5;
- (oneway void)addSubscriber:(id <NSProgressSubscriber>)arg1 forID:(NSString *)arg2 appBundleID:(NSString *)arg3 category:(NSString *)arg4 completionHandler:(void (^)(void))arg5;
- (oneway void)removePublisherForID:(NSString *)arg1;
- (oneway void)observePublisherForID:(NSString *)arg1 value:(id)arg2 forKey:(NSString *)arg3 inUserInfo:(_Bool)arg4;
- (oneway void)addPublisher:(id <NSProgressPublisher>)arg1 forID:(NSString *)arg2 acknowledgementAppBundleIDs:(NSSet *)arg3 category:(NSString *)arg4 fileURL:(NSURL *)arg5 initialValues:(NSProgressValues *)arg6 completionHandler:(void (^)(NSSet *))arg7;
@end

