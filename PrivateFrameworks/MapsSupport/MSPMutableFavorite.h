//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPFavorite-Protocol.h>
#import <MapsSupport/MSPIdentifiableFavorite-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPBookmarkStorage, NSString, NSUUID;

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite>
{
    _Bool _immutable;
    NSUUID *_storageIdentifier;
    MSPBookmarkStorage *_bookmarkStorage;
}

+ (void)initialize;
+ (id)mutableFavoriteForBookmarkStorage:(id)arg1;
+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(readonly, nonatomic, getter=_isImmutable) _Bool immutable; // @synthesize immutable=_immutable;
@property(readonly, nonatomic) MSPBookmarkStorage *bookmarkStorage; // @synthesize bookmarkStorage=_bookmarkStorage;
@property(readonly, nonatomic) NSUUID *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
- (void).cxx_destruct;
- (void)_assertNotImmutable;
- (void)_markImmutable;
- (id)persisterOnlyBookmarkStorage;
- (id)copyIfValidWithError:(out id *)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)ifMutablePlace:(CDUnknownBlockType)arg1 ifMutableRoute:(CDUnknownBlockType)arg2 ifMutableRegion:(CDUnknownBlockType)arg3 ifMutableTransitLine:(CDUnknownBlockType)arg4;
- (void)ifPlace:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifRegion:(CDUnknownBlockType)arg3 ifTransitLine:(CDUnknownBlockType)arg4;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)init;
- (id)abridgedBookmarkStorageForSpotlightStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

