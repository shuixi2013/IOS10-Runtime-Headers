//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TRAccountManager : NSObject
{
}

+ (id)associatedAccountServicesForIDMSAccount:(id)arg1;
+ (id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;
+ (id)_idmsAccountForGameCenterService;
+ (id)_idmsAccountForITunesService;
+ (id)_idmsAccountForICloudService;
+ (id)_primaryGameCenterAccount;
+ (id)_primaryITunesAccount;
+ (id)_primaryICloudAccount;
+ (id)idmsAccountForAccountService:(unsigned long long)arg1;

@end

