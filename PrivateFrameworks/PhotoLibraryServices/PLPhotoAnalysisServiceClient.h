//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL, NSXPCConnection;

@interface PLPhotoAnalysisServiceClient : NSObject
{
    NSURL *_libraryURL;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_cachedRequestContextDictionary;
}

+ (id)defaultClient;
- (void).cxx_destruct;
- (id)dumpAnalysisStatusError:(id *)arg1;
- (void)setupXpcConnection;
- (id)initWithLibraryURL:(id)arg1;
- (void)notifyPhotoLibraryOpened;
- (void)invalidate;
- (id)init;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)reclusterFacesWithThreshold:(id)arg1 error:(id *)arg2;
- (_Bool)resetFaceClusteringState:(id *)arg1;
- (_Bool)resetFaceDetectionState:(id *)arg1;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (id)suggestedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)suggestedFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 error:(id *)arg4;
- (id)suggestedFacesForFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (void)dispatchBlockWithoutBoost:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)requestContextDictionary;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestSetShowHolidayCalendarEvents:(_Bool)arg1 error:(id *)arg2;
- (_Bool)requestIsShowingHolidayCalendarEvents:(id *)arg1;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id *)arg4;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id *)arg3;
- (id)requestMetadataSnapshotFolderCreation:(id *)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)requestInvalidatePersistentCaches:(id *)arg1;
- (_Bool)requestInvalidateTransientCaches:(id *)arg1;
- (void)requestGraphRebuildFractionCompletedWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphStatus:(id *)arg1;
- (id)requestGraphStatistic:(id *)arg1;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestRelatedDebugInformationBetweenMomentForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 error:(id *)arg5;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 error:(id *)arg5;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestAssetsForFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestRelatedMomentsForFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestSocialGroupsForFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestAllSocialGroupsForFaceCollectionIdentifier:(id)arg1 withError:(id *)arg2;
- (id)requestSortedArrayOfFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestAssetCollectionsRelatedToFaceCollectionIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

