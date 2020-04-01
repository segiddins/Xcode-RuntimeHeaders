//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTTableCellViewStatusView-Protocol.h>

@class IDEIssueStatusImageView, NSArray, NSImage, NSProgressIndicator;

@interface IDELogNavigatorStatusView : DVTStructuredLayoutView <DVTTableCellViewStatusView>
{
    IDEIssueStatusImageView *_statusImageView;
    NSProgressIndicator *_progressIndicator;
    long long _progressValue;
    id _representedObject;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
@property(readonly) IDEIssueStatusImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) long long progressValue; // @synthesize progressValue=_progressValue;
- (void).cxx_destruct;
@property(nonatomic) long long tableViewRowSizeStyle;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
@property(readonly) BOOL hasDisplayableStatus;
- (void)setBackgroundStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *statusImages;
@property(retain, nonatomic) NSImage *statusImage;
- (id)init;

@end

