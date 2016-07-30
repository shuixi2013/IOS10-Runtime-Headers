//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebOptGroup : NSObject
{
    id <UIWebSelectedItemPrivate> _group;
    NSArray *_options;
    long long _offset;
}

@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) id <UIWebSelectedItemPrivate> group; // @synthesize group=_group;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 itemOffset:(long long)arg2;

@end

