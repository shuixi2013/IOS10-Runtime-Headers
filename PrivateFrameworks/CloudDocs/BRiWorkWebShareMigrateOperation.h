//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSOperationQueue, NSURL;

@interface BRiWorkWebShareMigrateOperation : BROperation
{
    NSURL *_url;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _shareMigrationCompletionBlock;
}

@property(copy) CDUnknownBlockType shareMigrationCompletionBlock; // @synthesize shareMigrationCompletionBlock=_shareMigrationCompletionBlock;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_copyShare;
- (void)_startSharingReadWrite:(_Bool)arg1;
- (void)_migrateShare;
- (id)initWithURL:(id)arg1;

@end

