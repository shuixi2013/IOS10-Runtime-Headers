//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TCBundleResourceManager : NSObject
{
    NSMutableDictionary *mPackageMap;
}

+ (void)disposeInstance;
+ (id)instance;
- (struct _xmlDoc *)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(_Bool)arg4;
- (id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(_Bool)arg4;
- (void)dealloc;
- (id)init;
- (id)packageWithName:(id)arg1 cacheResult:(_Bool)arg2;

@end

