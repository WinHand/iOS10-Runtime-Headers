/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _contentTypes;
    struct shared_ptr<mlcore::LocalizedSearchScope> { 
        struct LocalizedSearchScope {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _coreScope;
    Class  _itemClass;
    MPPropertySet * _itemProperties;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long contentTypes;
@property (nonatomic, readonly) struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope {} *x1; struct __shared_weak_count {} *x2; } coreScope;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly, copy) MPPropertySet *itemProperties;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)contentTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope {} *x1; struct __shared_weak_count {} *x2; })coreScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemClass:(Class)arg1 contentTypes:(unsigned long long)arg2 name:(id)arg3 properties:(id)arg4;
- (Class)itemClass;
- (id)itemProperties;
- (id)name;

@end
