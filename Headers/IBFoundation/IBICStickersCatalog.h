//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalog.h>

@interface IBICStickersCatalog : IBICAbstractCatalog
{
}

+ (id)catalogItemFileExtension;
+ (id)fileExtensionsToAllowInUnstructuredImport;
+ (id)contentReferenceTypeName;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
- (id)childrenOfType:(Class)arg1;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (BOOL)shouldShowSuggestionSetsForBundleIcons;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;

@end

