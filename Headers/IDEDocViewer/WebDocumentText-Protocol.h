//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEDocViewer/NSObject-Protocol.h>

@class NSAttributedString, NSString;

@protocol WebDocumentText <NSObject>
- (void)deselectAll;
- (void)selectAll;
- (NSAttributedString *)selectedAttributedString;
- (NSString *)selectedString;
- (NSAttributedString *)attributedString;
- (NSString *)string;
- (BOOL)supportsTextEncoding;
@end

