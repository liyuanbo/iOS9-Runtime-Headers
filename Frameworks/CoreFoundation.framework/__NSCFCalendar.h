/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCalendar : NSCalendar  {
}

+ (id)calendarWithIdentifier:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 toDate:(id)arg4 options:(unsigned int)arg5;
- (id)dateBySettingUnit:(unsigned int)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(int)arg2 minute:(int)arg3 second:(int)arg4 options:(unsigned int)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned int)arg2 value:(int)arg3 options:(unsigned int)arg4;
- (id)dateByAddingUnit:(unsigned int)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)components:(unsigned int)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned int)arg4;
- (BOOL)isDateInWeekend:(id)arg1;
- (BOOL)isDateInTomorrow:(id)arg1;
- (BOOL)isDateInYesterday:(id)arg1;
- (BOOL)isDateInToday:(id)arg1;
- (BOOL)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (BOOL)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned int)arg3;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)startOfDayForDate:(id)arg1;
- (id)dateWithEra:(int)arg1 yearForWeekOfYear:(int)arg2 weekOfYear:(int)arg3 weekday:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8;
- (id)dateWithEra:(int)arg1 year:(int)arg2 month:(int)arg3 day:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8;
- (int)component:(unsigned int)arg1 fromDate:(id)arg2;
- (void)getHour:(out int*)arg1 minute:(out int*)arg2 second:(out int*)arg3 nanosecond:(out int*)arg4 fromDate:(id)arg5;
- (void)getEra:(out int*)arg1 yearForWeekOfYear:(out int*)arg2 weekOfYear:(out int*)arg3 weekday:(out int*)arg4 fromDate:(id)arg5;
- (void)getEra:(out int*)arg1 year:(out int*)arg2 month:(out int*)arg3 day:(out int*)arg4 fromDate:(id)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3;
- (BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned int)arg3 afterDate:(id)arg4;
- (BOOL)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3;
- (int)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned int)arg3;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maximumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })minimumRangeOfUnit:(unsigned int)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (unsigned int)firstWeekday;
- (void)setFirstWeekday:(unsigned int)arg1;
- (id)timeZone;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)calendarIdentifier;
- (id)dateFromComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end