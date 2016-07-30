//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class GSAddition, NSData, NSDictionary, NSError, NSObject, NSURL, QLThumbnailAddition;
@protocol OS_os_activity, QLThumbnailGenerationRequest><NSXPCProxyCreating;

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL *_documentURL;
    NSError *_error;
    _Bool _finished;
    _Bool _executing;
    _Bool _allowsThumbnailGeneration;
    _Bool _generateThumbnailsAtBackgroundPriority;
    _Bool _thumbnailWasJustAutomaticallyGenerated;
    NSObject<OS_os_activity> *_retrievalActivity;
    NSObject<OS_os_activity> *_generationActivity;
    QLThumbnailAddition *_addition;
    id <QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
    NSURL *_destinationURL;
}

+ (_Bool)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;
@property(readonly) QLThumbnailAddition *addition; // @synthesize addition=_addition;
@property(readonly) _Bool thumbnailWasJustAutomaticallyGenerated; // @synthesize thumbnailWasJustAutomaticallyGenerated=_thumbnailWasJustAutomaticallyGenerated;
@property _Bool generateThumbnailsAtBackgroundPriority; // @synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority;
@property _Bool allowsThumbnailGeneration; // @synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) _Bool thumbnailWasAutomaticallyGenerated;
@property(readonly) GSAddition *genStoreAddition;
@property(readonly) NSData *serializedQuickLookMetadataDictionary;
@property(readonly) NSDictionary *thumbnailImagesDictionary;
- (void)_finishWithError:(id)arg1;
- (void)afterThumbnailIsPutInGenstore;
- (void)_afterThumbnailIsGenerated;
- (id)issueSandboxExtension;
- (void)main;
- (void)_generateThumbnail;
- (void)start;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (_Bool)_finishIfCancelled;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)initWithDocumentAtURL:(id)arg1;
- (id)init;
- (_Bool)isConcurrent;

@end

