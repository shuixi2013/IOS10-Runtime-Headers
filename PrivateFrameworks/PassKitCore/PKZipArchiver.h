//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKZipArchiver : NSObject
{
}

+ (void)noteBOMCopier:(struct _BOMCopier *)arg1 succeeded:(_Bool)arg2;
+ (void)disassociateBOMCopier:(struct _BOMCopier *)arg1;
+ (void)associateBOMCopier:(struct _BOMCopier *)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)zippedDataForURL:(id)arg1;
- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

