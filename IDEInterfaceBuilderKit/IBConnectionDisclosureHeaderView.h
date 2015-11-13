//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTDisclosureHeaderView.h>

@class IBConnectionInterfaceStyle, IBImageButton;

@interface IBConnectionDisclosureHeaderView : DVTDisclosureHeaderView
{
    IBImageButton *disclosureImageButton;
    IBConnectionInterfaceStyle *connectionInterfaceStyle;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)disclosureClicked:(id)arg1;
- (void)layoutBottomUp;
- (double)preferredHeight;
- (struct CGRect)titleFrame;
- (struct CGRect)disclosureButtonFrame;
- (void)setDisclosed:(BOOL)arg1;
- (id)connectionInterfaceStyle;
- (id)frameView;
- (id)initWithFrame:(struct CGRect)arg1 andInterfaceStyle:(id)arg2;

@end

