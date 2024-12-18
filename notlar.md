
<!---
- Sınıf nesnelerinin karşılaştırma operatörleri ile kullanılması önemli bir gereksinimdir. Örneğin _std::string_ nesnelerini sıklıkla karşılaştırma operatörleri ile karşılaştırırız. 
- Bazen de _STL_ algoritmaları ve kap _(container)_ sınıflar sınıf nesnelerini karşılaştırırlar:<br>
Örneğin _std::sort_ fonksiyonu sıralama işlemini yaparken aralıktaki nesneleri < operatörü ile karşılaştırır. <br>
Ya da _std::find_ algoritması aralıktaki değerin aranan değer olup olmadığını sınamak için aralıktaki nesneleri == operatörü ile karşılaştırır.<br>
_std::set_ kabı _(container)_ ekleme ve silme işlemlerinde setteki elemanları ile < operatörü ile karşılaştırır. 

- C++20 standardı ile sınıf türleri _(class types)_ için sınıf nesnelerinin karşılaştırılması _(comparison)_ işlemlerini sağlamak daha kolay hale getirildi.
- Dile yeni eklenen bu operatörün standarttaki resmi ismi _"three way comparison operator"_. Ancak programcılar daha çok _"spaceship"_ operatör terimini kullanıyorlar.
C++20 standardından önce _operator overloading_ mekanizması ile 6 karşılaştırma operatörü de ayrı ayrı tanımlanıyordu.
_spaceship_ operatörün dile eklenmesi ile: 
- Çok sayıda karşılaştırma fonksiyonu yazmak yerine bir ya da iki fonksiyon tanımlamamız çoğunlukla yeterli oluyor.
- Bu fonksiyonları derleyiciye yazdırabiliyoruz. _(default)_
- Şartlar sağlanıyor ise _constexpr_ olarak bildiriliyor
- Şartlar sağlanıyor ise _noexcept_ olarak bildiriliyor
- Derleyicinin yazdığı fonksiyonlar [[nodiscard]] _attribute_ ile bildiriliyor.

_spaceship_ operatörünün atomu \<=\>. Bu iki operand alan _(binary)_ bir operatör:

 ```cpp
a <=> b
```
İlişkisel operatörlerin tanımlı olduğu tüm temel türler için <=> operatörü de temel sentaksta tanımlı. Örneğin _double_ türden değerler karşılaştırma operatölerinin operandı olabiliyor ise _spaceship_ operatörünün de operandı olabiliyor. 
_spaceship_ operatörünün önceliği karşılaştırma operatörlerinin önceliğinden daha yüksek. Öncelik sırasının şöyle olduğunu söyleyebiliriz:

```
<=>
< <= > >=
== !=
```

- operatör karşılaştırma işleminin sonucunu üretiyor. Operatörün ürettiği değer bir tam sayı türünden değil. Operatörün ürettiği değer aşağıdaki türlerden birinden olmak zorunda: 

- std::strong_ordering
- std::weak_ordering
- std::partial_ordering

- _spaceship_ operatörünü kullanabilmek için yukarıdaki türlerin tanımını içeren başlık dosyası olana \<compare> başlık dosyasının koda dahil edilmesi gerekiyorç 
- _spaceship_ operatörü diğer karşılaştırma operatörlerinden daha yüksek öncelikli.
_spacesip_ operatörünü yazdığımız kodlarda doğrudan kullanmıyoruz. Sadece kendi sınıf türlerimiz için bu operatörü yüklediğimizde _(overload)_ kullanıyoruz.

Yeni kurallara göre karşlaştırma operatörleri _primary_ ve _secondary_ olarak iki gruba ayrılıyor

- _primary_ operatörler			== ve   <=>
- _secondary_ operatörler		!= < > <= >=

_primary_ operatörler			_reversible_ olma özelliğine sahipler.<br>
secondary operatörler		_rewritable_ olma özelliğine sahipler. <br>

Örneğin derleyicinin <br>

```cpp
5 == x
```		

gibi bir ifadeyi bir fonksiyon çağrısına dönüştürmesi mümkün değil ise derleyici bu kez <br>

```cpp
x == 5
``` 

ifadesinin geçerli olup olmadığını sınıyor. Yine derleyicinin <br> 
```cpp
a <=> b
```  
gibi bir ifadeyi bir fonksiyon çağrısına dönüştürmesi mümkün değil ise derleyici bu kez
```cpp
b <=> a
```
ifadesinin geçerli olup olmadığını sınıyor. <br>

ikincil _(secondary)_ operatörlerin yeniden yaılabilme özelliği

a != b     !(a == b)    !(b == a) <br>


operator <=>  

Sadece \<=> operatörünü default dersek == opratörünü de _default_ etmiş oluyoruz. _(implicitly generated)_
Ancak kendimizi <=> op.nü yazarsak derleyici == operatörünü bizim için default etmiyor.
Sınıfın veri elemanlarının sınıf tanımı içinde bildirilme sırası önem taşıyor

şöyle bir ifade olsun:

x <= y

eğer derleyici <= operatörünü bulamaz ise

(x <=> y) <= 0
0 <= (y <=> x)

C++20 standardı ile <=> dahil olmak üzere tüm karşılaştırma operatörleri için default bildirimi yapılabiliyor. Ancak uygulamada _<=>_ ve == operatörleri için _default_ bildiriminin yapılması söz konusu. _default_ bildirimleri hem üye operatör fonksiyonları hem de global operatör fonksiyonları için yapılabiliyor.



--->
