/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct AVAudioPlayerCpp;

struct AudioChannelDescription {
    unsigned int _field1;
    unsigned int _field2;
    float _field3[3];
};

struct AudioChannelLayout {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AudioChannelDescription _field4[1];
};

struct AudioFilePacketTableInfo {
    long long _field1;
    int _field2;
    int _field3;
};

struct AudioFormatListItem;

struct AudioPlayerImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    struct AVAudioPlayerCpp *_field6;
    id _field7;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueLevelMeterState;

struct AudioRecorderImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    unsigned int _field6;
    struct AudioStreamBasicDescription _field7;
    struct OpaqueAudioFileID *_field8;
    struct OpaqueAudioQueue *_field9;
    long long _field10;
    long long _field11;
    long long _field12;
    double _field13;
    double _field14;
    double _field15;
    unsigned int _field16;
    char *_field17;
    unsigned int _field18;
    struct AudioFormatListItem *_field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct AudioQueueLevelMeterState *_field27;
    struct AudioQueueBuffer *_field28[4];
    struct AudioQueueBuffer *_field29;
    _Bool _field30;
    unsigned int _field31;
    _Bool _field32;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioValueRange {
    double _field1;
    double _field2;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct CATransform3D {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct ChannelDescriptionImpl {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct ControllerImpl {
    id _field1;
    id _field2;
    id _field3;
    struct CAStreamBasicDescription _field4;
    double _field5;
    _Bool _field6;
    struct AudioQueueLevelMeterState *_field7;
    struct OpaqueAudioQueue *_field8;
    int _field9;
    struct OpaqueAudioConverter *_field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    struct AudioQueueBuffer **_field15;
    unsigned long long _field16;
    int _field17;
    int _field18;
    _Bool _field19;
    struct MemorySyncBool _field20;
    _Bool _field21;
    float _field22;
    id _field23;
    unsigned int _field24;
    id _field25;
    struct CAStreamBasicDescription _field26;
    double _field27;
    struct OpaqueAudioQueue *_field28;
    int _field29;
    id _field30;
    unsigned int _field31;
    struct AudioQueueBuffer **_field32;
    int _field33;
    _Bool _field34;
    _Bool _field35;
    _Bool _field36;
    _Bool _field37;
    struct MemorySyncBool _field38;
    _Bool _field39;
    float _field40;
    unsigned int _field41;
    struct CAStreamBasicDescription _field42;
    long long _field43;
    struct OpaqueAudioQueue *_field44;
    struct map<AVVoiceAlertType, NSURL *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *>>> _field45;
    struct map<AVVoiceAlertType, AudioQueueBuffer *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> _field46;
    _Bool _field47;
    int _field48;
    float _field49;
    double _field50;
    unsigned long long _field51;
    float _field52;
    float _field53;
    struct OpaqueAudioQueue *_field54;
    id _field55;
    struct OpaqueAudioFileID *_field56;
    unsigned int _field57;
    struct AudioFormatListItem *_field58;
    unsigned int _field59;
    unsigned int _field60;
    char *_field61;
    struct AudioFilePacketTableInfo _field62;
    long long _field63;
    long long _field64;
    _Bool _field65;
    int _field66;
    int _field67;
    id _field68;
    _Bool _field69;
    _Bool _field70;
    _Bool _field71;
    _Bool _field72;
    int _field73;
    double _field74;
    double _field75;
    double _field76;
    _Bool _field77;
    _Bool _field78;
    id _field79;
    unsigned char _field80;
    int _field81;
    _Bool _field82;
    _Bool _field83;
    int _field84;
    _Bool _field85;
    struct _opaque_pthread_mutex_t {
        long _field1;
        char _field2[40];
    } _field86[5];
    int _field87;
};

struct DataSourceDescriptionImpl {
    id _field1;
    id _field2;
};

struct MemorySyncBool {
    _Bool _field1;
};

struct MyAudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct OpaqueAudioConverter;

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct PortDescriptionImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct RouteDescriptionImpl {
    id _field1;
    id _field2;
};

struct SubtitleLayoutParameters {
    struct CGRect _field1;
    struct CGSize _field2;
    struct CGAffineTransform _field3;
    unsigned char _field4;
    float _field5;
    int _field6;
};

struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, AudioQueueBuffer *>, std::_Select1st<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> {
    struct _Rb_tree_impl<std::less<AVVoiceAlertType>, false> _field1;
};

struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, NSURL *>, std::_Select1st<std::pair<const AVVoiceAlertType, NSURL *>>, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *>>> {
    struct _Rb_tree_impl<std::less<AVVoiceAlertType>, false> _field1;
};

struct _Rb_tree_impl<std::less<AVVoiceAlertType>, false> {
    struct less<AVVoiceAlertType> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned int _field3;
};

struct _Rb_tree_node_base {
    int _field1;
    struct _Rb_tree_node_base *_field2;
    struct _Rb_tree_node_base *_field3;
    struct _Rb_tree_node_base *_field4;
};

struct less<AVVoiceAlertType>;

struct map<AVVoiceAlertType, AudioQueueBuffer *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> {
    struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, AudioQueueBuffer *>, std::_Select1st<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> _field1;
};

struct map<AVVoiceAlertType, NSURL *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *>>> {
    struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, NSURL *>, std::_Select1st<std::pair<const AVVoiceAlertType, NSURL *>>, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *>>> _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    CDStruct_e83c9415 source;
    CDStruct_e83c9415 target;
} CDStruct_82206317;

