//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class NSDictionary;

@interface HFStaticItem : HFItem
{
    NSDictionary *_staticResults;
    CDUnknownBlockType _resultsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(retain, nonatomic) NSDictionary *staticResults; // @synthesize staticResults=_staticResults;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;
- (id)initWithResults:(id)arg1;

@end

