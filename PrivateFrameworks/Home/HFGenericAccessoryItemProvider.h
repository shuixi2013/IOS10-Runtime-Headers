//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet;

@interface HFGenericAccessoryItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    NSMutableSet *_genericItems;
}

@property(retain, nonatomic) NSMutableSet *genericItems; // @synthesize genericItems=_genericItems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)arg1;

@end

