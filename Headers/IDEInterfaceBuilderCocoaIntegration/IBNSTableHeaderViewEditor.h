//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewEditor.h>

@protocol DVTCancellable;

@interface IBNSTableHeaderViewEditor : IBNSViewEditor
{
    id <DVTCancellable> _columnObserverToken;
}

- (void).cxx_destruct;
- (id)stringEditingContextForEvent:(id)arg1;
- (id)tableColumnAtPoint:(struct CGPoint)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (id)editedTableView;
- (id)editedTableHeaderView;

@end

