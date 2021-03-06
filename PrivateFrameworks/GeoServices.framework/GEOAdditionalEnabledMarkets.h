/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {
    NSMutableArray * _transitMarkets;
}

@property (nonatomic, retain) NSMutableArray *transitMarkets;

+ (id)_additionalEnabledTransitMarkets;
+ (id)additionalEnabledMarkets;

- (void)addTransitMarket:(id)arg1;
- (void)clearTransitMarkets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryParameters;
- (id)queryString;
- (BOOL)readFrom:(id)arg1;
- (void)reload;
- (void)setTransitMarkets:(id)arg1;
- (id)transitMarketAtIndex:(unsigned int)arg1;
- (id)transitMarkets;
- (unsigned int)transitMarketsCount;
- (void)writeTo:(id)arg1;

@end
