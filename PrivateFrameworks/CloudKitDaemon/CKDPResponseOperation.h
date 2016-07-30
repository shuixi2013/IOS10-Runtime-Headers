//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAssetUploadTokenRetrieveResponse, CKDPBundlesForContainerResponse, CKDPCodeFunctionInvokeResponse, CKDPDeleteCommentResponse, CKDPDeleteContainerResponse, CKDPGetCommentResponse, CKDPGetCommentsResponse, CKDPGetLikesResponse, CKDPLikeResponse, CKDPMescalCertificateResponse, CKDPMescalSessionInfoResponse, CKDPMescalSignatureResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPPostCommentResponse, CKDPPromoteContainerSchemaResponse, CKDPPulseResponse, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordResolveTokenResponse, CKDPRecordRetrieveAncestorsResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResetContainerResponse, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareDeleteResponse, CKDPShareRetrieveResponse, CKDPShareSaveResponse, CKDPShareTokenDeleteResponse, CKDPShareTokenRetrieveResponse, CKDPShareTokenSaveResponse, CKDPShareVettingInitiateResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUnlikeResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperation : PBCodable <NSCopying>
{
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;
    CKDPDeleteCommentResponse *_deleteCommentResponse;
    CKDPDeleteContainerResponse *_deleteContainerResponse;
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;
    CKDPGetCommentResponse *_getCommentResponse;
    CKDPGetCommentsResponse *_getCommentsResponse;
    CKDPGetLikesResponse *_getLikesResponse;
    CKDPLikeResponse *_likeResponse;
    CKDPMescalCertificateResponse *_mescalCertificateResponse;
    CKDPMescalSessionInfoResponse *_mescalSessionInfoResponse;
    CKDPMescalSignatureResponse *_mescalSignatureResponse;
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;
    CKDPNotificationSyncResponse *_notificationSyncResponse;
    unsigned int _operationCost;
    CKDPPostCommentResponse *_postCommentResponse;
    CKDPPromoteContainerSchemaResponse *_promoteContainerSchemaResponse;
    CKDPPulseResponse *_pulseResponse;
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;
    CKDPRecordDeleteResponse *_recordDeleteResponse;
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;
    CKDPRecordRetrieveAncestorsResponse *_recordRetrieveAncestorsResponse;
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse *_recordSaveResponse;
    CKDPResetContainerResponse *_resetContainerResponse;
    CKDPOperation *_response;
    CKDPResponseOperationResult *_result;
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;
    CKDPShareAcceptResponse *_shareAcceptResponse;
    CKDPShareDeleteResponse *_shareDeleteResponse;
    CKDPShareRetrieveResponse *_shareRetrieveResponse;
    CKDPShareSaveResponse *_shareSaveResponse;
    CKDPShareTokenDeleteResponse *_shareTokenDeleteResponse;
    CKDPShareTokenRetrieveResponse *_shareTokenRetrieveResponse;
    CKDPShareTokenSaveResponse *_shareTokenSaveResponse;
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;
    CKDPUnlikeResponse *_unlikeResponse;
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse *_userQueryResponse;
    CKDPUserRetrieveResponse *_userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse *_zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;
    CKDPZoneSaveResponse *_zoneSaveResponse;
    struct {
        unsigned int operationCost:1;
    } _has;
}

@property(retain, nonatomic) CKDPResponseOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) CKDPOperation *response; // @synthesize response=_response;
@property(nonatomic) unsigned int operationCost; // @synthesize operationCost=_operationCost;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasResult;
@property(readonly, nonatomic) _Bool hasResponse;
@property(nonatomic) _Bool hasOperationCost;
@property(retain, nonatomic) CKDPShareSaveResponse *shareSaveResponse;
@property(readonly, nonatomic) _Bool hasShareSaveResponse;
@property(retain, nonatomic) CKDPShareRetrieveResponse *shareRetrieveResponse;
@property(readonly, nonatomic) _Bool hasShareRetrieveResponse;
@property(retain, nonatomic) CKDPShareDeleteResponse *shareDeleteResponse;
@property(readonly, nonatomic) _Bool hasShareDeleteResponse;
@property(retain, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property(readonly, nonatomic) _Bool hasShareAcceptResponse;
@property(retain, nonatomic) CKDPShareTokenSaveResponse *shareTokenSaveResponse;
@property(readonly, nonatomic) _Bool hasShareTokenSaveResponse;
@property(retain, nonatomic) CKDPShareTokenRetrieveResponse *shareTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasShareTokenRetrieveResponse;
@property(retain, nonatomic) CKDPShareTokenDeleteResponse *shareTokenDeleteResponse;
@property(readonly, nonatomic) _Bool hasShareTokenDeleteResponse;
@property(retain, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property(readonly, nonatomic) _Bool hasShareVettingInitiateResponse;
@property(retain, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;
@property(readonly, nonatomic) _Bool hasZoneSaveResponse;
@property(retain, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property(readonly, nonatomic) _Bool hasZoneRetrieveResponse;
@property(retain, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property(readonly, nonatomic) _Bool hasZoneDeleteResponse;
@property(retain, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property(readonly, nonatomic) _Bool hasZoneRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property(readonly, nonatomic) _Bool hasRecordSaveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveVersionsResponse;
@property(retain, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property(readonly, nonatomic) _Bool hasRecordDeleteResponse;
@property(retain, nonatomic) CKDPRecordRetrieveAncestorsResponse *recordRetrieveAncestorsResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveAncestorsResponse;
@property(retain, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property(readonly, nonatomic) _Bool hasRecordResolveTokenResponse;
@property(retain, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property(readonly, nonatomic) _Bool hasUserAvailableQuotaResponse;
@property(retain, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property(readonly, nonatomic) _Bool hasUserRetrieveResponse;
@property(retain, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property(readonly, nonatomic) _Bool hasQueryRetrieveResponse;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasAssetUploadTokenRetrieveResponse;
@property(retain, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property(readonly, nonatomic) _Bool hasDeleteContainerResponse;
@property(retain, nonatomic) CKDPResetContainerResponse *resetContainerResponse;
@property(readonly, nonatomic) _Bool hasResetContainerResponse;
@property(retain, nonatomic) CKDPPromoteContainerSchemaResponse *promoteContainerSchemaResponse;
@property(readonly, nonatomic) _Bool hasPromoteContainerSchemaResponse;
@property(retain, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property(readonly, nonatomic) _Bool hasBundlesForContainerResponse;
@property(retain, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasWebAuthTokenRetrieveResponse;
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property(readonly, nonatomic) _Bool hasFunctionInvokeResponse;
@property(retain, nonatomic) CKDPPostCommentResponse *postCommentResponse;
@property(readonly, nonatomic) _Bool hasPostCommentResponse;
@property(retain, nonatomic) CKDPGetCommentsResponse *getCommentsResponse;
@property(readonly, nonatomic) _Bool hasGetCommentsResponse;
@property(retain, nonatomic) CKDPGetCommentResponse *getCommentResponse;
@property(readonly, nonatomic) _Bool hasGetCommentResponse;
@property(retain, nonatomic) CKDPDeleteCommentResponse *deleteCommentResponse;
@property(readonly, nonatomic) _Bool hasDeleteCommentResponse;
@property(retain, nonatomic) CKDPLikeResponse *likeResponse;
@property(readonly, nonatomic) _Bool hasLikeResponse;
@property(retain, nonatomic) CKDPUnlikeResponse *unlikeResponse;
@property(readonly, nonatomic) _Bool hasUnlikeResponse;
@property(retain, nonatomic) CKDPGetLikesResponse *getLikesResponse;
@property(readonly, nonatomic) _Bool hasGetLikesResponse;
@property(retain, nonatomic) CKDPPulseResponse *pulseResponse;
@property(readonly, nonatomic) _Bool hasPulseResponse;
@property(retain, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionCreateResponse;
@property(retain, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionRetrieveResponse;
@property(retain, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionDeleteResponse;
@property(retain, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property(readonly, nonatomic) _Bool hasUserQueryResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsUpdateResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsResetResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsBatchLookupResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsRetrieveResponse;
@property(retain, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property(readonly, nonatomic) _Bool hasTokenRegistrationResponse;
@property(retain, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property(readonly, nonatomic) _Bool hasTokenUnregistrationResponse;
@property(retain, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property(readonly, nonatomic) _Bool hasSetBadgeCountResponse;
@property(retain, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property(readonly, nonatomic) _Bool hasNotificationSyncResponse;
@property(retain, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property(readonly, nonatomic) _Bool hasNotificationMarkReadResponse;
@property(retain, nonatomic) CKDPMescalCertificateResponse *mescalCertificateResponse;
@property(readonly, nonatomic) _Bool hasMescalCertificateResponse;
@property(retain, nonatomic) CKDPMescalSessionInfoResponse *mescalSessionInfoResponse;
@property(readonly, nonatomic) _Bool hasMescalSessionInfoResponse;
@property(retain, nonatomic) CKDPMescalSignatureResponse *mescalSignatureResponse;
@property(readonly, nonatomic) _Bool hasMescalSignatureResponse;

@end

