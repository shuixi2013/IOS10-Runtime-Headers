//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HUStoreLookupResult : NSObject
{
    NSSet *_matchedLibraryItems;
    NSSet *_matchedStoreItems;
    NSSet *_unmatchedAccessories;
}

@property(retain, nonatomic) NSSet *unmatchedAccessories; // @synthesize unmatchedAccessories=_unmatchedAccessories;
@property(retain, nonatomic) NSSet *matchedStoreItems; // @synthesize matchedStoreItems=_matchedStoreItems;
@property(retain, nonatomic) NSSet *matchedLibraryItems; // @synthesize matchedLibraryItems=_matchedLibraryItems;
- (void).cxx_destruct;

@end

