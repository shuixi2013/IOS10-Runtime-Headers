//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, PHFetchOptions;

@interface PHAGraphWorkerGraphUpdateDetails : NSObject
{
    NSMutableSet *_momentsToAdd;
    NSMutableSet *_momentsToDelete;
    NSMutableSet *_momentsToUpdate;
    NSMutableSet *_momentsToInvalidateOnly;
    NSArray *_momentLibraryChanges;
    PHFetchOptions *_fetchOptions;
}

@property(retain) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(readonly) NSArray *momentLibraryChanges; // @synthesize momentLibraryChanges=_momentLibraryChanges;
@property(retain) NSMutableSet *momentsToInvalidateOnly; // @synthesize momentsToInvalidateOnly=_momentsToInvalidateOnly;
@property(retain) NSMutableSet *momentsToUpdate; // @synthesize momentsToUpdate=_momentsToUpdate;
@property(retain) NSMutableSet *momentsToDelete; // @synthesize momentsToDelete=_momentsToDelete;
@property(retain) NSMutableSet *momentsToAdd; // @synthesize momentsToAdd=_momentsToAdd;
- (void).cxx_destruct;
- (id)momentIdentiferToFlagsMapForMoments:(id)arg1 assetFlags:(id)arg2;
@property(readonly) _Bool hasAnyChanges;
@property(readonly) _Bool hasMomentsToUpdate;
@property(readonly) _Bool hasMomentsToDelete;
@property(readonly) _Bool hasMomentsToAdd;
- (void)processMomentLibraryChanges;
- (id)initWithMomentLibraryChanges:(id)arg1 fetchOptions:(id)arg2;

@end

