/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>

@required

- (NSArray *)connections;
- (NSString *)displayName;
- (NSArray *)incidents;
- (BOOL)isTransitIncidentsTTLExpired;
- (NSArray *)labelItems;
- (NSArray *)lines;
- (unsigned int)linesCount;
- (NSArray *)systems;
- (unsigned int)systemsCount;

@end
