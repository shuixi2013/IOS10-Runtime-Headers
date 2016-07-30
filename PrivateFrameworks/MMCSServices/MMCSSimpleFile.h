//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSString, NSURL;

@interface MMCSSimpleFile : NSObject
{
    int _fd;
    double _progress;
    NSString *_authToken;
    long long _encryptionBehavior;
    NSString *_localPath;
    NSURL *_requestURL;
    NSString *_requestorID;
    NSString *_guid;
    unsigned long long _itemID;
    NSData *_signature;
    NSData *_fileHash;
    unsigned long long _protocolFileSize;
    NSError *_mmcsError;
    NSData *_authResponseData;
}

@property(retain) NSData *authResponseData; // @synthesize authResponseData=_authResponseData;
@property(retain, setter=setMMCSError:) NSError *mmcsError; // @synthesize mmcsError=_mmcsError;
@property unsigned long long protocolFileSize; // @synthesize protocolFileSize=_protocolFileSize;
@property(retain) NSData *fileHash; // @synthesize fileHash=_fileHash;
@property(retain) NSData *signature; // @synthesize signature=_signature;
@property unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain) NSString *guid; // @synthesize guid=_guid;
@property(retain) NSString *requestorID; // @synthesize requestorID=_requestorID;
@property(retain) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain) NSString *localPath; // @synthesize localPath=_localPath;
@property long long encryptionBehavior; // @synthesize encryptionBehavior=_encryptionBehavior;
@property(retain) NSString *authToken; // @synthesize authToken=_authToken;
@property double progress; // @synthesize progress=_progress;
@property int fd; // @synthesize fd=_fd;
- (void)dealloc;
- (id)init;
- (id)description;

@end
