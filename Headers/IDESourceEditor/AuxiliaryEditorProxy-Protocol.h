//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDEMediaLibraryController, NSArray, NSPasteboard, NSSet;

@protocol AuxiliaryEditorProxy <NSObject>
- (void)populatePasteboard:(NSPasteboard *)arg1 withVariantSets:(NSArray *)arg2 in:(IDEMediaLibraryController *)arg3;
@property(nonatomic, readonly) NSSet *additionalLibraryIdentifiers;
@property(nonatomic, readonly) NSSet *inspectorCategoryIdentifiers;
@end
