//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localization/LOCProperty.h>

@class NSDictionary;

@interface LOCPropertyAssetCatalog : LOCProperty
{
    NSDictionary *_locFileSetsByJson;
}

+ (id)keyForEntriesInJson:(id)arg1;
@property(copy) NSDictionary *locFileSetsByJson; // @synthesize locFileSetsByJson=_locFileSetsByJson;
- (void).cxx_destruct;
- (id)locFileSetForSlot:(id)arg1 inJson:(id)arg2;
- (id)slotInfoForAllSourceFiles;
- (id)slotInfoForSourceFile:(id)arg1 inJson:(id)arg2;
- (id)localeDictForSourceFile:(id)arg1 inJson:(id)arg2;
- (id)_slotInfoForEntry:(id)arg1 inAssetOfType:(id)arg2;
- (id)createSparseJsonFromFullJson:(id)arg1 forLocale:(id)arg2 error:(id *)arg3;
- (BOOL)writeSparseCatalogForLocale:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)filenameForLocalizedVersionOfSourceFile:(id)arg1 forLocale:(id)arg2;
- (id)_createLocSetsFromAssetJson:(id)arg1 isSparse:(BOOL)arg2 error:(id *)arg3;
- (id)_filesInDirectory:(id)arg1 withExtensions:(id)arg2;
- (id)jsonInSymbolSet:(id)arg1;
- (id)jsonsInImageStackLayer:(id)arg1;
- (id)jsonsInImageStack:(id)arg1;
- (id)jsonInDirectory:(id)arg1;
- (id)jsonsInImageSetsInDirectory:(id)arg1;
- (id)jsonsInImageStacksInDirectory:(id)arg1;
- (id)_findAssetJsonsInSubdirectory:(id)arg1 error:(id *)arg2;
- (id)_createLocSetDictionaryFromAssetJsonsIsSparse:(BOOL)arg1 error:(id *)arg2;
- (id)initWithContentsOfCatalog:(id)arg1 isSparse:(BOOL)arg2 error:(id *)arg3;

@end

