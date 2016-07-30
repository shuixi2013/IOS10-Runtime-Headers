//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICSearchIndexableIdentifier, NSMutableArray;

@interface ICGenerateSearchIndexStringsOperation : NSOperation
{
    ICSearchIndexableIdentifier *_searchIndexableIdentifier;
    NSMutableArray *_mutableSearchStrings;
}

@property(retain, nonatomic) NSMutableArray *mutableSearchStrings; // @synthesize mutableSearchStrings=_mutableSearchStrings;
@property(copy, nonatomic) ICSearchIndexableIdentifier *searchIndexableIdentifier; // @synthesize searchIndexableIdentifier=_searchIndexableIdentifier;
- (void).cxx_destruct;
- (id)searchStrings;
- (void)addStrings:(id)arg1;
- (id)init;

@end

