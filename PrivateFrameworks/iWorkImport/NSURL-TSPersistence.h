//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TSPersistence)
- (_Bool)tsp_getIsUbiquitousValue:(_Bool *)arg1 promised:(_Bool)arg2 error:(id *)arg3;
- (_Bool)tsp_isOnNonHFSVolume;
- (_Bool)tsp_isUbiquitousPromised:(_Bool)arg1;
- (_Bool)tsp_isUbiquitous;
- (_Bool)tsp_isEqualToURLExceptPrivate:(id)arg1;
- (id)tsp_URLExceptPrivate;
- (id)tsp_pathExceptPrivate;
- (id)tsp_documentIdentifierWithFallback:(_Bool)arg1;
- (id)tsp_documentIdentifier;
- (id)tsp_embeddedUTI;
- (_Bool)tsp_matchesURL:(id)arg1;
- (_Bool)tsp_isIWorkAVAssetURL;
- (_Bool)tsp_isAssetsLibraryURL;
@end

