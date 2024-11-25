- Sınıf nesnelerinin karşılaştırma operatörleri ile kullanılması önemli bir gereksinimdir. Örneğin _std::string_ nesnelerini sıklıkla karşılaştırma operatörleri ile karşılaştırırız. 
- Bazen de _STL_ algoritmaları ve kap _(container)_ sınıflar sınıf nesnelerini karşılaştırırlar:<br>
Örneğin _std::sort_ fonksiyonu sıralama işlemini yaparken aralıktaki nesneleri < operatörü ile karşılaştırır. <br>
Ya da _std::find_ algoritması aralıktaki değerin aranan değer olup olmadığını sınamak için aralıktaki nesneleri == operatörü ile karşılaştırır.<br>
_std::set_ kabı _(container)_ ekleme ve silme işlemlerinde setteki elemanları ile < operatörü ile karşılaştırır. 

- C++20 standardı ile sınıf türleri _(class types)_ için sınıf nesnelerinin karşılaştırılması _(comparison)_ işlemlerini sağlamak daha kolay hale getirildi.
- Dile yeni eklenen bu operatörün standarttaki resm iismi "three way comparison operator". Ancak programcılar daha çok _"spaceship"_ operatör terimini kullanıyorlar.
C++20 standardından önce _operator overloading_ mekanizması ile 6 karşılaştırma operatörü de ayrı ayrı tanımlanıyordu.
Bu operatörünün dile eklenmesi ile: 
- Çok sayıda karşılaştırma fonksiyonu yazmak yerine bir ya da iki fonksiyon tanımlamamız çoğunlukla yeterli oluyor.
- Bu fonksiyonları derleyiciye yazdırabiliyoruz. _(default)_
- Şartlar sağlanıyor ise _constexpr_ olarak bildiriliyor
- Şartlar sağlanıyor ise _noexcept_ olarak bildiriliyor
- Derleyicinin yazdığı fonksiyonlar [[nodiscard]] ile bildiriliyor.

_spaceship_ operatörünün atomu <=>. Bu iki operand alan (binary) bir operatör:

 a <=> b

- diğer karşılaştırma operatörlerinden daha yüksek öncelikli
spacesip operatörünü doğrudan kullanmıyoruz. sadece custom türler için bu operatör fonsiyınuu yazarken kullanıyoruzx.

ürettiği değer tam sayı yüründen değüil ama tam sayı ile karşılaştırıabilir türden

std::strong_ordering
std::weak_ordering
std::partial_ordering


Yeni kurallara göre karşlaştırma operatörleri _primary_ ve _secondary_ olarak iki gruba ayrılıyor

- _primary_ operatörler			== ve   <=>
- _secondary_ operatörler		!= < > <= >=

primary operatörler			_reversible_ olma özelliğine sahipler.
secondary operatörler		_rewritable_ olma özelliğine sahipler.


5 == x		mümkün değilse   x == 5
a <=> b     mümkün değil ise  b <=> a

a != b     !(a == b)    !(b == a)

operator <=>  

sadece <=> operatörünü default dersek == opratörünü de default etmiş oluyoruz. (implicitly generated)
ancak kendimizi <=> op.nü yazarsak derleyici == operatörünü bizim için default etmiyor.
Sınıfın veri elemanlarının sınıf tanımı içinde bildirilme sırası önem taşıyor

şöyle bir ifade olsun:

x <= y

eğer derleyici <= operatörünü bulamaz ise

(x <=> y) <= 0
0 <= (y <=> x)




--->
