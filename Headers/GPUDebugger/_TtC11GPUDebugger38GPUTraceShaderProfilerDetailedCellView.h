//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/_TtC11GPUDebugger36GPUTraceShaderProfilerLegendCellView.h>

#import <GPUDebugger/NSTableViewDataSource-Protocol.h>
#import <GPUDebugger/NSTableViewDelegate-Protocol.h>

@class MISSING_TYPE, NSTableView;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger38GPUTraceShaderProfilerDetailedCellView : _TtC11GPUDebugger36GPUTraceShaderProfilerLegendCellView <NSTableViewDataSource, NSTableViewDelegate>
{
    MISSING_TYPE *detailTableView;
    MISSING_TYPE *opcodeType;
    MISSING_TYPE *detailItems;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(nonatomic) __weak NSTableView *detailTableView; // @synthesize detailTableView;

@end

