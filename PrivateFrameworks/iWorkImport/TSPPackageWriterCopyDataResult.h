//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol TSPCryptoInfo;

__attribute__((visibility("hidden")))
@interface TSPPackageWriterCopyDataResult : NSObject
{
    NSString *_filename;
    id <TSPCryptoInfo> _encryptionInfo;
}

@property(readonly, nonatomic) id <TSPCryptoInfo> encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2;

@end

