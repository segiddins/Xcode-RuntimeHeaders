//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTDelayedInvocation, NSColor, NSObject;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGColor;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct DelayedTouchEvent;

struct GTFGKEdge {
    id _field1;
    id _field2;
};

struct SKCameraState {
    double cachedViewScale;
    struct CGPoint cachedViewTranslation;
    struct CGPoint userViewTranslation;
    struct CGPoint lastViewTranslation;
    double lastViewScale;
};

struct SKColorPalette {
    struct CGColor *grayColor;
    struct CGColor *blueColor;
    struct CGColor *lightBlueColor;
    struct CGColor *blackColor;
    struct CGColor *whiteColor;
    struct CGColor *goldColor;
    struct CGColor *greenColor;
    struct CGColor *graphColor;
    struct CGColor *graphOutlineColor;
    struct CGColor *snappingColor;
    struct CGColor *selectionFillColor;
    struct CGColor *selectionColor;
    struct CGColor *tileMapNodeBorder[2];
    NSColor *cameraBounds[2];
    NSColor *goldNSColor;
};

struct SKInputData {
    struct SKSceneEditInputLocation location;
    NSObject *clickedNode;
    unsigned long long state;
    unsigned long long handle;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> startPositions;
    struct CGPoint startPosition;
    double startRotation;
    struct CGPoint startScale;
    struct CGPoint startAnchorPoint;
    struct vector<NSObject<SKSceneManipulating, SKSceneNavigating>*, std::__1::allocator<NSObject<SKSceneManipulating, SKSceneNavigating>*>> targetItems;
    NSObject *targetItem;
};

struct SKManipulationHandleSet {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
    struct CGPoint _field6;
    struct CGPoint _field7;
    struct CGPoint _field8;
    struct CGPoint _field9;
    struct CGPoint _field10;
    struct CGPoint _field11;
};

struct SKSceneEditInputLocation {
    struct CGPoint start;
    struct CGPoint current;
    struct CGPoint last;
    struct CGPoint viewStart;
    struct CGPoint viewCurrent;
    struct CGPoint viewLast;
};

struct SKSceneOverlayHandleInfo {
    id _field1;
    unsigned long long _field2;
};

struct SKTrackpadInputData {
    struct vector<double, std::__1::allocator<double>> startRotations;
    struct vector<NSObject<SKSceneManipulating, SKSceneNavigating>*, std::__1::allocator<NSObject<SKSceneManipulating, SKSceneNavigating>*>> rotationItems;
    DVTDelayedInvocation *rotationCommitInvocation;
    char isTrackingTwoFingerGesture;
    id twoFingerGestureTouch1ID;
    struct CGPoint lastTwoFingerGestureLocation;
};

struct SnapResult {
    _Bool _field1;
    _Bool _field2;
    float _field3;
    float _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<std::__1::basic_string<char>, CGImage *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CGImage *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, CGImage *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, CGImage *>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, CGImage *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, CGImage *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, CGImage *>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<DelayedTouchEvent, std::__1::default_delete<DelayedTouchEvent>> {
    struct __compressed_pair<DelayedTouchEvent *, std::__1::default_delete<DelayedTouchEvent>> {
        struct DelayedTouchEvent *__value_;
    } __ptr_;
};

struct vector<CGPoint, std::__1::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
};

struct vector<NSObject<SKSceneManipulating, SKSceneNavigating>*, std::__1::allocator<NSObject<SKSceneManipulating, SKSceneNavigating>*>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<NSObject<SKSceneManipulating, SKSceneNavigating>*__strong *, std::__1::allocator<NSObject<SKSceneManipulating, SKSceneNavigating>*>> {
        id *__value_;
    } __end_cap_;
};

struct vector<SKManipulationHandleSet, std::__1::allocator<SKManipulationHandleSet>> {
    struct SKManipulationHandleSet *__begin_;
    struct SKManipulationHandleSet *__end_;
    struct __compressed_pair<SKManipulationHandleSet *, std::__1::allocator<SKManipulationHandleSet>> {
        struct SKManipulationHandleSet *__value_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

