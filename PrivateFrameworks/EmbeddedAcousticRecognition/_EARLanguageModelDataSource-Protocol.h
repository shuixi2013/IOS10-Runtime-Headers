//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmbeddedAcousticRecognition/NSObject-Protocol.h>

@protocol _EARLanguageModelDataSource <NSObject>
- (float)condititionalProbabilityOfWordID:(int)arg1 contextWordIDs:(const int *)arg2 count:(unsigned long long)arg3 symbolLookupBlock:(NSString * (^)(int))arg4;
@end

