//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSURectList : NSObject
{
    struct vector<CGRect, std::__1::allocator<CGRect>> mRectList;
}

+ (id)rectListWithDifference:(struct CGRect)arg1 withRect:(struct CGRect)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)addRect:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithRectList:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end

