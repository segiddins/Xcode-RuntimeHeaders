//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AlignedCharArrayUnion<char, char, char, char, char, char, char, char, char, char> {
    char _field1[1];
};

struct CXUnsavedFile {
    char *_field1;
    char *_field2;
    unsigned long long _field3;
};

struct CanonicalFilePath {
    struct SmallString<128> _field1;
};

struct CompileTrackingCallbacks;

struct Compiler;

struct IDEIndexRefactoringEdit {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    char *_field6;
    struct IDEIndexRenameRangeGroup *_field7;
    unsigned int _field8;
};

struct IDEIndexRenameRange {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct IDEIndexRenameRangeGroup {
    int _field1;
    struct IDEIndexRenameRange *_field2;
    unsigned int _field3;
};

struct IndexModificationTime {
    unsigned long long nanoseconds;
};

struct IndexSystem;

struct IndexSystemWrapper {
    shared_ptr_971d954e _boltDB;
    struct SmartMutex<false> Mtx;
};

struct IndexableInfo {
    struct StringSet<indexstoredb_llvm::MallocAllocator> outPaths;
    _Bool hasTestSymbols;
};

struct IndexerCallbacks;

struct LibclangLibrary;

struct LibmetalLibrary;

struct MallocAllocator;

struct MutexImpl {
    void *data_;
};

struct OutOfDateTriggerHint;

struct ProcessedUnitInfo;

struct SKToolchainUIDKeyStrings {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    char *_field10;
    char *_field11;
    char *_field12;
    char *_field13;
    char *_field14;
    char *_field15;
    char *_field16;
    char *_field17;
    char *_field18;
    char *_field19;
    char *_field20;
    char *_field21;
    char *_field22;
    char *_field23;
    char *_field24;
    char *_field25;
    char *_field26;
    char *_field27;
    char *_field28;
    char *_field29;
    char *_field30;
    char *_field31;
    char *_field32;
    char *_field33;
    char *_field34;
    char *_field35;
    char *_field36;
    char *_field37;
    char *_field38;
    char *_field39;
    char *_field40;
    char *_field41;
    char *_field42;
    char *_field43;
    char *_field44;
    char *_field45;
    char *_field46;
    char *_field47;
    char *_field48;
    char *_field49;
    char *_field50;
    char *_field51;
    char *_field52;
    char *_field53;
    char *_field54;
    char *_field55;
    char *_field56;
    char *_field57;
    char *_field58;
    char *_field59;
    char *_field60;
    char *_field61;
    char *_field62;
    char *_field63;
    char *_field64;
    char *_field65;
    char *_field66;
    char *_field67;
    char *_field68;
    char *_field69;
};

struct SKToolchainUIDKeys;

struct SKToolchainUIDRequests;

struct SKToolchainUIDSet {
    struct SKToolchainUIDKeys *_field1;
    struct SKToolchainUIDKeyStrings *_field2;
    struct SKToolchainUIDRequests *_field3;
    struct SKToolchainUIDValues *_field4;
};

struct SKToolchainUIDValues;

struct ScanFileInfo;

struct SmallString<128> {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AlignedCharArrayUnion<char, char, char, char, char, char, char, char, char, char> _field4[128];
};

struct SmartMutex<false> {
    struct MutexImpl impl;
    unsigned int acquired;
    _Bool recursive;
};

struct StringMap<SKIndexable *, indexstoredb_llvm::MallocAllocator> {
    struct StringMapEntryBase **TheTable;
    unsigned int NumBuckets;
    unsigned int NumItems;
    unsigned int NumTombstones;
    unsigned int ItemSize;
    struct MallocAllocator Allocator;
};

struct StringMapEntryBase;

struct StringSet<indexstoredb_llvm::MallocAllocator> {
    struct StringMapEntryBase **TheTable;
    unsigned int NumBuckets;
    unsigned int NumItems;
    unsigned int NumTombstones;
    unsigned int ItemSize;
    struct MallocAllocator Allocator;
};

struct Toolchain;

struct ToolchainRegistry;

struct Variant {
    unsigned long long data[3];
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long _field1;
};

struct libclang_functions_s {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    CDUnknownFunctionPointerType _field28;
    CDUnknownFunctionPointerType _field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownFunctionPointerType _field31;
    CDUnknownFunctionPointerType _field32;
    CDUnknownFunctionPointerType _field33;
    CDUnknownFunctionPointerType _field34;
    CDUnknownFunctionPointerType _field35;
    CDUnknownFunctionPointerType _field36;
    CDUnknownFunctionPointerType _field37;
    CDUnknownFunctionPointerType _field38;
    CDUnknownFunctionPointerType _field39;
    CDUnknownFunctionPointerType _field40;
    CDUnknownFunctionPointerType _field41;
    CDUnknownFunctionPointerType _field42;
    CDUnknownFunctionPointerType _field43;
    CDUnknownFunctionPointerType _field44;
    CDUnknownFunctionPointerType _field45;
    CDUnknownFunctionPointerType _field46;
    CDUnknownFunctionPointerType _field47;
    CDUnknownFunctionPointerType _field48;
    CDUnknownFunctionPointerType _field49;
    CDUnknownFunctionPointerType _field50;
    CDUnknownFunctionPointerType _field51;
    CDUnknownFunctionPointerType _field52;
    CDUnknownFunctionPointerType _field53;
    CDUnknownFunctionPointerType _field54;
    CDUnknownFunctionPointerType _field55;
    CDUnknownFunctionPointerType _field56;
    CDUnknownFunctionPointerType _field57;
    CDUnknownFunctionPointerType _field58;
    CDUnknownFunctionPointerType _field59;
    CDUnknownFunctionPointerType _field60;
    CDUnknownFunctionPointerType _field61;
    CDUnknownFunctionPointerType _field62;
    CDUnknownFunctionPointerType _field63;
    CDUnknownFunctionPointerType _field64;
    CDUnknownFunctionPointerType _field65;
    CDUnknownFunctionPointerType _field66;
    CDUnknownFunctionPointerType _field67;
    CDUnknownFunctionPointerType _field68;
    CDUnknownFunctionPointerType _field69;
    CDUnknownFunctionPointerType _field70;
    CDUnknownFunctionPointerType _field71;
    CDUnknownFunctionPointerType _field72;
    CDUnknownFunctionPointerType _field73;
    CDUnknownFunctionPointerType _field74;
    CDUnknownFunctionPointerType _field75;
    CDUnknownFunctionPointerType _field76;
    CDUnknownFunctionPointerType _field77;
    CDUnknownFunctionPointerType _field78;
    CDUnknownFunctionPointerType _field79;
    CDUnknownFunctionPointerType _field80;
    CDUnknownFunctionPointerType _field81;
    CDUnknownFunctionPointerType _field82;
    CDUnknownFunctionPointerType _field83;
    CDUnknownFunctionPointerType _field84;
    CDUnknownFunctionPointerType _field85;
    CDUnknownFunctionPointerType _field86;
    CDUnknownFunctionPointerType _field87;
    CDUnknownFunctionPointerType _field88;
    CDUnknownFunctionPointerType _field89;
    CDUnknownFunctionPointerType _field90;
    CDUnknownFunctionPointerType _field91;
    CDUnknownFunctionPointerType _field92;
    CDUnknownFunctionPointerType _field93;
    CDUnknownFunctionPointerType _field94;
    CDUnknownFunctionPointerType _field95;
    CDUnknownFunctionPointerType _field96;
    CDUnknownFunctionPointerType _field97;
    CDUnknownFunctionPointerType _field98;
    CDUnknownFunctionPointerType _field99;
    CDUnknownFunctionPointerType _field100;
    CDUnknownFunctionPointerType _field101;
    CDUnknownFunctionPointerType _field102;
    CDUnknownFunctionPointerType _field103;
    CDUnknownFunctionPointerType _field104;
    CDUnknownFunctionPointerType _field105;
    CDUnknownFunctionPointerType _field106;
    CDUnknownFunctionPointerType _field107;
    CDUnknownFunctionPointerType _field108;
    CDUnknownFunctionPointerType _field109;
    CDUnknownFunctionPointerType _field110;
    CDUnknownFunctionPointerType _field111;
    CDUnknownFunctionPointerType _field112;
    CDUnknownFunctionPointerType _field113;
    CDUnknownFunctionPointerType _field114;
    CDUnknownFunctionPointerType _field115;
    CDUnknownFunctionPointerType _field116;
    CDUnknownFunctionPointerType _field117;
    CDUnknownFunctionPointerType _field118;
    CDUnknownFunctionPointerType _field119;
    CDUnknownFunctionPointerType _field120;
    CDUnknownFunctionPointerType _field121;
    CDUnknownFunctionPointerType _field122;
    CDUnknownFunctionPointerType _field123;
    CDUnknownFunctionPointerType _field124;
    CDUnknownFunctionPointerType _field125;
    CDUnknownFunctionPointerType _field126;
    CDUnknownFunctionPointerType _field127;
    CDUnknownFunctionPointerType _field128;
    CDUnknownFunctionPointerType _field129;
    CDUnknownFunctionPointerType _field130;
    CDUnknownFunctionPointerType _field131;
    CDUnknownFunctionPointerType _field132;
    CDUnknownFunctionPointerType _field133;
    CDUnknownFunctionPointerType _field134;
    CDUnknownFunctionPointerType _field135;
    CDUnknownFunctionPointerType _field136;
    CDUnknownFunctionPointerType _field137;
    CDUnknownFunctionPointerType _field138;
    CDUnknownFunctionPointerType _field139;
    CDUnknownFunctionPointerType _field140;
    CDUnknownFunctionPointerType _field141;
    CDUnknownFunctionPointerType _field142;
    CDUnknownFunctionPointerType _field143;
    CDUnknownFunctionPointerType _field144;
    CDUnknownFunctionPointerType _field145;
    CDUnknownFunctionPointerType _field146;
    CDUnknownFunctionPointerType _field147;
    CDUnknownFunctionPointerType _field148;
    CDUnknownFunctionPointerType _field149;
    CDUnknownFunctionPointerType _field150;
    CDUnknownFunctionPointerType _field151;
    CDUnknownFunctionPointerType _field152;
    CDUnknownFunctionPointerType _field153;
    CDUnknownFunctionPointerType _field154;
    CDUnknownFunctionPointerType _field155;
    CDUnknownFunctionPointerType _field156;
    CDUnknownFunctionPointerType _field157;
    CDUnknownFunctionPointerType _field158;
    CDUnknownFunctionPointerType _field159;
    CDUnknownFunctionPointerType _field160;
    CDUnknownFunctionPointerType _field161;
    CDUnknownFunctionPointerType _field162;
    CDUnknownFunctionPointerType _field163;
    CDUnknownFunctionPointerType _field164;
    CDUnknownFunctionPointerType _field165;
    CDUnknownFunctionPointerType _field166;
    CDUnknownFunctionPointerType _field167;
    CDUnknownFunctionPointerType _field168;
    CDUnknownFunctionPointerType _field169;
    CDUnknownFunctionPointerType _field170;
    CDUnknownFunctionPointerType _field171;
    CDUnknownFunctionPointerType _field172;
    CDUnknownFunctionPointerType _field173;
    CDUnknownFunctionPointerType _field174;
    CDUnknownFunctionPointerType _field175;
    CDUnknownFunctionPointerType _field176;
    CDUnknownFunctionPointerType _field177;
    CDUnknownFunctionPointerType _field178;
    CDUnknownFunctionPointerType _field179;
    CDUnknownFunctionPointerType _field180;
    CDUnknownFunctionPointerType _field181;
    CDUnknownFunctionPointerType _field182;
    CDUnknownFunctionPointerType _field183;
    CDUnknownFunctionPointerType _field184;
    CDUnknownFunctionPointerType _field185;
    CDUnknownFunctionPointerType _field186;
    CDUnknownFunctionPointerType _field187;
    CDUnknownFunctionPointerType _field188;
    CDUnknownFunctionPointerType _field189;
    CDUnknownFunctionPointerType _field190;
    CDUnknownFunctionPointerType _field191;
    CDUnknownFunctionPointerType _field192;
    CDUnknownFunctionPointerType _field193;
    CDUnknownFunctionPointerType _field194;
    CDUnknownFunctionPointerType _field195;
    CDUnknownFunctionPointerType _field196;
    CDUnknownFunctionPointerType _field197;
    CDUnknownFunctionPointerType _field198;
    CDUnknownFunctionPointerType _field199;
    CDUnknownFunctionPointerType _field200;
    CDUnknownFunctionPointerType _field201;
    CDUnknownFunctionPointerType _field202;
    CDUnknownFunctionPointerType _field203;
    CDUnknownFunctionPointerType _field204;
    CDUnknownFunctionPointerType _field205;
    CDUnknownFunctionPointerType _field206;
    CDUnknownFunctionPointerType _field207;
    CDUnknownFunctionPointerType _field208;
    CDUnknownFunctionPointerType _field209;
    CDUnknownFunctionPointerType _field210;
    CDUnknownFunctionPointerType _field211;
    CDUnknownFunctionPointerType _field212;
    CDUnknownFunctionPointerType _field213;
    CDUnknownFunctionPointerType _field214;
    CDUnknownFunctionPointerType _field215;
    CDUnknownFunctionPointerType _field216;
    CDUnknownFunctionPointerType _field217;
    CDUnknownFunctionPointerType _field218;
    CDUnknownFunctionPointerType _field219;
    CDUnknownFunctionPointerType _field220;
    CDUnknownFunctionPointerType _field221;
    CDUnknownFunctionPointerType _field222;
    CDUnknownFunctionPointerType _field223;
    CDUnknownFunctionPointerType _field224;
    CDUnknownFunctionPointerType _field225;
    CDUnknownFunctionPointerType _field226;
    CDUnknownFunctionPointerType _field227;
    CDUnknownFunctionPointerType _field228;
    CDUnknownFunctionPointerType _field229;
    CDUnknownFunctionPointerType _field230;
    CDUnknownFunctionPointerType _field231;
    CDUnknownFunctionPointerType _field232;
    CDUnknownFunctionPointerType _field233;
    CDUnknownFunctionPointerType _field234;
    CDUnknownFunctionPointerType _field235;
    CDUnknownFunctionPointerType _field236;
    CDUnknownFunctionPointerType _field237;
    CDUnknownFunctionPointerType _field238;
    CDUnknownFunctionPointerType _field239;
    CDUnknownFunctionPointerType _field240;
    CDUnknownFunctionPointerType _field241;
    CDUnknownFunctionPointerType _field242;
    CDUnknownFunctionPointerType _field243;
    CDUnknownFunctionPointerType _field244;
    CDUnknownFunctionPointerType _field245;
    CDUnknownFunctionPointerType _field246;
    CDUnknownFunctionPointerType _field247;
    CDUnknownFunctionPointerType _field248;
    CDUnknownFunctionPointerType _field249;
    CDUnknownFunctionPointerType _field250;
    CDUnknownFunctionPointerType _field251;
    CDUnknownFunctionPointerType _field252;
    CDUnknownFunctionPointerType _field253;
    CDUnknownFunctionPointerType _field254;
    CDUnknownFunctionPointerType _field255;
    CDUnknownFunctionPointerType _field256;
    CDUnknownFunctionPointerType _field257;
    CDUnknownFunctionPointerType _field258;
    CDUnknownFunctionPointerType _field259;
    CDUnknownFunctionPointerType _field260;
    CDUnknownFunctionPointerType _field261;
    CDUnknownFunctionPointerType _field262;
    CDUnknownFunctionPointerType _field263;
    CDUnknownFunctionPointerType _field264;
    CDUnknownFunctionPointerType _field265;
    CDUnknownFunctionPointerType _field266;
    CDUnknownFunctionPointerType _field267;
    CDUnknownFunctionPointerType _field268;
    CDUnknownFunctionPointerType _field269;
    CDUnknownFunctionPointerType _field270;
    CDUnknownFunctionPointerType _field271;
    CDUnknownFunctionPointerType _field272;
    CDUnknownFunctionPointerType _field273;
    CDUnknownFunctionPointerType _field274;
    CDUnknownFunctionPointerType _field275;
    CDUnknownFunctionPointerType _field276;
    CDUnknownFunctionPointerType _field277;
    CDUnknownFunctionPointerType _field278;
    CDUnknownFunctionPointerType _field279;
    CDUnknownFunctionPointerType _field280;
    CDUnknownFunctionPointerType _field281;
    CDUnknownFunctionPointerType _field282;
    CDUnknownFunctionPointerType _field283;
    CDUnknownFunctionPointerType _field284;
    CDUnknownFunctionPointerType _field285;
    CDUnknownFunctionPointerType _field286;
    CDUnknownFunctionPointerType _field287;
    CDUnknownFunctionPointerType _field288;
    CDUnknownFunctionPointerType _field289;
    CDUnknownFunctionPointerType _field290;
    CDUnknownFunctionPointerType _field291;
    CDUnknownFunctionPointerType _field292;
    CDUnknownFunctionPointerType _field293;
    CDUnknownFunctionPointerType _field294;
    CDUnknownFunctionPointerType _field295;
    CDUnknownFunctionPointerType _field296;
    CDUnknownFunctionPointerType _field297;
    CDUnknownFunctionPointerType _field298;
    CDUnknownFunctionPointerType _field299;
    CDUnknownFunctionPointerType _field300;
    CDUnknownFunctionPointerType _field301;
    CDUnknownFunctionPointerType _field302;
    CDUnknownFunctionPointerType _field303;
    CDUnknownFunctionPointerType _field304;
    CDUnknownFunctionPointerType _field305;
};

struct map<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct shared_ptr<IndexStoreDB::index::IndexSystem> {
    struct IndexSystem *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<IndexStoreDB::index::OutOfDateTriggerHint> {
    struct OutOfDateTriggerHint *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<SourceKit::CompileTrackingCallbacks> {
    struct CompileTrackingCallbacks *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<SourceKit::Compiler> {
    struct Compiler *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<SourceKit::LibclangLibrary> {
    struct LibclangLibrary *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<SourceKit::LibmetalLibrary> {
    struct LibmetalLibrary *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<SourceKit::Toolchain> {
    struct Toolchain *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<SourceKit::ToolchainRegistry> {
    struct ToolchainRegistry *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<SourceKit::index::IndexerCallbacks> {
    struct IndexerCallbacks *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<scan::ScanFileInfo> {
    struct ScanFileInfo *_field1;
    struct __shared_weak_count *_field2;
};

struct time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> _field1;
};

struct vector<(anonymous namespace)::ProcessedUnitInfo, std::__1::allocator<(anonymous namespace)::ProcessedUnitInfo>> {
    struct ProcessedUnitInfo *__begin_;
    struct ProcessedUnitInfo *__end_;
    struct __compressed_pair<(anonymous namespace)::ProcessedUnitInfo *, std::__1::allocator<(anonymous namespace)::ProcessedUnitInfo>> {
        struct ProcessedUnitInfo *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void *_field1;
    unsigned int _field2;
} CDStruct_f8bc7150;

typedef struct {
    int _field1;
    void *_field2[2];
} CDStruct_9b248d9b;

typedef struct {
    int _field1;
    int _field2;
    void *_field3[3];
} CDStruct_a94d320b;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_183601bc *_field1;
    unsigned int _field2;
    int _field3;
    char *_field4;
    char *_field5;
} CDStruct_bbf6ae9b;

typedef struct {
    CDStruct_183601bc *_field1;
    unsigned int _field2;
    int _field3;
    char *_field4;
} CDStruct_905ef993;

typedef struct {
    CDStruct_c0454aff _field1;
    CDStruct_c0454aff _field2;
} CDStruct_3178b2de;

typedef struct {
    CDStruct_f8bc7150 _field1;
    CDStruct_183601bc *_field2;
    unsigned int _field3;
} CDStruct_e39de028;

typedef struct {
    CDStruct_3178b2de _field1;
    CDStruct_f8bc7150 _field2;
    void *_field3;
} CDStruct_2d9ce012;

typedef struct {
    CDStruct_3178b2de _field1;
    CDStruct_f8bc7150 _field2;
} CDStruct_1efc0dff;

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_a1f69cfb;

typedef struct shared_ptr<IndexStoreDB::index::IndexSystem> {
    struct IndexSystem *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_971d954e;

typedef struct shared_ptr<IndexStoreDB::index::OutOfDateTriggerHint> {
    struct OutOfDateTriggerHint *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_c8050cd8;

typedef struct shared_ptr<SourceKit::Compiler> {
    struct Compiler *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_85c8e215;

typedef struct shared_ptr<SourceKit::Toolchain> {
    struct Toolchain *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5b685b1d;

typedef struct shared_ptr<SourceKit::ToolchainRegistry> {
    struct ToolchainRegistry *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_cc8d46f1;

typedef struct shared_ptr<SourceKit::index::IndexerCallbacks> {
    struct IndexerCallbacks *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c987a6b6;

typedef struct shared_ptr<scan::ScanFileInfo> {
    struct ScanFileInfo *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_fa216b61;

typedef struct time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> _field1;
} time_point_246828ed;

typedef struct vector<(anonymous namespace)::ProcessedUnitInfo, std::__1::allocator<(anonymous namespace)::ProcessedUnitInfo>> {
    struct ProcessedUnitInfo *__begin_;
    struct ProcessedUnitInfo *__end_;
    struct __compressed_pair<(anonymous namespace)::ProcessedUnitInfo *, std::__1::allocator<(anonymous namespace)::ProcessedUnitInfo>> {
        struct ProcessedUnitInfo *__value_;
    } __end_cap_;
} vector_708dca27;
