//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDDatabaseOperation : CKDOperation
{
    long long _databaseScope;
}

@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)CKStatusReportProperties;
- (void)configureRequest:(id)arg1;
- (id)newChildOperationInfoOfClass:(Class)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

