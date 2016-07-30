//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPlacesMapLayoutResult-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString, PXPlacesMapViewPort;

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult>
{
    PXPlacesMapViewPort *_viewPort;
    NSMutableOrderedSet *_items;
}

@property(retain, nonatomic) NSMutableOrderedSet *items; // @synthesize items=_items;
@property(retain, nonatomic) PXPlacesMapViewPort *viewPort; // @synthesize viewPort=_viewPort;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOrderedSet *layoutItems;
- (void)removeItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

