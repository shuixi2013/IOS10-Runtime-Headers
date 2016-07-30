//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKSelection.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDCanvasSelection-Protocol.h>

@class NSSet, NSString, TSDDrawableInfo;
@protocol TSDContainerInfo;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying>
{
    NSSet *mInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
}

+ (id)emptySelection;
@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container; // @synthesize container=mContainer;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;
- (id)infosOfClass:(Class)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long infoCount;
@property(readonly, nonatomic) NSSet *infos;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

