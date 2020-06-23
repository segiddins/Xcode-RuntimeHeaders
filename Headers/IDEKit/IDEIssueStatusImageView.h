//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTTableCellViewStatusView-Protocol.h>

@class NSArray, NSImage;

@interface IDEIssueStatusImageView : DVTStructuredLayoutView <DVTTableCellViewStatusView>
{
    long long _dvt_rowSizeStyle;
    long long _backgroundStyle;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long dvt_rowSizeStyle; // @synthesize dvt_rowSizeStyle=_dvt_rowSizeStyle;
@property(readonly) BOOL hasDisplayableStatus;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (double)computeHeightAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)set_Dvt_rowSizeStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *images;
@property(retain, nonatomic) NSImage *image;

@end

