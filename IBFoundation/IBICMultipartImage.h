//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

@class NSString;

@interface IBICMultipartImage : IBICAbstractCatalogItem
{
}

+ (Class)repIdentifierClass;
+ (Class)slotClass;
+ (id)pluralTypeNameForIssues;
+ (id)typeNameForIssues;
+ (id)keysThatImpactImageName;
+ (id)fileNameForImageSetName:(id)arg1;
+ (Class)imageRepClass;
+ (id)fileExtension;
+ (id)defaultInstanceForPlatforms:(id)arg1;
+ (id)defaultImageName;
+ (Class)classForDirectoryExtension:(id)arg1;
+ (id)multipartImageClassesInImportOrder;
+ (id)multipartImageClasses;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)slotComponentMaskForSlots:(id)arg1;
- (id)slotComponentMaskForChildren;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;
- (id)suggestedFileNameForImageRepInSlot:(id)arg1;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (void)assertChildIsLegalToAdd:(id)arg1;
- (id)pluralTypeNameForIssues;
- (id)typeNameForIssues;
- (id)descriptionShortClassName;
- (id)imageRepForImageRepIdentifier:(id)arg1;
- (id)imageRepForSlot:(id)arg1;
- (id)imageRepForIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (BOOL)canBeEmbeddedInFolder;
- (BOOL)canHaveChildren;
- (id)identifier;
- (id)displayName;
@property(copy, nonatomic) NSString *imageName;
- (id)validatedFileNameForProposedImageName:(id)arg1;
- (id)enclosingMultipartImageIncludingReceiver;

@end

