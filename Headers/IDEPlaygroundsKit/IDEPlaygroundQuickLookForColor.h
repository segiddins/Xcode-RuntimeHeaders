//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundsKit/IDEBasicPlaygroundQuickLookForObjectReflection.h>

@class DVTColorSwatchWithComponentsView, NSView;

@interface IDEPlaygroundQuickLookForColor : IDEBasicPlaygroundQuickLookForObjectReflection
{
    NSView *_naturalView;
    DVTColorSwatchWithComponentsView *_naturalColorSwatchWithComponentsView;
}

- (void).cxx_destruct;
@property __weak DVTColorSwatchWithComponentsView *naturalColorSwatchWithComponentsView; // @synthesize naturalColorSwatchWithComponentsView=_naturalColorSwatchWithComponentsView;
@property __weak NSView *naturalView; // @synthesize naturalView=_naturalView;
- (id)iconOnlyViewForCollectionView;
- (id)quickLookViewForNaturalSize;
- (void)loadView;
- (id)initWithObjectReflection:(id)arg1;

@end

