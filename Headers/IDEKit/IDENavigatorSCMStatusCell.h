//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutTextFieldCell.h>

@class NSAttributedString, NSString;

@interface IDENavigatorSCMStatusCell : DVTStructuredLayoutTextFieldCell
{
    NSString *_localStatus;
    NSString *_serverStatus;
    NSAttributedString *_localAttrString;
    NSAttributedString *_serverAttrString;
    BOOL _hideLocalStatus;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
+ (struct CGSize)singleItemMaxSize;
+ (void)initialize;
@property BOOL hideLocalStatus; // @synthesize hideLocalStatus=_hideLocalStatus;
@property(copy, nonatomic) NSString *serverStatus; // @synthesize serverStatus=_serverStatus;
@property(copy, nonatomic) NSString *localStatus; // @synthesize localStatus=_localStatus;
- (void).cxx_destruct;
@property(readonly) BOOL hasDisplayableStatus;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (void)_updateTitle;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_bezelPathInRect:(struct CGRect)arg1;
- (void)_drawStatusString:(id)arg1 inPathRect:(struct CGRect)arg2 view:(id)arg3;
- (id)_fontForSize:(double)arg1 bold:(BOOL)arg2;
- (id)_createServerStatusAttributedString;
- (id)_createLocalStatusAttributedString;
- (id)init;

@end

