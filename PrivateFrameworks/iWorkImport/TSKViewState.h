//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSKViewState : TSPObject
{
    TSPObject *_viewStateRoot;
}

+ (id)viewStateWithRoot:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) TSPObject *viewStateRoot; // @synthesize viewStateRoot=_viewStateRoot;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)dealloc;
- (id)initWithViewStateRoot:(id)arg1 context:(id)arg2;

@end

