/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/_PLManagedAsset.h>

@class CLLocation, NSArray, NSData, NSDate, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet, NSString, NSURL, UIImage;

@interface PLManagedAsset : _PLManagedAsset
{
    BOOL _didPrepareForDeletion;
    UIImage *inflightImage;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

+ (id)_allAssetUUIDsInManagedObjectContext:(id)arg1;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id *)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (struct CGImage *)newUnrotatedImageWithSize:(struct CGSize)arg1 originalImage:(struct CGImage *)arg2 imageOrientation:(int)arg3;
+ (int)wildcatCachedStackImageFormat;
+ (int)wildcatStackFormat;
+ (int)wildcatPhotoScrubberFormat;
+ (int)wildcatIndexSheetFormat;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (int)indexSheetFormat;
+ (int)posterThumbnailFormat;
+ (int)thumbnailFormat;
+ (int)fullSizeImageFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)pathForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingMimeType;
+ (id)keyPathsForValuesAffectingUtiType;
+ (id)bestCreationDateForAssestAtURL:(id)arg1;
+ (id)keyPathsForValuesAffectingIsAudio;
+ (id)keyPathsForValuesAffectingIsPhoto;
+ (id)keyPathsForValuesAffectingIsVideo;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingDate;
+ (id)keyPathsForValuesAffectingHasLocationInfo;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingRecordModDate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingCaptureTime;
+ (id)keyPathsForValuesAffectingAssetKind;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)pathsForAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)assetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countUsedAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
@property(retain, nonatomic) NSDictionary *inflightMetadata; // @synthesize inflightMetadata;
@property(retain, nonatomic) UIImage *inflightIndexSheetImage; // @synthesize inflightIndexSheetImage;
@property(retain, nonatomic) UIImage *inflightImage; // @synthesize inflightImage;
- (id)shortenedFilePath;
- (BOOL)isInRegion:(CDStruct_90e2a262)arg1;
@property(readonly, nonatomic) NSURL *assetURL;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)assetURLWithExtension:(id)arg1;
- (void)saveBakedVideoThumbnail;
- (id)previewFrameImageFromDatabase;
@property(readonly, nonatomic) UIImage *wallpaperFullScreenImage;
@property(readonly, nonatomic) NSString *textBadgeString;
- (void)copyToPasteboard;
- (id)largestAvailableDataRepresentationAndType:(id *)arg1;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (id)newFullSizeImageForImagePickerClient;
- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;
- (id)indexSheetImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)mimeTypeForService:(id)arg1;
- (id)fileExtensionForService:(id)arg1;
- (void)save;
@property(readonly, nonatomic) BOOL hasXMPFile;
@property(readonly, nonatomic) NSString *pathForXMPFile;
@property(readonly, nonatomic) NSString *pathForLowResolutionFile;
@property(readonly, nonatomic) NSURL *fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly, nonatomic) NSString *pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, nonatomic) NSURL *fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly, nonatomic) NSString *pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly, nonatomic) NSURL *fileURLForLargeDisplayableImage;
@property(readonly, nonatomic) NSString *pathForLargeDisplayableImageFile;
@property(readonly, nonatomic) NSString *pathForVideoFile;
@property(readonly, nonatomic) NSString *pathForVideoPreviewFile;
@property(readonly, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, nonatomic) NSString *pathForPrebakedWildcatThumbnailsFile;
@property(readonly, nonatomic) NSString *pathForPrebakedThumbnail;
@property(readonly, nonatomic) NSURL *fileURLForThumbnailFile;
- (id)fileULRForMetadataWithExtension:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
@property(readonly, nonatomic) NSURL *fileURLForMetadataDirectory;
@property(readonly, nonatomic) NSString *pathForMetadataDirectory;
@property(readonly, nonatomic) NSString *fileExtension;
- (void)addExtension:(id)arg1;
@property(readonly, nonatomic) NSArray *allUniformTypeIdentifiers;
- (id)allFileExtensions;
- (id)fileURLForSidecarFile:(id)arg1;
@property(readonly, nonatomic) NSString *pathForOriginalFile;
@property(readonly, nonatomic) NSURL *fileURLForLargeThumbnailFile;
@property(readonly, nonatomic) NSString *pathForLargeThumbnailFile;
@property(readonly, nonatomic) NSSet *allFileURLs;
@property(readonly, nonatomic) NSSet *filePathsWithoutThumbs;
@property(readonly, nonatomic) NSString *pathForImageFile;
@property(readonly, nonatomic) NSURL *mainFileURL;
- (BOOL)isSavedPhotosAsset;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1 assetKind:(int)arg2;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
@property(readonly, nonatomic) BOOL isJPEG;
@property(readonly, nonatomic) NSString *mimeType;
@property(copy, nonatomic) NSString *utiType;
@property(readonly, nonatomic) NSArray *sortedSidecarFiles;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) BOOL allowsWallpaperEditing;
- (BOOL)isEditable;
@property(readonly, nonatomic) BOOL isAudio;
@property(readonly, nonatomic) BOOL isPhoto;
@property(readonly, nonatomic) BOOL isHDVideo;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL supportsDistributedPhotoStreamDeletion;
@property(readonly, nonatomic) BOOL isPhotoStreamPhoto;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) BOOL hasLocationInfo;
@property(nonatomic) CDStruct_c3b9c2ee gpsCoordinate;
- (void)setRecordModDate;
@property(nonatomic) double recordModDate;
@property(readonly, nonatomic) BOOL allowsRotation;
@property(nonatomic) struct CGSize imageSize;
@property(nonatomic) double captureTime;
@property(nonatomic) int assetKind;
- (void)generateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 existingThumbnailIndex:(unsigned int)arg3 fromImageSource:(struct CGImageSource *)arg4 imageData:(id)arg5 thumbnailDataByFormatID:(struct __CFDictionary *)arg6;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(int)arg2 imageSource:(struct CGImageSource **)arg3 imageData:(id *)arg4;
@property short embeddedThumbnailHeightValue;
@property(retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property short embeddedThumbnailWidthValue;
@property(retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property int embeddedThumbnailLengthValue;
@property(retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property int embeddedThumbnailOffsetValue;
@property(retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property(readonly, nonatomic) NSData *embeddedThumbnailData;
@property(readonly, nonatomic) BOOL hasEmbeddedThumbnail;
- (id)addFaceWithRelativeRect:(struct CGRect)arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)faceWithIdentifier:(short)arg1;
- (void)setPersistedFileSystemAttributes;
- (void)updateFromPersistedFileSystemAttributes;
- (void)persistMetadataToFilesystem;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (id)_kindDesription;
- (id)_savedAssetTypeDesription;
- (id)_highDynamicRangeTypeDesription;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (BOOL)_isSavedAssetTypeValueValid:(int)arg1;
@property(nonatomic) BOOL isInFlight;
- (BOOL)hasGPS;
@property(retain, nonatomic) PLManagedAsset *originalAsset;
- (id)adjustmentsXMPRepresentation;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (id)addAdjustment;
- (void)deleteFromDatabaseOnly;
- (void)delete;
@property(retain, nonatomic) CLLocation *location;
- (BOOL)isLocatedAtCoordinates:(CDStruct_c3b9c2ee)arg1;
@property(nonatomic) int savedAssetTypeValue;
@property(nonatomic) int highDynamicRangeTypeValue;
- (void)prepareForDeletion;
@property unsigned int effectiveThumbnailIndex;
@property int thumbnailIndex;
- (void)willTurnIntoFault;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSMutableOrderedSet *adjustments; // @dynamic adjustments;
@property(retain, nonatomic) NSMutableSet *faces; // @dynamic faces;

@end

