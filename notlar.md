soon 
<---!
C++20 işe sınıflar için karşılatırma işlemlerini sağlamak daha kolay hale getirildi.


C++20 standardından önce 6 karşılaştırma operatörü de ayrı ayrı implemet ediliyordu
bunlar ya doğrudan çağrılıyordu ya da çağırdığımız fonksiyonlar tarafından çağrılıyordu
örneğin std::sort
örneğin std::find
set'in üye fonksiyınları gibi



Çok sayıda fonksiyon yazmak yerine 1 ya da 2 fonksiyon yazabiliyoruz.
Bu fonksiyonları derleyiceye yazdırabiliyoruz. (default)
Derleyicinin yazdığı fonksiyoınlar [[nodiscard]] ile bildiriliyor.
Şartlar sağlanıyor ise noexcept olarak bildiriliyor
Şartlar sağlanıyor ise constexpr olarak bildiriliyor

rewritable - reversible


Yeni kurallara göre karşlaştırma operatörleri primary ve secondary olarak iki gruba ayrılıyor

primary operatörler			== ve   <=>
secondary operatörler		!= < > <= >=

primary operatörler			reversible
secondary operatörler		rewritable

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

- diğer karşılaştırma operatörlerinden daha yüksek öncelikli
spacesip operatörünü doğrudan kullanmıyoruz. sadece custom türler için bu operatör fonsiyınuu yazarken kullanıyoruzx.

ürettiği değer tam sayı yüründen değüil ama tam sayı ile karşılaştırıabilir türden

std::strong_ordering
std::weak_ordering
std::partial_ordering



--->
