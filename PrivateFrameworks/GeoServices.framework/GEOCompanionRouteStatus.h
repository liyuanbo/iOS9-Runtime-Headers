/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {
    unsigned int  _distanceRemainingOnRoute;
    unsigned int  _distanceToManeuver;
    unsigned int  _distanceToRoute;
    int  _feedbackType;
    BOOL  _guidancePromptsEnabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int distanceRemainingOnRoute : 1; 
        unsigned int distanceToManeuver : 1; 
        unsigned int distanceToRoute : 1; 
        unsigned int feedbackType : 1; 
        unsigned int remainingTime : 1; 
        unsigned int routeLocationIndex : 1; 
        unsigned int routeLocationOffset : 1; 
        unsigned int stepID : 1; 
        unsigned int guidancePromptsEnabled : 1; 
    }  _has;
    GEOLocation * _location;
    unsigned int  _remainingTime;
    NSData * _routeID;
    unsigned int  _routeLocationIndex;
    float  _routeLocationOffset;
    GEOLatLng * _routeMatchCoordinate;
    unsigned int  _stepID;
    double  _timestamp;
}

@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) unsigned int distanceToRoute;
@property (nonatomic, readonly) unsigned int effectiveDistanceToManeuver;
@property (nonatomic, readonly) unsigned int effectiveStepID;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (nonatomic) BOOL hasDistanceRemainingOnRoute;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasDistanceToRoute;
@property (nonatomic, readonly) BOOL hasEffectiveDistanceToManeuver;
@property (nonatomic, readonly) BOOL hasEffectiveStepID;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasGuidancePromptsEnabled;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic, readonly) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteLocationIndex;
@property (nonatomic) BOOL hasRouteLocationOffset;
@property (nonatomic, readonly) BOOL hasRouteMatchCoordinate;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL isNavigating;
@property (nonatomic, readonly) BOOL isPreviewingNavigation;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned int remainingTime;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic, retain) GEOLatLng *routeMatchCoordinate;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceRemainingOnRoute;
- (unsigned int)distanceToManeuver;
- (unsigned int)distanceToRoute;
- (unsigned int)effectiveDistanceToManeuver;
- (unsigned int)effectiveStepID;
- (int)feedbackType;
- (BOOL)guidancePromptsEnabled;
- (BOOL)hasDistanceRemainingOnRoute;
- (BOOL)hasDistanceToManeuver;
- (BOOL)hasDistanceToRoute;
- (BOOL)hasEffectiveDistanceToManeuver;
- (BOOL)hasEffectiveStepID;
- (BOOL)hasFeedbackType;
- (BOOL)hasGuidancePromptsEnabled;
- (BOOL)hasLocation;
- (BOOL)hasRemainingTime;
- (BOOL)hasRouteID;
- (BOOL)hasRouteLocationIndex;
- (BOOL)hasRouteLocationOffset;
- (BOOL)hasRouteMatchCoordinate;
- (BOOL)hasStepID;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNavigating;
- (BOOL)isPreviewingNavigation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)remainingTime;
- (id)routeID;
- (unsigned int)routeLocationIndex;
- (float)routeLocationOffset;
- (id)routeMatchCoordinate;
- (void)setDistanceRemainingOnRoute:(unsigned int)arg1;
- (void)setDistanceToManeuver:(unsigned int)arg1;
- (void)setDistanceToRoute:(unsigned int)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHasDistanceRemainingOnRoute:(BOOL)arg1;
- (void)setHasDistanceToManeuver:(BOOL)arg1;
- (void)setHasDistanceToRoute:(BOOL)arg1;
- (void)setHasFeedbackType:(BOOL)arg1;
- (void)setHasGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHasRemainingTime:(BOOL)arg1;
- (void)setHasRouteLocationIndex:(BOOL)arg1;
- (void)setHasRouteLocationOffset:(BOOL)arg1;
- (void)setHasStepID:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setRemainingTime:(unsigned int)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteLocationIndex:(unsigned int)arg1;
- (void)setRouteLocationOffset:(float)arg1;
- (void)setRouteMatchCoordinate:(id)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned int)stepID;
- (double)timestamp;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned int)arg3 nextAnnouncementStage:(unsigned int)arg4 nextAnnouncementTime:(double)arg5;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (void)writeTo:(id)arg1;

@end
