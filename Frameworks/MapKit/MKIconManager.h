//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MKIconManager : NSObject
{
}

+ (void)requestImageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 interactive:(_Bool)arg9 isCarplay:(_Bool)arg10;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 interactive:(_Bool)arg9;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 interactive:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 isCarplay:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4;
+ (id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 fallbackToBundleIcon:(_Bool)arg5;
+ (id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4;
+ (id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(_Bool)arg3;
+ (id)imageForMapItem:(id)arg1 forScale:(double)arg2;
+ (id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (struct CGColor *)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (struct CGColor *)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (struct CGColor *)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (id)_iconManager;
+ (void)setUseSharedCaches;
+ (void)setDiskCacheURL:(id)arg1;

@end

