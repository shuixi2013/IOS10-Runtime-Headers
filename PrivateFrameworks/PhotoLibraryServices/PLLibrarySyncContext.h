//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLSyncContext-Protocol.h>

@class NSString, PLPhotoLibrary;

@interface PLLibrarySyncContext : NSObject <PLSyncContext>
{
    PLPhotoLibrary *_photoLibrary;
}

@property(readonly) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)personForUUID:(id)arg1 createIfMissing:(_Bool)arg2;
- (void)deleteFaces:(id)arg1;
- (id)makeFace;
@property(readonly, nonatomic) _Bool serverSupportsVision;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

