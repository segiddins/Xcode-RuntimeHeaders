//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s12SourceEditor0aB6GutterCN.h"

#import <DVTSourceEditor/DVTTextSidebar-Protocol.h>

@interface _$s12SourceEditor0aB6GutterCN (DVTSourceEditor) <DVTTextSidebar>
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineNumber:(unsigned long long)arg3;
- (struct CGRect)sidebarMarkerRectForTextAnnotation:(id)arg1;
- (id)sidebarMarkerParentView;
- (id)viewForPopover;
- (id)window;
@end
