//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSDictionary, NSFont, NSNumberFormatter;

@interface DVTGraphStyle : NSObject
{
    NSDictionary *_axisLabelAttributes;
    BOOL _showsAxis;
    BOOL _showsXAxisLabels;
    BOOL _showsYAxisLabels;
    BOOL _showsXAxisMajorGridlines;
    BOOL _showsYAxisMajorGridlines;
    int _graphBorderStyle;
    NSColor *_viewBackgroundColor;
    double _graphTitleOffset;
    NSColor *_graphBackgroundColor;
    NSColor *_graphBorderColor;
    double _graphBorderWidth;
    NSColor *_axisColor;
    NSColor *_axisLabelColor;
    NSFont *_axisLabelFont;
    double _xAxisLabelOffset;
    double _yAxisLabelOffset;
    double _xAxisTitleOffset;
    double _yAxisTitleOffset;
    NSNumberFormatter *_xAxisNumberFormatter;
    NSNumberFormatter *_yAxisNumberFormatter;
    NSColor *_majorGridlinesColor;
}

@property(copy, nonatomic) NSColor *majorGridlinesColor; // @synthesize majorGridlinesColor=_majorGridlinesColor;
@property(nonatomic) BOOL showsYAxisMajorGridlines; // @synthesize showsYAxisMajorGridlines=_showsYAxisMajorGridlines;
@property(nonatomic) BOOL showsXAxisMajorGridlines; // @synthesize showsXAxisMajorGridlines=_showsXAxisMajorGridlines;
@property(nonatomic) BOOL showsYAxisLabels; // @synthesize showsYAxisLabels=_showsYAxisLabels;
@property(nonatomic) BOOL showsXAxisLabels; // @synthesize showsXAxisLabels=_showsXAxisLabels;
@property(copy, nonatomic) NSNumberFormatter *yAxisNumberFormatter; // @synthesize yAxisNumberFormatter=_yAxisNumberFormatter;
@property(copy, nonatomic) NSNumberFormatter *xAxisNumberFormatter; // @synthesize xAxisNumberFormatter=_xAxisNumberFormatter;
@property(nonatomic) double yAxisTitleOffset; // @synthesize yAxisTitleOffset=_yAxisTitleOffset;
@property(nonatomic) double xAxisTitleOffset; // @synthesize xAxisTitleOffset=_xAxisTitleOffset;
@property(nonatomic) double yAxisLabelOffset; // @synthesize yAxisLabelOffset=_yAxisLabelOffset;
@property(nonatomic) double xAxisLabelOffset; // @synthesize xAxisLabelOffset=_xAxisLabelOffset;
@property(copy, nonatomic) NSFont *axisLabelFont; // @synthesize axisLabelFont=_axisLabelFont;
@property(copy, nonatomic) NSColor *axisLabelColor; // @synthesize axisLabelColor=_axisLabelColor;
@property(copy, nonatomic) NSColor *axisColor; // @synthesize axisColor=_axisColor;
@property(nonatomic) BOOL showsAxis; // @synthesize showsAxis=_showsAxis;
@property(nonatomic) int graphBorderStyle; // @synthesize graphBorderStyle=_graphBorderStyle;
@property(nonatomic) double graphBorderWidth; // @synthesize graphBorderWidth=_graphBorderWidth;
@property(copy, nonatomic) NSColor *graphBorderColor; // @synthesize graphBorderColor=_graphBorderColor;
@property(copy, nonatomic) NSColor *graphBackgroundColor; // @synthesize graphBackgroundColor=_graphBackgroundColor;
@property(nonatomic) double graphTitleOffset; // @synthesize graphTitleOffset=_graphTitleOffset;
@property(copy, nonatomic) NSColor *viewBackgroundColor; // @synthesize viewBackgroundColor=_viewBackgroundColor;
- (void).cxx_destruct;
- (void)_sendStyleChangedNotification;
@property(readonly) NSDictionary *axisLabelAttributes;
- (void)setAxisLabelsFont:(id)arg1;
- (id)init;

@end

