/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSContactFetcher : NSObject {
    void * _addressBook;
    CNContactFetchRequest * _fetchRequest;
    id /* block */  _personToContact;
}

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 error:(id*)arg4;
+ (id /* block */)linkedPeopleComparator;

- (id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1;
- (id)_peopleToContactsArray:(struct __CFArray { }*)arg1 abMatchInfo:(id)arg2;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2;
- (id)unifyPeople:(id)arg1 abMatchInfos:(id)arg2 outCNMatchInfos:(id*)arg3;

@end
