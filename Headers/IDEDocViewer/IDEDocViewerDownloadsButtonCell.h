//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@interface IDEDocViewerDownloadsButtonCell : NSButtonCell
{
    double _progress;
}

+ (id)_progressFillMaskImage;
+ (id)_progressOutlineImage;
+ (id)_progressTrackImage;
+ (id)_progressIndeterminateFillImage;
+ (id)_progressFillImage;
+ (id)_downloadsArrowImage;
@property double progress; // @synthesize progress=_progress;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (id)init;
- (id)initImageCell:(id)arg1;

@end

