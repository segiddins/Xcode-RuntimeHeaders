//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTLibraryKit/NSObject-Protocol.h>
#import <DVTLibraryKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSCollectionViewLayout, NSCollectionViewLayoutAttributes;

@protocol NSCollectionViewElement <NSObject, NSUserInterfaceItemIdentification>

@optional
- (NSCollectionViewLayoutAttributes *)preferredLayoutAttributesFittingAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)didTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)willTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)applyLayoutAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)prepareForReuse;
@end

